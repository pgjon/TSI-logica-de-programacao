/*
    Escreva um algoritmo para ler o código (inteiro) de 8 produtos armazenando-os em um vetor. A seguir ler vários códigos e exibir para cada um deles os índices onde eles estão armazenados no vetor ou a frase “O código informado não existe”caso ele não tenha sido armazenado. O programa termina quando o código informado for um valor negativo ou zero.

    [Entrada]                         [Saída]
    134 234 432 234 300 181 601 234
    134                                0
    200                                O código informado não existe
    234                                1 3 7
    601                                6
    -1
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, codigo, codigos[8], indice[8], acc;
    // Inputs

    // Processing
    // leitura dos códigos
    for (i = 0; i < 8; i++) {
        printf("Digite um código: "); scanf("%d", &codigos[i]);
    }

    // laço para ler um código e verificar se está entre os salvos
    do {
        acc = 0;
        printf("\nDigite um código para eu mostrar seus indices: "); scanf("%d", &codigo);
        // se o codigo lido for menor que 1 ele encerra o laço
        if (codigo < 1) break;
        // laço para comparar se o codigo lido está nos salvos
        for (i = 0; i < 8; i++) {
            // se codigo lido for igual aos salvos atribui o codigo do indice de codigos a variavel indice
            if (codigo == codigos[i]) {
                // guarda o codigo ao indice no momento
                indice[acc] = i;
                acc++;
            }
        }
        // caso o codigo fornecido não combine com nenhum codigo cadastrado, retorna a msg
        if (acc == 0) {
            printf("O código informado não existe\n");
        } else {
            printf("Está no(s) índice(s): ");
            for (i = 0; i < acc; i++) {
                printf("%d ", indice[i]);
            } printf("\n");
        }

    } while (codigo > 0);
    // Outputs

    return 0;
}