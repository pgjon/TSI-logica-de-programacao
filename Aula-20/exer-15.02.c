/*
    15.2
        a) Escreva um subalgoritmo chamado retTracos que exiba na tela um retângulo com 3 linhas (usar repetição) de 11 hifens. Cada linha com 11 hifens deve ser impressa com a chamada do subalgoritmo exibeOnzeTracos desenvolvido no exercício 15.1.
        
        b) Escreva um algoritmo para exibir na tela 2 retângulos com uma linha em branco entre eles. Deve chamar o subalgoritmo retTracos.
        
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
void retTracos(void);

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    
    // Inputs

    // Processing
    retTracos();
    retTracos();
    // Outputs

    return 0;
}

void exibeOnzeTracos(void) {
    int i;

    for (i = 0; i < 11; i++) {
        printf("-");
    }
}

void retTracos(void) {
    int i;

    for (i = 0; i < 3; i++) {
        exibeOnzeTracos();
        printf("\n");
    }
    printf("\n");
}