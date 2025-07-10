/*
    17.03) Desenvolva a função ehPar() que recebe um valor inteiro e verifica se o mesmo é par. A função deve retornar 1 se o número for par e 0 se for ímpar.  Crie um programa principal  que  solicite  ao  usuário  5  valores aleatórios e  armazene-os  em  um  vetor de inteiros. Após, itere pelo vetor criado, chamando a função ehPar() verificando quantos dos  números  são  pares  e  quantos  são  ímpares.  Ao  final  da  execução,  imprima  a quantidade total de números pares que foi informada.
*/
# include <stdio.h>
# include <locale.h>

int ehPar(int num);

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int num[5], acc = 0;
    // Inputs
    
    // Processing
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: "); scanf("%d", &num[i]);

        int confere = ehPar(num[i]);
        
        if (confere == 1) {
            acc++;
        }
    }
    // Outputs
    printf("Quantidade de números pares inserido no vetor: %d", acc); 
    return 0;
}

int ehPar(int num) {
    
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}