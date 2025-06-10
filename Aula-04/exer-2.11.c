/*
    11. Escreva  um  algoritmo  para  ler  o  ano  de  nascimento  de  uma  pessoa  e  escrever  uma
        mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em
        que ela nasceu).
*/

# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // variaveis
    int ano;

    // entrada de dados
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);

    // processamento

    if ((2026 - ano > 17) && (2026 - ano < 71))
    {
        printf("Voto obrigatório!");
    }
    if (((2026 - ano > 15) && (2026 - ano < 18)) || (2026 - ano > 70))
    {
        printf("Voto facultativo!");
    }
    if(2026 - ano < 16){
        printf("Não pode votar!");
    }

    return 0;
}