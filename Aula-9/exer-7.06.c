/*
    7.6     Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de1 a 4) deve ser solicitado um novo código (até que seja válido). Ao ser informado o código do combustível, o seu respectivo nome deve ser impresso na tela. O programa será encerrado quando o código informado for o número 4 escrevendo então a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível.
    
    [Entrada]               [Saída]
    1                       Álcool
    2                       Gasolina
    0        
    5
    3                       Diesel
    2                       Gasolina
    1                       Álcool
    4                       MUITO OBRIGADO
                            2 (quantidade de Álcool)
                            2 (quantidade de Gasolina)
                            1 (Diesel)

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int opcaoMenu = 0, alcool = 0, gasolina = 0, diesel = 0;
    // Inputs
    do {
        printf("\nQual combustível de sua preferência?\n\n");
        printf("1.Álcool\n2.Gasolina\n3.Diesel\n4.Fim\nOpção: "); scanf("%d", &opcaoMenu);

        while (opcaoMenu < 1 || opcaoMenu > 4) {
            printf("Opção Inválida!\nOpcção: "); scanf("%d", &opcaoMenu);
        }

        if(opcaoMenu == 1) {
            printf("\nÁlcool");
            alcool++;
        } else if (opcaoMenu == 2) {
            printf("\nGasolina");
            gasolina++;
        } else if (opcaoMenu == 3) {
            printf("Diesel");
            diesel++;
        } else if (opcaoMenu == 4) {
            printf("MUITO OBRIGADO");
        }
    } while (opcaoMenu != 4);
    // Outputs
    printf("\n%d (quantidade de Álcool)\n%d (quantidade de Gasolina)\n%d (Diesel)", alcool, gasolina, diesel);
    return 0;
}