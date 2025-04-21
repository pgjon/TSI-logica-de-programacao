/*
    11  Elabore  um  algoritmo  que,  dada  a  idade  de  um  nadador,  classifique-o  em  uma  das 
        seguintes categorias: 
        • Infantil A: 5 a 7 anos 
        • Infantil B: 8 a 10 anos 
        • Juvenil A: 11 a 13 anos 
        • Juvenil B: 14 a 18 anos  
        • Sênior: maiores de 18 anos. 
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Variables
    int idade;

    // Inputs
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Processing
    if ((idade >= 5) && (idade <= 7)){
        printf("Infantil A: 5 a 7 anos");
    }

    if ((idade >= 8) && (idade <= 10)){
        printf("Infantil A: 8 a 10 anos");
    }

    if ((idade >= 11) && (idade <= 13)){
        printf("Infantil A: 11 a 13 anos");
    }

    if ((idade >= 14) && (idade <= 18)){
        printf("Infantil A: 14 a 18 anos");
    }

    if (idade > 18){
        printf("Senior: maiores de 18 anos");
    }

    // Outputs

    return 0;
}