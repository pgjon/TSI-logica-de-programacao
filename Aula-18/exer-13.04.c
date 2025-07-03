/*
    14.4 Escreva um algoritmo para ler várias trincas de caracteres. O primeiro caractere deve ser validado através de repetição para aceitar apenas as letras 'C','D' ou 'F'. Escrever os dois últimos caracteres da trinca na ordem indicada pelo primeiro caractere como especificado a seguir. 'C'>>ordem crescente e 'D' >> ordem decrescente. O programa termina quando o primeiro caractere digitado for 'F' (neste caso sem ler os demais).
    
    [Entrada] [Saída]
    A
    C s z     s z
    D s z     z s
    F
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char c[3];
    
    do {
        // Lê e valida apenas o primeiro caractere
        do {
            printf("Caractere 1º: ");
            scanf(" %c", &c[0]);
            
            if ((c[0] != 'C') && (c[0] != 'D') && (c[0] != 'F')) {
                printf("Primeiro caractere deve ser C, D ou F!\n");
            }
        } while ((c[0] != 'C') && (c[0] != 'D') && (c[0] != 'F'));
        
        // Se for 'F', termina sem ler os outros
        if (c[0] == 'F') break;
        
        // Lê os outros dois caracteres
        printf("Caractere 2º: ");
        scanf(" %c", &c[1]);
        printf("Caractere 3º: ");
        scanf(" %c", &c[2]);
        
        // Processa conforme a ordem
        if (c[0] == 'C') { // Crescente
            if (c[1] <= c[2]) {
                printf("%c %c\n", c[1], c[2]);
            } else {
                printf("%c %c\n", c[2], c[1]);
            }
        } else if (c[0] == 'D') { // Decrescente
            if (c[1] >= c[2]) {
                printf("%c %c\n", c[1], c[2]);
            } else {
                printf("%c %c\n", c[2], c[1]);
            }
        }
        
    } while (c[0] != 'F');
    
    return 0;
}