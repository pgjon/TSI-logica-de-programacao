/*
    8.  Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor 
        zero como positivo.
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;

    printf("\nDigite um número qualquer para eu dizer se é POSITIVO ou NEGATIVO: ");
    scanf("%d", &numero);

    if(numero <= 0){
        printf("\nNúmero digitado é NEGATIVO!");
    }else
        printf("Número digitado é POSITIVO!");

    return 0;
}