/*
    16.05) Crie uma função que receba as duas notas do aluno no semestre (aceitar somente valores  entre  zero  e  dez)  e  a  porcentagem  de  frequência  (aceitar valores  entre zero e cem).
    
    Exemplo:
                media (9,7,80) 
        
    Deverá mostrar a média e informar se o aluno foi reprovado ou aprovado caso a média seja maior ou igual a 7 e a frequência seja maior ou igual a 75%.
    
    Média : 8,0     88% frequencia (Aprovado)
    Média : 9,0     63% frequencia (Reprovado)
    Média: 6,7      100% frequencia (Reprovado)
*/
# include <stdio.h>
# include <locale.h>

void confereStatusAluno(float nota1, float nota2, int frequencia) {
    float media;

    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        if (frequencia >= 75) {
            printf("Média: %.2f   %d%% frequência (Aprovado)", media, frequencia);
        } else {
            printf("Média: %.2f   %d%% frequência (Reprovado)", media, frequencia);
        }
    } else {
        printf("Média: %.2f   %d%% frequência (Reprovado)", media, frequencia);
    }
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float nota1, nota2;
    int frequencia;
    // Inputs
    printf("Digite a primeira nota: "); 
    scanf("%f", &nota1);
    while (nota1 < 0 || nota1 > 10) {
        printf("Valor inválido para nota! Deve estar entre 0 e 10.\nNota 1: ");
        scanf("%f", &nota1);
    }

    printf("Digite a primeira nota: "); 
    scanf("%f", &nota2);
    while (nota2 < 0 || nota2 > 10) {
        printf("Valor inválido para nota! Deve estar entre 0 e 10.\nNota 2: ");
        scanf("%f", &nota2);
    }

    printf("Porcentagem de frequência: ");
    scanf("%d", &frequencia);

    confereStatusAluno(nota1, nota2, frequencia);
    
    // Processing

    // Outputs

    return 0;
}