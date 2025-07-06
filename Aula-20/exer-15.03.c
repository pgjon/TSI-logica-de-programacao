/*
    15.3
        a) Escreva um subalgoritmo chamado paralelogramoTracos que exiba na tela um paralelogramo com 3 linhas (usar repetição) de 11 hifens conforme o desenho abaixo. Cada linha com 11 hifens deve ser impressa com a chamada do subalgoritmo exibeOnzeTracos desenvolvido no exercício 15.1.
        
        -----------
         -----------
          -----------

        b) Escreva um algoritmo para exibir na tela 2 paralelogramos com uma linha em branco entre eles. Deve chamar o subalgoritmo paralelogramoTracos.
        
        [Saída]
        -----------
         -----------
          -----------

        -----------
         -----------
          -----------
*/
# include <stdio.h>
# include <locale.h>

void exibeOnzeTracos(void);
void paralelogramoTracos(void);

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    
    // Inputs

    // Processing
    paralelogramoTracos();
    printf("\n");
    paralelogramoTracos();
    // Outputs

    return 0;
}

void exibeOnzeTracos(void) {
    int i;

    for (i = 0; i < 11; i++) {
        printf("-");
    }
}

void paralelogramoTracos(void) {
    int i;

    for (i = 0; i < 3; i++) {
        exibeOnzeTracos();

        printf("\n ");

        if (i == 1) {
            printf(" ");
        } else if (i == 2) {
            printf("  ");
        }
    }
}