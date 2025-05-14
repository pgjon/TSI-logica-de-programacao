/*
    7.5     A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um algoritmo para ler a quantidade de gols marcados pelo Internacional, a quantidade de gols marcados pelo Grêmio em um GRENAL, imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo após escrever a mensagem "Novo GRENAL 1.Sim 2.Não?" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:
        • Quantos GRENAIS fizeram parte da estatística.
        • A quantidade de vitórias do Internacional.
        • A quantidade de vitórias do Grêmio.
        • A quantidade de Empates.
        • Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou NÃO HOUVE VENCEDOR).
    
    [Entrada]                           [Saída]
    2 (gols Inter)  1 (gols Grêmio)     Inter        Novo GRENAL (1.sim 2.não)?1 (sim)
    2 (gols Inter)  2 (gols Grêmio)     EMPATE       Novo GRENAL (1.sim 2.não)?1 (sim)
    2 (gols Inter)  4 (gols Grêmio)     Grêmio       Novo GRENAL (1.sim 2.não)?1 (sim)
    3 (gols Inter)  3 (gols Grêmio)     EMPATE       Novo GRENAL (1.sim 2.não)?1 (sim)
    0 (gols Inter)  2 (gols Grêmio)     Grêmio       Novo GRENAL (1.sim 2.não)?
    2
                                        5 (quantidade de grenais)
                                        1 (vitórias do Inter)
                                        2 (vitórias do Grêmio)
                                        2 (quantidade de empates)
                                        Grêmio venceu mais grenais
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int golsInter, golsGremio, opcao;
    // variáveis contadores
    int jogos = 0, vitoriaInter = 0, vitoriaGremio = 0, empate = 0;
    // Processing
    do {
        printf("Gols Inter: "); scanf("%d", &golsInter);
        printf("Gols Inter: "); scanf("%d", &golsGremio);

        if (golsInter > golsGremio) {
            printf("Inter\n");
            vitoriaInter++;
        } else if (golsInter < golsGremio) {
            printf("Grêmio\n");
            vitoriaGremio++;
        } else {
            printf("EMPATE\n");
            empate++;
        }
        jogos++;
        printf("Novo GRENAL? (1)-sim (2)-não"); scanf("%d", &opcao);
    } while (opcao != 2);
    
    // Outputs
    printf("%d (quantidade de grenais)\n%d (vitórias do Inter)\n%d (vitórias do Grêmio)\n%d (quantidade de empates)\n", jogos, vitoriaInter, vitoriaGremio, empate);

    if (vitoriaInter > vitoriaGremio) {
        printf("Inter venceu mais grenais");
    } else {
        printf("Gremio venceu mais grenais");
    }
    return 0;
}