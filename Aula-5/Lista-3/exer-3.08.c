/*
    8   Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere que o 
        usuário não informará valores iguais. 
        
        [Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada] 
        5        | 8        | 5        | 5        | 3        | 2 
        3        | 2        | 7        | 1        | 8        | 5 
        1        | 5        | 2        | 9        | 4        | 6 
                |          |          |          |          | 
        [Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída] 
        1 3 5    | 2 5 8    | 2 5 7    | 1 5 9    | 3 4 8    | 2 5 6
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int num_1, num_2, num_3;
    // Inputs
    printf("Digite o primeiro valor: ");
    scanf("%d", &num_1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num_2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num_3);
    // Processing
    if ((num_1 < num_2) && (num_1 < num_3)){
        if (num_2 < num_3){
            printf("%d, %d, %d", num_1, num_2, num_3);
        }else{
            printf("%d, %d, %d", num_1, num_3, num_2);
        }
    }

    if ((num_2 < num_1) && (num_2 < num_3)){
        if (num_1 < num_3){
            printf("%d, %d, %d", num_2, num_1, num_3);
        }else{
            printf("%d, %d, %d", num_2, num_3, num_1);
        }
    }

    if ((num_3 < num_1) && (num_3 < num_2)){
        if (num_1 < num_2){
            printf("%d, %d, %d", num_3, num_1, num_2);
        }else{
            printf("%d, %d, %d", num_3, num_2, num_1);
        }
    }
    // Outputs

    return 0;
}