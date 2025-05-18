/*
        1. Analise os seguintes algoritmos abaixo e diga o que será impresso ao serem executados. 
            a)              b)              c)              d)              e) 
            A <- 10         A <- 30         A <- 10         A <- 10          A <- 10 
            B <- 20         B <- 20         B <- 20         B <- A + 1       C <- A + B 
            Escreva B       C <- A + B      C <- A          A <- B + 1       B <- 20 
            B <- 5          Escreva C       B <- C          B <- A + 1       Escreva C 
            Escreva A, B    B <- 10         A <- B          Escreva A   
                            Escreva B, C    Escreva A,B,C   A <- B + 1   
                            C <- A + B                      Escreva A   
                            Escreva A, B, C       
 
        a) primeiro será impresso valor 20 da variavel B, após será mostrado 10 da variavel A e 5 da variável B, pois foi atribuido com esse valor na linha acima

        b) primeiro será mostrado valor 50 sendo como resultado da soma das variaveis A = 30 e B = 20. Depois será mostrado valor 10 "de B", 50 "de C". Por final, será mostrado valor 30, 10, 40.

        c) será mostrado 10, 10, 10. 

        d) primeiro será impresso 12, referente ao valor de A. Após será mostrado 14, novo valor de A, resultado da soma da variavel B com 1.

        e) programa acusará erro de lógica.
 
*/