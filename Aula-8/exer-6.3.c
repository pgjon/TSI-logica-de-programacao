/*
    6.3 Escreva um algoritmo para ler as notas de 2 avaliações de uma quantidade indeterminada de alunos. 
    Calcular e escrever a média semestral de cada aluno. O algoritmo deve ser encerrado ao ser fornecido 
    para a nota da primeira avaliação um valor negativo (nesta situação a segunda nota não deve ser lida).
    
    [Entrada]              [Saída]
    8 (nota 1) 9 (nota 2)  8.5 (média)
    5 (nota 1) 7 (nota 2)  6   (média)
    -1 (nota 1)
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float nota1, nota2, media;

    // Inputs

    // Processing
    do {
        printf("Digite a primeira nota: "); scanf("%f", &nota1);

        if (nota1 < 1){
            break;
        }

        printf("Digite a segunda nota: "); scanf("%f", &nota2);
        
        media = (nota1 + nota2) / 2;

        printf("%.2f\n", media);
    }while (nota1 > 0);
    // Outputs

    return 0;
}