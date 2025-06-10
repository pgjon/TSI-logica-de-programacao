/*
   Escreva um algoritmo para ler a quantidade de famílias que moram em um condomínio. A seguir para cada família informar a quantidade de filhos. Para cada filho informar a idade e o sexo (codificado da seguinte forma 1.Masculino 2.Feminino –considere que não serão informados valores inválidos). Exibir para cada família uma palavra que indique o sexo do filho mais velho. Após o término da digitação dos dados escrever.
   
        • Quantas famílias possuem filhos maiores de idade.
        • A média de idade dos filhos homens maiores de idade de todos informados.
        
    [Entrada]                       [Saída]
    5 (quantidade de famílias)
    3 (quantidade de filhos)

    15 (idade) 1 (masculino)
    17 (idade) 1 (masculino)
    14 (idade) 2 (feminino)       
                                    Masculino
    1 (quantidade de filhos)
    21 (idade) 2 (feminino)       
                                    Feminino
    4 (quantidade de filhos)
    15 (idade) 1 (masculino)
    19 (idade) 1 (masculino)
    32 (idade) 2 (feminino)
    21 (idade) 2 (feminino)       
                                    Feminino
    2 (quantidade de filhos)
    21 (idade) 1 (masculino)
    24 (idade) 1 (masculino)      
                                    Masculino
    3 (quantidade de filhos)
    8 (idade)  2 (feminino)
    14 (idade) 1 (masculino)
    12 (idade) 2 (feminino)       
                                    Masculino
                                    3 (qde. de famílias com filhos maiores de idade)
                                    21.33 (média de idade dos homens m. de idade)


*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int qtdFamilia, i, qtdFilho, sexo, idade, idadeMaior = 0, sexoMaiorIdade, maiorIdade = 0, qtdFamiliaComFIlhoMaiorIdade = 0;
    float mediaHomemMaiorIdade = 0, qtdHomensMaiorIdade = 0, somaMaiorIdadeHomens = 0;
    // Inputs
    printf("Quantidade de família? "); scanf("%d", &qtdFamilia);
    if (qtdFamilia < 1) 
        printf("Quantidade de família inválida!");

    // Processing
    for (i = 1; i <= qtdFamilia; i++) {
        printf("Quantidade de filhos? "); scanf("%d", &qtdFilho);
        while (qtdFilho < 0) {
            printf("Quantidade de filhos inválido!\nQuantidade de filhos? "); scanf("%d", &qtdFilho);
        }

        printf("Para sexo: (1) Masculino (2) Feminino\n");

        for (int j = 1; j <= qtdFilho; j++) {
            printf("Idade: "); scanf("%d", &idade);
            while (idade < 0) {
                printf("Idade inválida!\nIdade: "); scanf("%d", &idade);
            }

            if (idade >= 18) {
                // conferindo maior idade
               // printf("Maior idade %d", idade);
                if (sexo == 1) {
                    qtdHomensMaiorIdade++;
                    somaMaiorIdadeHomens += idade;
                }
                maiorIdade++;
            }

            printf("Sexo: "); scanf("%d", &sexo);
            while ((sexo != 1) && (sexo != 2)) {
                printf("Sexo inválido!\nSexo: "); scanf("%d", &sexo);
            }

            if (idade > idadeMaior) {
                idadeMaior = idade;

                if (sexo == 1) {
                    sexoMaiorIdade = 1;
                } else {
                    sexoMaiorIdade = 2;
                }
            }
        }

        if (maiorIdade > 0) {
            qtdFamiliaComFIlhoMaiorIdade++;     
        }

        if (sexoMaiorIdade == 1) {
            printf("Masculino\n\n");
        } else {
            printf("Feminino\n\n");
        }
        sexo = 0;
        idade = 0;
        idadeMaior = 0;
        maiorIdade = 0;
        sexoMaiorIdade = 0;
    }

    printf("Soma maior idade %f\nQuantidade homens maior %f", somaMaiorIdadeHomens, qtdHomensMaiorIdade);

    mediaHomemMaiorIdade = somaMaiorIdadeHomens / qtdHomensMaiorIdade;

    // Outputs
    printf("%d (qde. de famílias com filhos maiores de idade)\n", qtdFamiliaComFIlhoMaiorIdade);
    printf("%.2f (média de idade dos homens m. de idade)\n", mediaHomemMaiorIdade);
    return 0;
}