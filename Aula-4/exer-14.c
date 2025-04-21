/*
    14. Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores 
        positivos e inteiros) e escrever se é par ou ímpar.
*/

# include <stdio.h>
# include <math.h>

int main(){

    // variables
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Numero digitado e par: %d", num);
    }else
        printf("Numero digitado e impar: %d", num);
    
    return 0;
}