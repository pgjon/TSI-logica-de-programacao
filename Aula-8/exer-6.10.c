/*
    6.10    Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e imprimir a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente. Deve ser impressa a mensagem "Nota inválida"caso a nota informada não pertença ao intervalo [0,10].
    
    [Entrada]                 [Saída]
    -2 (nota 1)               Nota inválida
    11 (nota 1)               Nota inválida
    9  (nota 1)               
    12 (nota 2)               Nota inválida
    10 (nota 2)               9.5 (média)
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int nota1, nota2; float media;

    // Input
    printf("Digite a 1º nota: ");
    // Processing
    do {
        scanf("%d", &nota1);
        // Output
        if (nota1 < 0 || nota1 > 10){
            printf("Nota inválida\n");
            printf("1º nota: ");
        }
        
    } while (nota1 < 0 || nota1 > 10);

    // Input
    printf("Digite a 2º nota: ");
    // Processing
    do {
        scanf("%d", &nota2);
        // Output
        if (nota2 < 0 || nota2 > 10){
            printf("Nota inválida\n");
            printf("2º nota: ");
        }
        
    } while (nota2 < 0 || nota2 > 10);
    // Processing
    media = (nota1 + nota2) / 2.0;
    // Output
    printf("%.1f (média)", media);

    return 0;
}