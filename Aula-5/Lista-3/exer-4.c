/*
    4   Acrescente as seguintes mensagens a solução do exercício anterior conforme o caso. 
        • Caso a quantidade de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO. 
        • Caso a quantidade de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO. 
        OBS: Considere que o usuário poderá informar qualquer valor para o número de lados.  
        
        [Entrada]           |  [Entrada]                 |  [Entrada] 
        0 (número de lados) |  6 (número de lados)       |  -1 (número de lados) 
                            |                            | 
        [Saída]             |  [Saída]                   |  [Saída] 
        NÃO É UM POLÍGONO   |  POLÍGONO NÃO IDENTIFICADO |  NÃO É UM POLÍGONO
*/
# include <stdio.h>

int main()
{

    int qtdLados, medidaLados;

    printf("Digite a quantidade de lados composta pela figura: ");
    scanf("%d", &qtdLados);

    if (qtdLados == 5)
    {
        printf("Pentagono\n");
    }

    if (qtdLados < 5 && qtdLados > 0)
    {
        printf("Digite a medida dos lados: ");
        scanf("%d", &medidaLados);

        if (qtdLados == 3)
        {
            medidaLados = medidaLados * 3;
            printf("Triangulo\n");
            printf("%d (Perimetro) \n", medidaLados);
        }
        if (qtdLados == 4)
        {
            medidaLados = medidaLados * medidaLados;
            printf("Quadrado\n%d (Area) \n", medidaLados);
        }
    }

    if(qtdLados < 3)
    {
        printf("NAO E' UM POLIGONO\n");
    }
    if(qtdLados > 5)
    {
        printf("POLIGONO NAO IDENTIFICADO\n");
    }
    return 0;
}