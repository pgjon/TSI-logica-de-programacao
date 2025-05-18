/*
    3.1 Escreva um algoritmo para ler as notas da 1ª e 2ª avaliações de um aluno, calcular a média e
        escrever se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a
        média calculada.
        OBS:  Nota mínima para aprovação: 6,0
        Nota mínima para ter direito ao exame: 3,0.
        [Entrada]     |  [Entrada]      |  [Entrada]
        5.0 (nota 1)  |  8.0 (nota 1)   |  2.0 (nota 1)
        4.0 (nota 2)  |  9.0 (nota 2)   |  1.0 (nota 2)
                      |                 |
        [Saída]       |  [Saída]        |  [Saída]
        4.5 (média)   |  8.5 (média)    |  1.5 (média)
        em Exame      |  Aprovado       |  Reprovado
*/

# include <stdio.h>
# include <locale.h>

int main() { 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float nota_1, nota_2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2);

    media = (nota_1 + nota_2) / 2;

    if (media >= 6)
        printf("\n%.1f (média)\nAprovado", media);
    if (media >= 3 && media < 6)
        printf("\n%.1f (média)\nem Exame", media);
    if (media < 3 && media >= 0)
        printf("\n%.1f (média)\nReprovado", media);

    return 0;
}