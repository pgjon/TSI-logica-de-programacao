/*
    5.7 Escreva um algoritmo que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é acutângulo, retângulo ou obtusângulo.    

        OBS:triângulo retângulo: possui um ângulo reto.
        triângulo obtusângulo: possui um ângulo obtuso.
        triângulo acutângulo: possui 3 ângulos agudos.

        [Entrada]  | [Entrada]  | [Entrada]  | [Entrada]
        50 (ang 1) | 90 (ang 1) | 30 (ang 1) | 45 (ang 1)
        60 (ang 2) | 40 (ang 2) | 90 (ang 2) | 45 (ang 2)
        70 (ang 3) | 50 (ang 3) | 60 (ang 3) | 90 (ang 3)
                   |            |            |
        [Saída]    | [Saída]    | [Saída]    | [Saída]
        Acutângulo | Retângulo  | Retângulo  | Retângulo
        -----------++-----------+-+----------+---
        [Entrada]   | [Entrada]   | [Entrada]
        100 (ang 1) | 35  (ang 1) | 40  (ang 1)
        40  (ang 2) | 110 (ang 2) | 30  (ang 2)
        40  (ang 3) | 35  (ang 3) | 110 (ang 3)
                    |             |
        [Saída]     | [Saída]     | [Saída]
        Obtusângulo | Obtusângulo | Obtusângulo.
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int anguloA, anguloB, anguloC;

    // Inputs
    printf("Digite o valor do ângulo A: "); scanf("%d", &anguloA);
    printf("Digite o valor do ângulo B: "); scanf("%d", &anguloB);
    printf("Digite o valor do ângulo C: "); scanf("%d", &anguloC);

    // Processing
    if ((anguloA + anguloB + anguloC) != 180 || anguloA <= 0 || anguloB <= 0 || anguloC <= 0) {
        printf("Os ângulos inseridos não forma um triângulo!");
    } else if ((anguloA == 90) || (anguloB == 90) || (anguloC == 90)) {
            printf("Retângulo");
    } else if ((anguloA > 90) || (anguloB > 90) || (anguloC > 90)) {
            printf("Obtusângulo");
    } else {
            printf("Acutângulo");
        }
        
    // Outputs

    return 0;
}