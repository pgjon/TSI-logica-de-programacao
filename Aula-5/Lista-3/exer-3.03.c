/*
    3   Escreva um algoritmo para ler a quantidade de lados de um polígono regular, e a medida do
        lado (a medida do lado só deve ser lida para polígonos com 3 ou 4 lados). Calcular e imprimir o
        seguinte:
        • Se a quantidade de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
        • Se a quantidade de lados for igual a 4 escrever QUADRADO e o valor da sua área.
        • Se a quantidade de lados for igual a 5 escrever PENTÁGONO.
        OBS: Considere que o usuário só informará os valores 3, 4 ou 5.

        [Entrada]           |  [Entrada]           |  [Entrada]
        3 (número de lados) |  4 (número de lados) |  5 (número de lados)
        2 (medida do lado)  |  5 (medida do lado)  |
                            |                      |
        [Saída]             |  [Saída]             |  [Saída]
        Triângulo           |  Quadrado            |  Pentágono
        6 (perímetro)       |  25 (área)           |
*/

# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtdLados, medidaLados;

    printf("Digite a quantidade de lados composta pela figura: ");
    scanf("%d", &qtdLados);

    if (qtdLados == 5) {
        printf("Pentágono\n");
    }

    if (qtdLados < 5 && qtdLados > 0) {
        printf("Digite a medida dos lados: ");
        scanf("%d", &medidaLados);

        if (qtdLados == 3)
        {
            medidaLados = medidaLados * 3;
            printf("Triângulo\n");
            printf("%d (Perímetro) \n", medidaLados);
        }
        if (qtdLados == 4)
        {
            medidaLados = medidaLados * medidaLados;
            printf("Quadrado\n%d (área) \n", medidaLados);
        }
    }
    return 0;
}