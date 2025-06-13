/*
    Escreva um algoritmo para ler um inteiro Q (máximo 10). A seguir ler o ano de nascimento de Q pessoas armazenando-os em um vetor. A seguir ler um ano de referência e copiar para outro vetor a idade que cada pessoa armazenada no vetor lido terá no ano de referência informado. Escrever o conteúdo do vetor de idades após o término da cópia.
    
    [Entrada]                        [Saída]
    6 (Q)
    1980 1990 2001 1992 1995 1970
    2020 (ano referência)
                                    40 30 19 28 25 50
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, vetor[10], anoRef, idade[10], maiorAno = 0, menorAno = 99999;
    // Inputs
    printf("Digite uma quantidade de pessoas: "); scanf("%d", &Q);
    // validação para Q ser máximo 10 e pelo menos 1
    while(Q < 1 || Q > 10) {
        printf("Quantidade de pessoas inválida! Máximo!\nQtd Pessoas: )"); scanf("%d", &Q);
    }
    // Processing
    // lendo datas e armazendo no vetor
    for (i = 0; i < Q; i++) {
        printf("Digite ano de nascimento: "); scanf("%d", &vetor[i]);

        // buscando o maior ano do vetor
        if (vetor[i] > maiorAno) {
            maiorAno = vetor[i];
        }

        // buscanfo menor ano
        if (vetor[i] < menorAno) {
            menorAno = vetor[i];
        }
    }

    // ler ano de referência
    printf("Digite um ano de referência: "); scanf("%d", &anoRef);
    // validação ano de referência não poder ser menor que a data mais recente
    while (anoRef < maiorAno) {
        printf("Ano de referência inválido! Ano deve ser maior que a data mais recente!\n");
        printf("Ano de referência: "); scanf("%d", &anoRef);
    }

    // validação para não ter uma pessoa muito velha
    while (anoRef - menorAno > 117) {
        // em 12/06/2025 a pessoa mais velho viva tem 116 anos
        int idadePessoa = anoRef - menorAno;

        printf("Ano de referência inválido!\nImpossível existir uma pessoa com %d anos\n", idadePessoa);
        printf("Ano de referência: "); 
        scanf("%d", &anoRef);
    }

    // vetor para calcular as idades
    for (i = 0; i < Q; i++) {
        idade[i] = anoRef - vetor[i];

        // saida das idadaes
        printf("%d ", idade[i]);
    }
    // Outputs

    return 0;
}