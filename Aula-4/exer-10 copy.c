/* 10.  Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha
        válida é o número 328014. Deve ser impresso as seguintes mensagens:
        - ACESSO PERMITIDO (caso a senha seja válida).
        - ACESSO NEGADO (caso a senha seja inválida).
*/

#include <stdio.h>

int main()
{

    // Variaveis
    int senha = 328014, inputUser, verification = 0;

    // Entrada dados
    printf("Digite a senha: ");
    scanf("%d", &inputUser);

    while (verification == 0)
    {
        // Processamento
        if (inputUser == senha)
        {
            printf("\nACESSO PERMITIDO!");
            verification = 1;
        }
        else
        {
            printf("\nACESSO NEGADO!\nTente novamente: ");
            scanf("%d", &inputUser);
        }
    }

    return 0;
}