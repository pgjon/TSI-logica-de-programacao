/*
    Escreva um algoritmo para ler várias duplas de valores. Cada dupla representa a idade de um aluno e a sua respectiva nota. Calcular e escrever:
        • A idade do aluno que obteve a maior nota.
        • A nota do aluno mais velho.
    OBS: O algoritmo será encerrado imediatamente após o usuário fornecer uma idade negativa (sem fornecer a respectiva nota).
    
    [Entrada]               [Saída]
    18 (idade) 7.5 (nota)
    16 (idade) 9.5 (nota)
    17 (idade) 6   (nota)
    20 (idade) 8   (nota)
    15 (idade) 7   (nota)
    -5 (idade)              16 (idade do aluno com a maior nota)
                            8  (nota do aluno mais velho)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int idade, maiorIdade = 0, idadeMaiorNota = 0;
    float nota, maiorNota = 0, notaAlunoMaisVelho = 0;
    // Inputs

    // Processing
    do {
        printf("Idade: "); scanf("%d", &idade);
        if (idade < 1) break;
        printf("Nota: "); scanf("%f", &nota);

        if (idade > maiorIdade) {
            maiorIdade = idade;
            notaAlunoMaisVelho = nota;
        }
        if (nota > maiorNota) {
            maiorNota = nota;
            idadeMaiorNota = idade;
        }
    } while (1);
    // Outputs
    printf("%d (idade do aluno com a maior nota)\n", idadeMaiorNota);
    printf("%.1f (nota do aluno mais velho)", notaAlunoMaisVelho);
    return 0;
}