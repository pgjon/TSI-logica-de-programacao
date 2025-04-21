/*  6.  Acrescente ao exercício anterior a mensagem ‘Você foi REPROVADO! Estude mais’ caso a média 
        calculada seja menor que 6,0. 
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); // define o idioma para português
    
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
        printf("\nPARAB�NS! Voc� foi aprovado\n");
    }
    else
        printf("\nVoc� foi REPROVADO! Estude mais\n");
    
    // saida
    printf("\nA m�dia semestral �: %.2f\n", media); // saida

    return 0; // finaliza o programa
}