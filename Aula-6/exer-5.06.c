/*
    5.6 Escreva um algoritmo que leia a idade de 2 homens e 2 mulheres (considere que a idade dos homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.

    [Entrada]     | [Entrada]     | [Entrada]     | [Entrada]
    20 (homem 1)  | 22 (homem 1)  | 32 (homem 1)  | 23 (homem 1)
    25 (homem 2)  | 27 (homem 2)  | 15 (homem 2)  | 18 (homem 2)
    30 (mulher 1) | 38 (mulher 1) | 27 (mulher 1) | 27 (mulher 1)
    35 (mulher 2) | 31 (mulher 2) | 29 (mulher 2) | 19 (mulher 2)
                  |               |               |          
    [Saída]       | [Saída]       | [Saída]       | [Saída]  
    55 (soma)     | 58 (soma)     | 59 (soma)     | 42 (soma)
    700 (produto) | 836 (produto) | 435 (produto) | 486 (produto)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int ageMan_1, ageMan_2, ageWoman_1, ageWoman_2, sum, prod;
    // Inputs
    printf("Dgite a idade do primeiro homem: "); scanf("%d", &ageMan_1);
    printf("Dgite a idade do segundo homem: "); scanf("%d", &ageMan_2);
    printf("Dgite a idade do primeira mulher: "); scanf("%d", &ageWoman_1);
    printf("Dgite a idade do segunda mulher: "); scanf("%d", &ageWoman_2);

    // Processing

    // soma
    if (ageMan_1 > ageMan_2) {
        if (ageWoman_1 < ageWoman_2){
            sum = ageMan_1 + ageWoman_1;
            prod = ageMan_2 * ageWoman_2;
        } else {
            sum = ageMan_1 + ageWoman_2;
            prod = ageMan_2 * ageWoman_1;
        }
    } else {
        if (ageWoman_1 < ageWoman_2) {
            sum = ageMan_2 + ageWoman_1;
            prod = ageMan_1 * ageWoman_2;
        } else {
            sum = ageMan_2 + ageWoman_2;
            prod = ageMan_1 * ageWoman_1;
        }
    }
        

    // Outputs
    printf ("%d (soma)\n%d (produto)", sum, prod);


    return 0;
}