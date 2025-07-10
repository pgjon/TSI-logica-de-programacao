/*
    17.02) Escreva uma função denominada calculaNota() que recebe como entrada 3 notas de um aluno (aceitar somente valores entre 0 a 10) e uma letra como parâmetros. 
        
        - Se  a  letra  for ‘A’, função  retorna  a  média Aritmética  das  notas  do  aluno.  
        
        - Casoa  letra passada seja a ‘P’, a função calcula a média ponderada (pesos das três notas para este cálculo: 5, 3 e 2, respectivamente).
        
        - Se for passada a letra ‘M’, a função deve retornar a maior nota do aluno das três notas enviadas a função. 

    Crie um programa principal que fique solicitando a inserção destes dados para cada aluno e mostre na tela o respectivo resultado através da chamada da função. O programa termina ao ser passado o valor ‘S’ para  a  função calculaNota().  Não  executar  chamadas  a  função calculaNota() quando a letra for ‘S’ for digitada. 
*/
# include <stdio.h>
# include <locale.h> 

float calculaNota(float nota1, float nota2, float nota3, char opcao);

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float nota1, nota2, nota3;
    char opcao;
    // Inputs

    // Processing
    do {
        printf("\nDigite a primeira nota: "); scanf("%f", &nota1);
        while (nota1 < 0 || nota1 > 10) {
            printf("Nota inserida inválida!\nTem que ser entre 0 e 10.\nNota 1: ");
            scanf("%f", &nota1);
        }

        printf("\nDigite a segunda nota: "); scanf("%f", &nota2);
        while (nota2 < 0 || nota2 > 10) {
            printf("Nota inserida inválida!\nTem que ser entre 0 e 10.\nNota 2: ");
            scanf("%f", &nota2);
        }

        printf("\nDigite a terceira nota: "); scanf("%f", &nota3);
        while (nota3 < 0 || nota3 > 10) {
            printf("Nota inserida inválida!\nTem que ser entre 0 e 10.\nNota 3: ");
            scanf("%f", &nota3);
        }

        printf("\nMenu de Opções.\n\n");
        printf("Digite 'A' para média aritmética.\n");
        printf("Digite 'P' para média ponderada.\n");
        printf("Digite 'M' para informar a maior nota.\n");
        printf("Digite 'S' para encerrar o programa.\nOpção: ");

        scanf(" %c", &opcao);

        while (opcao != 'A' && opcao != 'M' && opcao != 'P' && opcao != 'S') {
            printf("Opção inválida!\nDigite 'A', 'M', 'P' ou 'S': ");
            scanf(" %c", &opcao);
        }

        if (opcao == 'S') break;
        
        calculaNota(nota1, nota2, nota3, opcao);

    } while(1);
    // Outputs

    return 0;
}

float calculaNota(float nota1, float nota2, float nota3, char opcao) {
    float media, mediaPonderada, maiorNota;
    
    if (opcao == 'A') { 
        media = (nota1 + nota2 + nota3) / 3;
        return printf("\nSua média aritmética é: %.2f\n", media);;
    }
    // (v1 * p1 + v2 * p2 + v3 * p3 ... vn * pn) / (p1 + p2 + p3 ... pn)  OBS: v = valor p = peso
    else if (opcao == 'P') { 
        mediaPonderada = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
        return printf("\nSua média ponderada é: %.2f\n", mediaPonderada);
    }

    else if (opcao == 'M') {
        if (nota1 > nota2 && nota1 > nota3) {
            maiorNota = nota1;
        }

        else if (nota2 > nota1 && nota2 > nota3) {
            maiorNota = nota2;
        }

        else {
            maiorNota = nota3;
        }

        return printf("Sua maior nota é: %.2f\n", maiorNota);
    }
    return 0;
}  