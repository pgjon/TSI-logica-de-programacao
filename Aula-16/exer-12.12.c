/*
    Escreva um algoritmo para ler as temperaturas medidas durante as primeiras 12 horas inteiras do dia. A seguir ler várias duplas de valores representando os limites de um intervalo em horas. Para cada intervalo escrever a temperatura média. O algoritmo termina quando o limite inferior do intervalo for maior que o limite superior. Considere que os valores que limitam o intervalo representam horas inteiras válidas.
    
    [Entrada]                            [Saída]
    10.5  11.6  15.8  17.0  17.5  18.0
    15.0  15.2  15.7  17.2  17.5  20.0
    
    1  12                                15.916667
    2  2                                 11.6
    2  8                                 15.728571
    10 12                                18.233333
    7  6
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num1, num2; float media, temp[12], soma;
    // Inputs
        for (i = 0; i < 12; i++) {
            printf("Temp: "); scanf("%f", &temp[i]);
        }
    // Processing
    while (1) {
        soma = 0.0; media = 0.0;

        printf("\nValor 1: "); scanf("%d", &num1);
        while (num1 < 1 || num1 > 12) {
            printf("Valor inválido!\nValor 1: "); scanf("%d", &num1);
        }

        printf("Valor 2: "); scanf("%d", &num2);
        while (num2 < 1 || num2 > 12) {
            printf("Valor inválido!\nValor 1: "); scanf("%d", &num2);
        } if (num2 < num1) break;

        for (i = num1 - 1; i <= num2 - 1; i++) {
            soma += temp[i];
        }
        
        media = soma / (num2 - num1 + 1);

        printf("%f\n", media);
    }   
    // Outputs

    return 0;
}