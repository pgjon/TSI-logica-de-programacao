/*
    9.7) Suponha que exista um prédio de 20 andares com três elevadores, identificados pelos números 1,2 e 3. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia qual o elevador que utilizava com mais frequência. Escreva um algoritmo para ler as respostas (códigos 1,2 ou 3) de vários usuários do prédio calcule e imprima o identificador do elevador mais frequentado. O algoritmo termina ao ser informado um identificador inválido para o elevador.
    [Entrada]                               [Saída]
    1 2 1 2 3 1 3 1 3 2 2 1 5 (respostas)   1
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int elevadorEscolhido, elevador_1 = 0, elevador_2 = 0, elevador_3 = 0;
    // Inputs

    // Processing
    do {
        printf("Qual Elevador?: "); scanf("%d", &elevadorEscolhido);

        if (elevadorEscolhido == 1) {
            elevador_1++;
        }
        if (elevadorEscolhido == 2) {
            elevador_2++;
        }
        if (elevadorEscolhido == 3) {
            elevador_3++;
        }

    } while ((elevadorEscolhido == 1) || (elevadorEscolhido == 2) || (elevadorEscolhido == 3));
    // Outputs
    if (elevador_1 > elevador_2 && elevador_1 > elevador_3) {
        printf("1");
    }
    else if (elevador_2 > elevador_1 && elevador_2 > elevador_3) {
        printf("2");
    } else {
        printf("3");
    }
    return 0;
}