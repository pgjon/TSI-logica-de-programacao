/*  9.  Tendo como entrada a altura e o sexo de uma pessoa (1-homens 2-mulheres), construa um
        algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:
             - para homens:   (72.7 * h)-58
             - para mulheres:  (62.1*h)-44.7
*/

# include <stdio.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int sexo;
    float altura, pesoIdeal;

    printf("\nQual seu Sexo? (1-Homem 2-Mulher): ");
    scanf("%d", &sexo);

    printf("Qual sua altura: ");
    scanf("%f", &altura);

    if (sexo == 1)
    { // homem
        pesoIdeal = (72.7 * altura) - 58;
        printf("Você é homem e seu peso ideal é %.2f Kg!", pesoIdeal);
    }
    else
    {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Você é mulher e seu peso ideal é %.2f Kg!", pesoIdeal);
    }

    return 0;
}