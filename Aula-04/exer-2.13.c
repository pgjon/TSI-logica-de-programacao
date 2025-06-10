/*
    13. As maçãs custam R$ 1,25 se forem compradas menos do que uma dúzia, e R$ 1,00 ser forem 
        compradas pelo menos doze.  Escreva um algoritmo que  leia o número de maçãs compradas, 
        calcule e escreva o valor total da compra.
*/

# include <stdio.h>

int main(){

    // variaveis
    int amountApple;
    float priceApple, totalCost;

    // inputs
    printf("How many apples did you buy? ");
    scanf("%d", &amountApple);

    if (amountApple > 11){
        priceApple = 1.00;
        totalCost = amountApple * priceApple;

        printf("\nTotal a pagar: R$ %.2f", totalCost);
    }else{
        priceApple = 1.25;
        totalCost = amountApple * priceApple;

        printf("\nTotal a pagar: R$ %.2f", totalCost);
    }
    
    return 0;
}