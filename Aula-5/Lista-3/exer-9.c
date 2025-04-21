/*
    9   Escreva um algoritmo para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e 
        escrever  o  quadrante  ao  qual  o  ponto  pertence.  Considere  que  o  usuário  não  informará 
        nenhuma coordenada igual a zero. 
        
        [Entrada]| [Entrada]| [Entrada]| [Entrada] 
        2 (x)    | -8 (x)   | -4 (x)   | 6  (x) 
        3 (y)    | 5  (y)   | -3 (y)   | -2 (y) 
                |          |          | 
        [Saída]  | [Saída]  | [Saída]  | [Saída] 
        I        | II       | III      | IV 
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Variables
    int x, y;
    // Inputs
    printf("\nPrograma para receber valores de (x) e (y) e informar o plano cartesiano\n");

    printf("Digite valor de (x): "); scanf("%d", &x);
    printf("Digite valor de (y): "); scanf("%d", &y);

    // Processing
    if ((x > 0) && (y > 0)) {
        printf("I");
    }
    
    if ((x < 0) && (y > 0)) {
        printf("II");
    }
    
    if ((x < 0) && (y < 0)) {
        printf("III");
    }
    
    if ((x > 0) && (y < 0)) {
        printf("IV");
    }

    // Outputs

    return 0;
}