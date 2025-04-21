/*
    1.7 Escreva um algoritmo para ler o número de eleitores de um município, o número de votos 
        brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação 
        ao total de eleitores. 
                [Entrada]                              [Saída] 
        200 (quantidade de eleitores) 
        10  (quantidade de votos brancos) 
        20  (quantidade de votos nulos) 
        160 (quantidade de votos válidos) 
                                                5 (percentual de votos brancos) 
                                                10 (percentual de votos nulos) 
                                                80 (percentual de votos válidos)
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    // Variáveis
    int voter, whiteVotes, nullVotes, validVotes;

    // Entrada Dados
    printf("Enter the number of voters: ");
    scanf("%d", &voter);

    printf("Enter the number of white votes: ");
    scanf("%d", &whiteVotes);

    printf("Enter the number of null votes: ");
    scanf("%d", &nullVotes);

    printf("Enter the number of valid votes: ");
    scanf("%d", &validVotes);

    // Processamento
    whiteVotes = (whiteVotes * 100) / voter;
    nullVotes = (nullVotes * 100) / voter;
    validVotes = (validVotes * 100) / voter;

    // Saída Dados
    printf("\n%d (percentage of white votes)\n", whiteVotes);
    printf("%d (percentage of null votes)\n", nullVotes);
    printf("%d (percentage of valid votes)\n", validVotes);
}