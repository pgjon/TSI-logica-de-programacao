/*
    6.4 Escreva um algoritmo para ler várias duplas de valores (2 valores de cada vez). Escrever para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. A repetição será encerrada ao ser fornecido para os elementos da dupla valores iguais.
    
    [Entrada]   [Saída]
    5       4   Decrescente
    7       2   Decrescente
    3       8   Crescente
    2       2
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int num1, num2;

    // Processing
    while (1) {
        // Inputs
        printf("Digite primeiro número: "); scanf("%d", &num1);
        printf("Digite segundo número: "); scanf("%d", &num2);

        // Processing
        if (num1 == num2) {
            break;
        }

        else if (num1 < num2) {
            // Output
            printf("Crescente\n");
        } else {
            // Output
            printf("Decrescente\n");
        }
    }
    
    return 0;
}