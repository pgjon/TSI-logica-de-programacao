/*  6.  Acrescente ao exercício anterior a mensagem ‘Você foi REPROVADO! Estude mais’ caso a média 
        calculada seja menor que 6,0. 
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
    else
        printf("\nVocê foi REPROVADO! Estude mais\n");
    
    // saida
    printf("\nA média semestral é: %.2f\n", media);

    return 0; // finaliza o programa
}