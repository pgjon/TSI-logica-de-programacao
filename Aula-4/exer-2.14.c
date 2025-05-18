/*
    14. Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores 
        positivos e inteiros) e escrever se é par ou ímpar.
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // variables
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Número digitado e par: %d", num);
    }else
        printf("Número digitado e ímpar: %d", num);
    
    return 0;
}