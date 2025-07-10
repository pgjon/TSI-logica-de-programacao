/*
    17.04) Escreva  um  subalgoritmo  chamado maiorNumero() que  receba  como  entrada  dois inteiros positivos e retorne o maior deles ou o valor -1 se eles forem iguais. Considere que os valores de entrada são sempre positivos (Não é necessário validar).  
            
            Entrada: Dois inteiros positivos. 
            Retorno: O maior deles ou -1 se eles forem iguais.

    Escreva  um  algoritmo principal para  ler  um  valor  N  (considere  que  o  valor  informado será sempre positivo). A seguir ler N duplas de inteiros. Para cada dupla informada exibir o maior elemento ou a frase “Eles são iguais”. Para  obter  o  maior  elemento  deve  ser utilizado o subalgoritmo 
    maiorNumero().  
    
    [Entrada]   [Saída] 
    3 (N) 
    20  15     
                20 
    7   12      
                12 
    5   5       
                Eles são iguais
*/
# include <stdio.h>
# include <locale.h>

int maiorNumero(int numA, int numB);

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int n, numA, numB;
    // Inputs
    printf("Digite a quantidade de vezes para ler duplas de números: ");
    scanf("%d", &n);

    // Processing
    for (int i = 1; i <= n; i++) {
        printf("Digite as duplas: "); scanf("%d %d", &numA, &numB);

        maiorNumero(numA, numB);
    }
    // Outputs

    return 0;
}

int maiorNumero(int numA, int numB) {

    if (numA > numB) {
        return printf("%d\n", numA);
    } else if (numB > numA) {
        return printf("%d\n", numB);
    } else {
        return printf("Eles são iguais.\n");
    }
}