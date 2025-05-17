/*
    7.7     Eustógio resolveu fazer uma viagem para conhecer o nosso país. Ele pretende visitar várias cidades, dividindo assim a viagem em vários trechos. Entretanto, Eustógio nega-se a passar por estradas cujo custo do pedágio exceda um determinado valor. Escreva um algoritmo para ler inicialmente o valor de pedágio acima do qual Eustógio nega-se a pagar. A seguir ler várias duplas de valores representando respectivamente o custo do pedágio e a distância (em Km) do trecho. Calcular e escrever.
    
    •Quantos trechos da viagem possuem um valor de pedágio acima do qual Eustógio nega-se a pagar.
    •Quantos trechos foram informados.
    •Quantos trechos acima de 150 Km de distância possuem um valor de pedágio que Eustógio concorda em pagar.
    
    OBS: O algoritmo será encerrado ao ser fornecido um valor de pedágio negativo. Neste caso a leitura da distância não deve ser executada. Os resultados devem ser impressos no final do algoritmo.
    
    [Entrada]                          [Saída]
    7.00 (valor máximo de pedágio
    que Eustógio aceita pagar)
    6,50  (pedágio)  200 (distância)
    5,00  (pedágio)   70 (distância)
    10,00 (pedágio)   80 (distância)
    12,00 (pedágio)  250 (distância)
    4,00  (pedágio)  180 (distância)
    15,00 (pedágio)   30 (distância)
    -1                                 
                                        3 (trechos com valor acima do qual elenega-se a pagar)
                                        6 (quantidade de trechos informados)
                                        2 (trechos acima de 150 Km com valor depedágio aceito por ele)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float valorPedagioCliente, pedagio, distancia;
    int trechosTotais = 0, trechosAcimaValorPedagioCliente = 0, trechosAcima150concordaPagar = 0; 
    
    printf("Qual valor deseja pagar no pedágio?: "); scanf("%f", &valorPedagioCliente);
    // Processing
    do {
        // Inputs
        printf("Valor do pedágio em (R$): "), scanf("%f", &pedagio);
        if (pedagio < 0)
            break;
        printf("Distância em (KM): "), scanf("%f", &distancia);

        // Processing
        if (pedagio > valorPedagioCliente) {
            trechosAcimaValorPedagioCliente++;
        }

        if ((distancia >= 150) && (pedagio <= valorPedagioCliente)) {
            trechosAcima150concordaPagar++;
        }
        // contador
        trechosTotais++;

    } while (pedagio >= 0);
    // Outputs
    printf("%d (trechos com valor acima do qual elenega-se a pagar)\n%d (quantidade de trechos informados)\n%d (trechos acima de 150 Km com valor depedágio aceito por ele)", trechosAcimaValorPedagioCliente, trechosTotais, trechosAcima150concordaPagar);
    return 0;
}