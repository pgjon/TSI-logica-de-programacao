/*
    15.4
        a) Escreva um subalgoritmo chamado exibeAlfabeto que imprima na tela todas as letras maiúsculas do alfabeto separadas por um espaço em branco. Utilizar repetição.
        
        b) Escreva um subalgoritmo chamado exibeDigitos que imprima na tela os dígitos de 0 a 9 separados por um espaço em branco. Utilizar repetição.
        
        c) Escreva um subalgoritmo chamado exibeCardapio que exiba na tela o seguinte:
                            
                            1.Alfabeto
                            2.Dígitos
                            3.Fim
                            
        d) Escreva um algoritmo que leia vários inteiros que representam o código que quais caracteres devem ser impressos (1.Alfabeto 2.Dígitos 3.Fim). Conforme o código escolhido deve ser impressos os caracteres correspondentes. O programa deve ser encerrado ao ser informado o código 3.
        
            OBS: Antes da leitura do código deve ser impresso um cardápio com o subalgoritmo exibeCardapio. O conjunto de caracteres escolhido deve ser impresso com os subalgoritmos exibeAlfabeto e exibeDigitos conforme o caso.
        
        [Entrada]   [Saída]
                    1.Alfabeto
                    2.Dígitos
                    3.Fim
        1           
                    A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
        2           
                    0 1 2 3 4 5 6 7 8 9
        3
*/
# include <stdio.h>
# include <locale.h>

void exibeAlfabeto(void);
void exibeDigitos(void);
void exibeCardapio(void);

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int menu;
    // Inputs
    exibeCardapio();
    
    // Processing
    do {
        printf("\n: ");
        scanf("%d", &menu);

        // verificação
        while ((menu != 1) && (menu != 2) && (menu != 3)) {
            printf("Valor inválido para menu!\n: "); scanf("%d", &menu);
        }

        if (menu == 1) {
            exibeAlfabeto();
        } else if (menu == 2) {
            exibeDigitos();
        }
    } while (menu != 3);
    // Outputs

    return 0;
}

void exibeAlfabeto(void) {
    char c;

    for (int i = 65; i <= 90; i++) {
        c = i;
        printf("%c ", c);
    }
}

void exibeDigitos(void) {
    int i;

    for (i = 0; i <=9; i++) {
        printf("%d ", i);
    }
}

void exibeCardapio(void) {
    printf("1.Alfabeto\n");
    printf("2.Dígitos\n");
    printf("3.Fim");
}