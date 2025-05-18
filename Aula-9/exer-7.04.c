/*
    7.4)    Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
    OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO"junto com um número que representa quantas vezes a senha foi informada.
    
    [Entrada]           [Saída]
    2200                ACESSO NEGADO
    1020                ACESSO NEGADO
    1234                ACESSO PERMITIDO
                        3 (quantidade de vezes que a senha foi informada)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int senhaUser = 1234, contador = 0, senha = 0;
    
    // Processing
    do {
        printf("Digite sua senha: "); scanf("%d", &senha);
        if (senha != senhaUser) {
            printf("ACESSO NEGADO\n");
        } else {
            printf("ACESSO PERMITIDO\n");
        }
        contador++;
    } while (senha != senhaUser);
    // Outputs
    printf("%d (quantidade de vezes que a senha foi informada)", contador);
    return 0;
}