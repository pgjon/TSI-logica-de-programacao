/*
    5.3)    Escreva um algoritmo para ler as 4 notas obtidas por um aluno em 4 avaliações. 
            Calcular a média usando a seguinte fórmula:
                        𝑀é𝑑𝑖𝑎 = 𝑛1 + 𝑛2𝑥2 + 𝑛3𝑥3 + 𝑛4 / 7

            A seguir imprima a média e o conceito do aluno baseado na seguinte tabela:
            
            Média                                   Conceito
            9,0 ou acima de 9,0                     A
            entre 7,5 (inclusive) e 9,0             B
            entre 6,0 (inclusive) e 7,5             C
            abaixo de 6,0                           D
            
            [Entrada]   | [Entrada]   | [Entrada]   | [Entrada]
            8 (N1)      | 9   (N1)    | 6   (N1)    | 8 (N1)
            5 (N2)      | 9.5 (N2)    | 8   (N2)    | 3 (N2)
            7 (N3)      | 9   (N3)    | 8.5 (N3)    | 2 (N3)
            8 (N4)      | 9.2 (N4)    | 7   (N4)    | 3 (N4)
                        |             |             |
            [Saída]     | [Saída]     | [Saída]     | [Saída]
            6.72 (média)| 9.17 (média)| 7.78 (média)| 3.28 (média)
            C (conceito)| A (conceito)| B (conceito)| D (conceito)
            ------------+-------------+-------------+-----------
            [Entrada]   | [Entrada]   | [Entrada]   |
            7.5 (N1)    | 9(N1)       | 6 (N1)      |
            7.5 (N2)    | 9 (N2)      | 6 (N2)      |
            7.5 (N3)    | 9 (N3)      | 6 (N3)      |
            7.5 (N4)    | 9 (N4)      | 6 (N4)      |
                        |             |             |
            [Saída]     | [Saída]     | [Saída]     |
            7.5 (média) | 9 (média)   | 6 (média)   |
            B (conceito)| A (conceito)| C (conceito)|

*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float n1, n2, n3, n4, media;
    // Inputs
    printf("Digite a primeira nota: "); scanf("%f", &n1);
    printf("Digite a segunda nota: "); scanf("%f", &n2);
    printf("Digite a terceira nota: "); scanf("%f", &n3);
    printf("Digite a quarta nota: "); scanf("%f", &n4);
    // Processing
    media = (n1 + n2 * 2 + n3 * 3 + n4) / 7;

    if (media >= 9 ){
        printf("\n%.2f (média)\nA (Conceito)", media);
        return 0;
    }

    if (media >= 7.5 ){
        printf("\n%.2f (média)\nB (Conceito)", media);
        return 0;
    }

    if (media >= 6 ){
        printf("\n%.2f (média)\nC (Conceito)", media);
        return 0;
    }

    if (media < 6 ){
        printf("\n%.2f (média)\nD (Conceito)", media);
        return 0;
    }

    // Outputs

}