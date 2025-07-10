/*
    17.01) Escreva  uma  função potencia(base,  expoente) que,  quando  chamada,  retorna base expoente.  Por  exemplo, potencia(3,  4) deve  retornar 81. Valide  o valor  para  o expoente, assegurando que ele seja um inteiro maior ou igual a 1. 
*/
# include <stdio.h>
# include <locale.h>
# include <math.h>

int potencia(int base, int expoente) {
    int resultado;

    resultado = pow(base, expoente);

    return resultado;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int base, expoente;
    // Inputs

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);
        
    // Processing
    while (expoente < 1) {
        printf("Valor inválido para expoente!\nDeve ser maior que 0.\nExpoente: ");
        scanf("%d", &expoente);
    }
    
    // Outputs
    printf("O resultado é: %d\n", potencia(base, expoente));

    return 0;
}