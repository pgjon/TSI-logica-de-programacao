/*
    5.1) Para A=5, B=3 e C= -2 responda se as seguintes expressões lógicas são V ou F.
    a) A>3 e B>5    F                   d) A>B+C e C>-1 e B<3           F
    b) A>3 ou B>5   V                   e) C<1 ou C≠B e A<B             V
    c) não (A=5)    F                   f) C=B-2 ou não (C≠B e A<B)     V


*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int A = 5, B = 3, C = -2;

    // Processing
    if (A > 3 && B > 5) /////////////////////// a
        printf("\nV");
    else
        printf("\nF");
    
    if (A > 3 || B > 5) /////////////////////// b
        printf("\nV");
    else
        printf("\nF");    

    if (!A == 5) //////////////////////////////// c
        printf("\nV");
    else
        printf("\nF");
    
    if (A > B + C && C > -1 && B < 3) ///////// d
        printf("\nV");
    else
        printf("\nF");
    
    if (C < 1 || C != B && A < B) ////////////// e
        printf("\nV");
    else
        printf("\nF");
    
    if (C == B - 2 || !(C =! B && A < B)) ////// f
        printf("\nV");
    else
        printf("\nF"); 

    return 0;
}