/*
    8.17) Ler 10 valores e contar quantos estão no intervalo [100,200] e quantos deles estão fora deste intervalo. Escrever o resultado das duas contagens.
    [Entrada]                           [Saída]
    15 100 120 70 250 -10 0 130 600 20    
                                        3 (dentro do intervalo)
                                        7 (fora do intervalo)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num, accDentro = 0, accFora = 0;
    // Inputs
    printf("Programa para receber 10 valores e informar quantos deles estão dentro\ndo intervalor entre 100 e 200 e quantos estão fora\n");

    // Processing
    for (i = 0; i < 10; i++) {
        printf("Valor: "); scanf("%d", &num);

        if ((num >= 100) && (num <= 200)) {
            accDentro++;
        } else {
            accFora++;
        }
    }
    // Outputs
    printf("%d (dentro do intervalo)\n%d (fora do intervalo)", accDentro, accFora);
    return 0;
}