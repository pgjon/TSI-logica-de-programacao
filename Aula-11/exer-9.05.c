/*
    9.5) Escreva um algoritmo para ler as notas de vários alunos, calcular e escrever as seguintes médias. O último dado que não entrará nos cálculos contém uma nota igual a 99.
    
    • Média das notas dos alunos aprovados (nota maior ou igual a 6)
    • Média das notas dos alunos em exame (nota maior ou igual a 3 e inferior a 6)
    
    [Entrada]                   [Saída]
    10 (nota)
    5  (nota)
    3  (nota)
    6  (nota)
    8  (nota)
    1  (nota)
    2  (nota)
    4  (nota)
    99                          
                                8 (média das notas dos alunos aprovados)
                                4 (média das notas dos alunos em exame)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int flag = 1;
    int nota, mediaExame = 0, mediaAprovados = 0, somaNotasExame = 0, somaNotasAprovados = 0, accExame = 0, accAprovados = 0;
    // Inputs
    
    // Processing
    while (flag == 1) {
        printf("Nota: "); scanf("%d", &nota);
        
        if (nota >= 3 && nota < 6) {
            somaNotasExame += nota;
            accExame++;
        } else if (nota >= 6 && nota <= 10) {
            somaNotasAprovados += nota;
            accAprovados++;
        }
        
        if (nota == 99)
            flag = 0;
    }

    mediaExame = somaNotasExame / accExame;
    mediaAprovados = somaNotasAprovados / accAprovados;
    // Outputs
    printf("\n%d (média das notas dos alunos aprovados)", mediaAprovados);
    printf("\n%d (média das notas dos alunos em exame)", mediaExame);
    return 0;
}