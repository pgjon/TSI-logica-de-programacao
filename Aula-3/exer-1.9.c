/*
    1.9 Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o 
        preço  do  combustível  é  de  R$  2,50,  escreva  um  algoritmo  para  ler:  a  marcação  do  odômetro
        (Km) no início do dia, a marcação (Km) no final do dia, o número de litros de combustível gasto 
        e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo em Km/L  
        e o lucro (líquido) do dia. 
        [Entrada]                                   [Saída] 
        1500 (marcação no início do dia) 
        1700 (marcação no fim do dia) 
        20 (quantidade de litros de combustível) 
        80 (valor recebido) 
                                                    10 (média de consumo) 
                                                    30 (lucro)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Variables
    int odometerInicialDay, odometerFinalDay, expenditureFuel, valueReceived, distanceTravelled;
    float fuelPrice = 2.50, avarengeConsumptionFuel, profit;

    // Inputs
    printf("Enter the odometer reading at the beginning of the day (Km): ");
    scanf("%d", &odometerInicialDay);

    printf("Enter the odometer reading at the end of the day (Km): ");
    scanf("%d", &odometerFinalDay);

    printf("Enter the amount of fuel spent (liters): ");
    scanf("%d", &expenditureFuel);

    printf("Enter the total value received (R$): ");
    scanf("%d", &valueReceived);

    // Processing
    distanceTravelled = odometerFinalDay - odometerInicialDay;
    avarengeConsumptionFuel = distanceTravelled / expenditureFuel;
    profit = valueReceived - (expenditureFuel * fuelPrice);
    

    // Outputs
    printf("\n%.0f (avarange consuption)", avarengeConsumptionFuel);
    printf("\n%.0f (profit)\n", profit);

    return 0;
}
