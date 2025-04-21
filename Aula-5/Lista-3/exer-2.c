/*  
    2   Escreva um algoritmo para ler a quantidade de gols marcados pelo Pelotas e a quantidade 
        de gols marcados pelo Brasil em um clássico BRA-PEL. Escrever o nome do vencedor. Caso não 
        haja vencedor deverá ser impressa a palavra EMPATE.  
        [Entrada]           |  [Entrada]          |  [Entrada] 
        4 (gols do Pelotas) |  2 (gols do Pelotas)|  0 (gols do Pelotas) 
        2 (gols do Brasil)  |  2 (gols do Brasil) |  1 (gols do Brasil) 
                            |                     | 
        [Saída]             |  [Saída]            |  [Saída] 
        Pelotas             |  Empate             |  Brasil
*/

# include <stdio.h>

int main(){

    int qtdGolsBrasil, qtdGolsPelotas;

    printf("Quantidade de gols marcados pelo Pelotas: ");
    scanf("%d", &qtdGolsPelotas);

    printf("Quantidade de gols marcados pelo Brasil de Pelotas: ");
    scanf("%d", &qtdGolsBrasil);

    if (qtdGolsBrasil > qtdGolsPelotas)
        printf("Brasil");
    if (qtdGolsBrasil < qtdGolsPelotas)
        printf("Pelotas");
    if (qtdGolsBrasil == qtdGolsPelotas)
        printf("Empate");
    
    return 0;
}