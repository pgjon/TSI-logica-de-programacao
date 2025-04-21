/*
    1.8 A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um algoritmo que 
        leia  o  percentual  de  alunos  reprovados  na  turma  C,  o  percentual  de  aprovados  na  turma  D, 
        calcule e escreva: 
            a) A quantidade de alunos reprovados na turma C. 
            b) A quantidade de alunos reprovados na turma D. 
            c) A percentagem de alunos reprovados em relação ao total de alunos das duas turmas. 
            [Entrada] 
            10 (percentual de alunos reprovados na turma C) 
            85 (percentual de alunos aprovados na turma D) 
 
            [Saída] 
            6 (quantidade de alunos reprovados na turma C) 
            3 (quantidade de alunos reprovados na turma D) 
            11.25 (percentual de alunos reprovados em relação ao total de alunos das duas turmas)
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Variables
    int failedClassC, passedClassD, failedClassD;
    float failedAll, classC = 60, classD = 20;

    // Inputs
    printf("Enter the percentage of students failed in class C: ");
    scanf("%d", &failedClassC);

    printf("Enter the percentage of students passed in class D: ");
    scanf("%d", &passedClassD);

    // Processing
    failedClassC = (failedClassC * classC) / 100;
    failedClassD = (100 - passedClassD) * classD / 100;
    failedAll = (failedClassC + failedClassD) / (classC + classD) * 100;

    // Outputs
    printf("\n%d (students failed in class C)\n", failedClassC);
    printf("%d (students failed in class D)\n", failedClassD);
    printf("%.2f (percentage of students failed in relation to the total number of students in both classes)\n", failedAll);

    return 0;
}

