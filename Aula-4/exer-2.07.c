/*
    7.  Escreva um algoritmo para ler um valor e escrever a mensagem 'É maior que 100'  se o valor 
        lido for maior que 100, caso contrário escrever 'NÃO é maior que 100'.
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeroQualquer;

    printf("\nDigite um numero inteiro qualquer: ");
    scanf("%d", &numeroQualquer);

    if(numeroQualquer > 100){
        printf("\nNúmero inserido é maior que 100.");
    }else
        printf("\nNúmero inserido não é maior que 100.");

    return 0;
}