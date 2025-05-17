/*
    7.8     A Federação Pelotense de Futebol necessita um software para fazer uma estatística sobre os torcedores dos clubes pelotenses. Escreva um algoritmo para ler uma quantidade indeterminada de duplas de valores representando o código do time (1.Brasil 2.Pelotas 3.Farroupilha) e a idade do torcedor. O algoritmo termina ao ser fornecido um código inválido (nesta situação a idade não deve ser lida). Calcular e escrever o percentual de torcedores de cada time em relação ao total, e a quantidade de torcedores do Brasil com idade entre 15 (inclusive) e 20 (inclusive) anos.
    
    [Entrada]                    [Saída]
    1 (Brasil)      12 (idade)
    1 (Brasil)      19 (idade)
    2 (Pelotas)     15 (idade)
    3 (Farroupilha) 17 (idade)
    1 (Brasil)      21 (idade)
    1 (Brasil)      17 (idade)
    3 (Farroupilha) 12 (idade)
    2 (Pelotas)     31 (idade)
    2 (Pelotas)     11 (idade)
    1 (Brasil)      16 (idade)
    0
                                Brasil: 50
                                Pelotas: 30
                                Farroupilha 20
                                3
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int torcedor, idade;
    int percentualBrasil = 0, percentualPelotas = 0, percentualFarroupilha = 0, totalTorcedor = 0;
    int torcedorMaior15menor20;
    // Inputs
    printf("Digite abaixo o valor correspondente ao time que você torce e sua idade.\n");
    printf("Torce para qual time? (1.Brasil 2.Pelotas 3.Farroupilha)\n");
    // Processing
    do {
        printf("Time: "); scanf("%d", &torcedor);
        while ((torcedor != 1) || (torcedor != 2) || (torcedor != 3)) {
            if (torcedor == 0) {
                break;
            } else {
                printf("Valor inválido\nTime: "); scanf("%d", &torcedor);
            }
        }

        printf("Idade: "); scanf("%d", &idade);
        while (idade < 6 || idade > 150) {
            printf("Idade inválida\nIdade: "); scanf("%d", &idade);
        }

        if (torcedor == 1) {
            percentualBrasil++;
            if ((idade >= 15) && (idade <= 20)) {
                torcedorMaior15menor20++;
            }
        } else if (torcedor == 2) {
            percentualPelotas++;
        } else {
            percentualFarroupilha++;
        }

        totalTorcedor++;

    } while ((torcedor != 1) || (torcedor != 2) || (torcedor != 3));
    
    // Processing
    percentualBrasil = percentualBrasil * 100 / totalTorcedor;
    percentualPelotas = percentualPelotas * 100 / totalTorcedor;
    percentualFarroupilha = percentualFarroupilha * 100 / totalTorcedor;

    // Outputs
    printf("Brasil: %d \nPelotas: %d \nFarroupilha: %d", percentualBrasil, percentualPelotas, percentualFarroupilha);
    printf("\n%d (Jogadores do Brasil com idade entre 15 e 20 anos)", torcedorMaior15menor20);

    return 0;
}