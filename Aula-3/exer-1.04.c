/*
    1.4 Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o
        valor correspondente em graus Celsius.
                            Fórumula => C/5=(F-32)/9
        [Entrada]                           [Saída]
        302 (temperatura em Fahrenheit)
                                            150 (temperatura em Celsius)
*/

# include <stdio.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // variaveis
    int tempFahrenheit, tempCelsius;

    // entrada de dados
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &tempFahrenheit);

    // processamento
    tempCelsius = ((tempFahrenheit - 32) / 9) * 5;

    // saida
    printf("\n%.2dº (temperatura em Celcius)\n", tempCelsius);

    return 0;
}