/*
    Escreva um algoritmo para ler o código, o preço unitário e a quantidade em estoque de 5 produtos armazenando-os em três vetores. A seguir ler vários códigos representando cada um deles uma operação descrita abaixo. Para cada código informado executar a operação adequada.

    1. Venda
        Faz a leitura do código de um produto. Escrever “Código inválido” em caso de inexistência no vetor de códigos e solicitar nova operação. Caso o código exista ler a quantidade vendida do produto atualizando o vetor de estoque e exibindo o valor da venda.

    2. Reposição
        Faz a leitura do código de um produto. Escrever  “Código inválido” em caso de inexistência no vetor de códigos e solicitar no operação. Caso o código exista ler a quantidade reposta no estoque do produto atualizando o vetor de estoque.

    3. Inventário
        Exibir o código de cada produto com o seu preço unitário, quantidade estoque e valor do estoque. O valor do estoque só deve ser calculado caso a quantidadeem estoque não seja negativa.

    4.  Fim
        Finaliza o programa exibindo quantas operações foram executadas com sucesso.

    [Entrada]                                   Saída]
    102 (código) 2.50 (preço)  10 (estoque)
    202 (código) 3.00 (preço)  2 (estoque)
    521 (código) 1.50 (preço)  1 (estoque)
    423 (código) 4.00 (preço)  5 (estoque)
    667 (código) 1.50 (preço)  7 (estoque)
    1 (operação) 600 (Código)                   Código inválido
    1 (operação) 102 (Código)  2 (quant.)       5.00 (valor da venda)
    1 (operação) 202 (Código)  3 (quant.)       9.00 (valor da venda)
    2 (operação) 423 (Código)  4 (quant.)
    2 (operação) 521 (Código)  1 (quant.)
    3 (Inventário)                              102  2.50  8  20.00
                                                202  3.00  -1
                                                521  1.50  2  3.00
                                                423  4.00  9  36.00
                                                667  1.50  7  10.50
    4 (fim)
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, codigo[5], estoque[5], op, operacoes = 0;
    float preco[5];

    // Leitura dos produtos
    for (i = 0; i < 5; i++) {
        printf("%dº Produto:\n", (i + 1));
        printf("    Digite código do produto: "); scanf("%d", &codigo[i]);
        printf("    Digite preço do produto: R$ "); scanf("%f", &preco[i]);
        printf("    Digite a quantidade em estoque: "); scanf("%d", &estoque[i]);
    }
    printf("\n");

    do {
        printf("Digite a operação que deseja realizar:\n    1 - (Venda) || 2 - (Reposição) || 3 - (Inventário) || 4 - (Fim)\n\nOperação: ");
        scanf("%d", &op);

        while (op < 1 || op > 4) {
            printf("Operação inválida!\nOperação: "); scanf("%d", &op);
        }

        if (op == 1 || op == 2) {
            int cod, idx = -1;
            printf("Digite o código do produto: "); scanf("%d", &cod);

            // Busca o índice do produto
            for (i = 0; i < 5; i++) {
                if (codigo[i] == cod) {
                    idx = i;
                    break;
                }
            }

            if (idx == -1) {
                printf("Código inválido\n");
                continue; // volta ao menu
            }

            if (op == 1) { // Venda
                int venda;
                printf("Quantidade vendida? "); scanf("%d", &venda);
                estoque[idx] -= venda;
                printf("%.2f (valor da venda)\n", preco[idx] * venda);
                operacoes++;
            } else { // Reposição
                int reposicao;
                printf("Quantidade para repor? "); scanf("%d", &reposicao);
                estoque[idx] += reposicao;
                operacoes++;
            }
        } else if (op == 3) { // Inventário
            for (i = 0; i < 5; i++) {
                printf("%d %.2f %d", codigo[i], preco[i], estoque[i]);
                if (estoque[i] >= 0) {
                    printf(" %.2f", preco[i] * estoque[i]);
                }
                printf("\n");
            }
            operacoes++;
        }
        // op == 4 encerra o programa
    } while (op != 4);

    printf("Operações executadas com sucesso: %d\n", operacoes);

    return 0;
}