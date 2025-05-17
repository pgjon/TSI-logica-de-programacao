/*
    8.1) Escreva um algoritmo para escrever a palavra PROGRAMACAO 4 vezes utilizando uma estrutura de        
         repetição.
         [Saída]
         PROGRAMACAO
         PROGRAMACAO
         PROGRAMACAO
         PROGRAMACAO
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i;
    // Inputs

    // Processing
    for (i = 0; i < 4; i++){
        printf("PROGRAMAÇÃO\n");
    }
    // Outputs

    return 0;
}