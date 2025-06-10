/*  5.  Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular 
        e escrever a média semestral e a seguinte mensagem: "Parabéns! Você foi aprovado" somente 
        se o aluno foi aprovado. 
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); // define o idioma para português
    
    // variaveis
    int nota1, nota2;
    float media;

    // entrada
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    // processamento
    media = (nota1 + nota2) / 2;

    if(media >= 7){
        printf("\nPARABÉNS! Você foi aprovado\n");
    }
    
    // saida
    printf("A média semestral é: %.2f\n", media); // saida

    return 0; // finaliza o programa
}