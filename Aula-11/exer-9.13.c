/*
    9.13) Supondo que a população de um bairro A seja da ordem de 500 habitantes com uma taxa anual de crescimento de 5,2% ao ano e que a população de um bairro B seja de 1500 habitantes com uma taxa anual de crescimento de 1,8 %, escreva um algoritmo que calcule e escreva quantos anos serão necessários para que a população do bairro A ultrapasse a do bairro B, mantidas as taxas anuais de crescimento.
    
    [Saída]
    34
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, ano = 0;
    float bairroA = 500, bairroB = 1500;
    // Inputs

    // Processing

    for (i = bairroA; bairroA < bairroB; i++) {
       bairroA *= 1.052;
       bairroB *= 1.018;
       ano++;
    }
    // Outputs
    printf("%d anos", ano);
    return 0;
}