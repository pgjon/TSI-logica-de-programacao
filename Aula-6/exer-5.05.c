/*
    5.5 Escreva um algoritmo que leia as medidas dos lados de um triângulo e escreva se ele é EQUILÁTERO, ISÓSCELES ou ESCALENO.

        OBS:
        triângulo equilátero: Possui os 3 lados iguais.
        triângulo isósceles:  Possui 2 lados iguais.
        triângulo escaleno:  Possui 3 lados diferentes.

        [Entrada]  | [Entrada]  | [Entrada]   | [Entrada]  | [Entrada]
        3 (lado 1) | 3 (lado 1) | 5 (lado 1)  | 5 (lado 1) | 3 (lado 1)
        3 (lado 2) | 4 (lado 2) | 5 (lado 2)  | 3 (lado 2) | 5 (lado 2)     
        3 (lado 3) | 5 (lado 3) | 3 (lado 3)  | 5 (lado 3) | 5 (lado 3)
                   |            |             |            |
        [Saída]    | [Saída]    | [Saída]     | [Saída]    | [Saída]
        Equilátero | Escaleno   | Isósceles   | Isósceles  | Isósceles
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int ladoA, ladoB, ladoC;

    // Inputs
    printf("Digite lado A: "); scanf("%d", &ladoA);
    printf("Digite lado B: "); scanf("%d", &ladoB);
    printf("Digite lado C: "); scanf("%d", &ladoC);

    // Processing
    if ((ladoA == ladoB) && (ladoA == ladoC))
        printf("Equilátero");

    // ((a = b) e (a != b)) ou ((a = c) e (a != b))
    if (((ladoA == ladoB) && (ladoA != ladoC)) || ((ladoA == ladoC) && (ladoA != ladoB)) || ((ladoB == ladoC) && (ladoB != ladoA)))
        printf("Isósceles");
    
    if ((ladoA != ladoB) && (ladoA != ladoC) && (ladoB != ladoC))
        printf("Escaleno");
    

    // Outputs

    return 0;
}