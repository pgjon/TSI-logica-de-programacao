/*
    6.5 Escreva um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada leitura da senha incorreta informada escrever a mensagem "SENHA INVÁLIDA". Quanto a senha for informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO"e o algoritmo encerrado. Considere que a senha correta é o valor 2009.
    [Entrada]       [Saída]
    2200            Senha Inválida
    1020            Senha Inválida
    2022            Senha Inválida
    2009            Acesso Permitido
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int senha;
    
    // Processing
    do {
        // Input
        printf("Digite sua senha: "); scanf("%d", &senha);

        // Processing
        if (senha == 2009)
            // Output
            printf("Acesso Permitido\n");
        else
            // Output
            printf("Senha Inválida\n");
    } while (senha != 2009);
    

    return 0;
}