/*
    6.6     Escreva um algoritmo para ler as coordenadas (X, Y) de vários pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando o usuário informar um valor NULO (zero) para a coordenada X (nesta situação sem fazer a leitura da coordenada Y). 
    
    OBS: Considere que não será informado um valor igual a 0 para Y.
    
    [Entrada]       [Saída]
    2  2            primeiro
    3 -2            quarto
    4  7            primeiro
    8 -1            quarto
    -7 1            segundo
    0

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int x, y;
    
    // Processing
    do {
        // Inputs
        printf("Digite a coordenada X: "); scanf("%d", &x);

        if (x == 0)
            break;

        printf("Digite a coordenada Y: "); scanf("%d", &y);

        // Processing
        // Quadrante 1: x e y > 0
        if ((x > 0) && (y > 0)) {
            printf("Primeiro\n");
        }
        // Quadrante 2: x < 0 e y > 0
        if ((x < 0) && (y > 0)) {
            printf("Segundo\n");
        }
        // Quadrante 3: x e y < 0
        if ((x < 0) && (y < 0)) {
            printf("Terceiro\n");
        }
        // Quadrante 4: x > 0 e y < 0 
        if ((x > 0) && (y < 0)) {
            printf("Quarto\n");
        }

    } while(1);
    

    // Outputs

    return 0;
}