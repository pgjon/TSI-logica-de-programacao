/*
   Um enduro é uma prova disputada com motos onde o competidor tem que percorrer um trajeto em um tempo determinado pela organização da prova. Normalmente, o trajeto é dividido em vários trechos onde estão localizados postos de cronometragem para anotar o tempo de cada competidor. Neste ano, será realizado o enduro da Informática, uma prova disputada em várias etapas durante o ano. Você foi convidado a escrever um algoritmo para obter alguns dados estatísticos sobre a prova. O algoritmo deve ler inicialmente a quantidade de etapas do Enduro. A seguir deve ler, para cada etapa, a respectiva quantidade de trechos em que seu percurso é dividido. Depois o algoritmo deve ler a distância (em Km) de cada trecho da etapa e o tempo em (minutos) que ele deve ser percorrido. O algoritmo deve escrever conforme o exemplo abaixo:
   
   O tempo total do percurso de cada etapa, quantos trechos considerando todas as etapas possuem menos de 50 Km, a distância total do percurso da etapa mais curta.
   
   [Entrada]                               [Saída]
   3 (quantidade de etapas)
   
   3 (quantidade de trechos da etapa)
   45  (dist.)  70 (t)
   120 (dist.) 150 (t)
   49  (dist.)  40 (t)                     
                                            Etapa 1: 260 (tempo total da etapa)
    1 (quantidade de trechos da etapa)
    200 (dist.) 150 (t)                     
                                            Etapa 2: 150 (tempo total da etapa)
    2 (quantidade de trechos da etapa)
    40 (dist.)   30 (t)
    55 (dist.)   25 (t)                     
                                            Etapa 3: 55 (tempo total da etapa)
                                            3 (trechos com menos de 50 Km)
                                            95 (dist. do perc. da etapa mais curta) 
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j, etapa, trecho, distancia, tempo, tempoTotal = 0, distanciaTotal = 0;
    int trechoMenorQue50 = 0, etapaMaisCurta = 9999;
    // Inputs
    printf("Quantidade de etapas? "); scanf("%d", &etapa);
    // Processing
    for (i = 1; i <= etapa; i++) {
        printf("Quantidade de trechos? "); scanf("%d", &trecho);
        for (j = 1; j <= trecho; j++) {
            printf("Distância? "); scanf("%d", &distancia);
            printf("Tempo? "); scanf("%d", &tempo);
            tempoTotal += tempo;
            distanciaTotal += distancia;
            if (distancia < 50) {
                trechoMenorQue50++;
            }
        }
        if (distanciaTotal < etapaMaisCurta) {
            etapaMaisCurta = distanciaTotal;
            distanciaTotal = 0;
        }

        printf("Etapa %d: %d (tempo total de etapa)\n", i, tempoTotal);
        tempoTotal = 0;
    }
    

    // Outputs
    printf("%d (trechos com menos de 50 Km)\n", trechoMenorQue50);
    printf("%d (dist. do perc. da etapa mais curta)", etapaMaisCurta);
    return 0;
}