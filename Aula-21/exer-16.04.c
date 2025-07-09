/*
    16.04) Desenvolva  um  programa  que  calcule  um  número  indeterminado  de  vezes,  a operação   de   potenciação.   Para   tanto,   escreva   a   função potencia(base, expoente)que,    quando    chamada,    retorna baseexpoente.    Por    exemplo, potencia(3, 4)deve retornar 81. O programa termina a execução quando o expoente informado for um inteiro menor que um, nestasituação, o cálculo não deve ser executado). 
*/
# include <stdio.h>
# include <locale.h>
# include <math.h>

void potencia(int base, int expoente) {
    int resultado;

    resultado = pow(base, expoente);

    printf("%d\n", resultado);
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int base, expoente;
    // Inputs

    do {
        printf("Digite a base: ");
        scanf("%d", &base);

        printf("Digite o expoente: ");
        scanf("%d", &expoente);

        if (expoente < 0) break;

        potencia(base, expoente);
        
    } while(1);
    // Processing

    // Outputs

    return 0;
}