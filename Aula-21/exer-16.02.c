/*
    16.01) Crie  umprograma  que  calcula  e  imprime  as  tabuadas  do  1  ao  10.  Para  tanto, desenvolva  a função exibeTabuada() que  recebe um  número  inteiro como parâmetro e mostre a tabuada do número do 1 ao 10.
*/
# include <stdio.h>
# include <locale.h>

void exibeTabuada(int num) {
    int i, res;
    
    printf("=== Taboada do 1 ao 10 do número %d ===\n", num);
    for (i = 1; i <= 10; i++) {
        res = num * i;

        printf("%d x %d = %d\n", num, i, res);
    }
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int num;
    // Inputs
    printf("Digite um número para eu mostrar a taboada dele do 1 ao 10: ");
    scanf("%d", &num);

    // Processing
    exibeTabuada(num);
    // Outputs

    return 0;
}