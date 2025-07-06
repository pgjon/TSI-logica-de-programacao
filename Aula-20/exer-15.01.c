/*
    15.1
        a) Escreva um subalgoritmo chamado exibeOnzeTracos que exiba na tela uma linha com 11 símbolos “-”. Utilizar uma repetição.
        
        b) Escreva um algoritmo para ler o código dos torcedores de um BRAPEL (1.Xavante 2.Lobão). Validar com repetição para aceitar apenas os códigos 1 ou 2 e mostrar o desenho abaixo. As linhas compostas do símbolo  “-” devem ser impressas com o uso do subalgoritmo exibeOnzeTracos.
        
        [Entrada]   [Saída]
        1                      
                               +-----------+
                    -----------|  XAVANTE  |-----------
                               +-----------+
*/
# include <stdio.h>
# include <locale.h>

void exibeOnzeTracos(void) {
    int i;

    for (i = 0; i < 11; i++) {
        printf("-");
    }
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int menu;
    // Inputs
    printf("Para qual time você torce?\n1.Xavente 2.Lobão: "); scanf("%d", &menu);

    while ((menu != 1) && (menu != 2)) {
        printf("Valor inválido!\n1.Xavente 2.Lobão: "); scanf("%d", &menu);
    }

    // Processing
    if (menu == 1) {
        printf("           +");
        exibeOnzeTracos();
        printf("+\n");

        exibeOnzeTracos();
        printf("|  XAVANTE  |");
        exibeOnzeTracos();

        printf("\n           +");
        exibeOnzeTracos();
        printf("+");
    } else if (menu == 2) {
        printf("           +");
        exibeOnzeTracos();
        printf("+\n");

        exibeOnzeTracos();
        printf("|   LOBÃO   |");
        exibeOnzeTracos();

        printf("\n           +");
        exibeOnzeTracos();
        printf("+");
    }

    // Outputs

    return 0;
}