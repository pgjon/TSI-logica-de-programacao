/*
    9.15) Ler um valor (só deve aceitar valores positivos), calcular e escrever seu respectivo fatorial.OBS: O fatorial de 0 é igual a 1.
    
        Fatorial de n = n *(n-1)*(n-2)*(n-3)*...*1 
        Exemplo: Fatorial de 4 = 4*3*2*1 = 24
        
    [Entrada]  | [Entrada] | [Entrada] | [Entrada]
    -1         | 3         | 5         | 4         
               |           |           |
               |           |           |
    [Saída]    | [Saída]   | [Saída]   | [Saída]
    1          | 6         | 120       | 24
*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int fatorial = 1, n, i;

    printf("Digite um valor positivo para calcular o fatorial: "); 
    scanf("%d", &n);
    
    for (i = n; i > 1; i--) { 
        fatorial *= i;
    }
    
    printf("Fatorial de: %d é %d", n, fatorial);
    return 0;
}