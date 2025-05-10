/*
    5.10    O banco GASTADOR Ltda. deseja utilizar o computador para determinar o limite da conta especial de 
            seus clientes a partir do saldo da conta corrente e da poupança. Escreva um algoritmo para ler o saldo da conta corrente e da poupança de um cliente e escrever o seguinte:
            
            -A mensagem: “SEM CONTA ESPECIAL” se o cliente NÃO possuir o requisito necessário para a conta especial. (REQUISITO PARA POSSUIR CONTA ESPECIAL: o saldo em pelo menos uma das duas contas deve estar acima de R$1000,00). 

            -O valor do limite da conta conforme especificação abaixo:

            * O valor limite da conta especial fornecido ao cliente deve ser o dobro do maior saldo (entre conta corrente e poupança) 
            ou o triplo do menor saldo. Deve ser fornecido o valor de limite maior entre essas 2 situações.
            
            OBS: Considere que os saldos da conta corrente e poupança não são iguais.

            [Entrada]    | [Entrada]    | [Entrada]    | [Entrada]    | [Entrada]
            1200 (corr.) | 2000 (corr.) | 1400 (corr.) | 1200 (corr.) | 800 (corr.)             
            1000 (poup.) | 1000 (poup.) | 1800 (poup.) | 2300 (poup.) | 700 (poup.)
                         |              |              |              |
            [Saída]      | [Saída]      | [Saída]      | [Saída]      | [Saída]
            3000         | 4000         | 4200         | 4600         | SEM CONTA ESPECIAL

*/

/*  1º condição contas acima de 1000 reais para ter conta especial
    2º limite conta especial, dobro da maior conta ou triplo do menor 
    3º a conta especial deve ter o maior valor entre o resultado das duas operações
    4º saldos devem ser diferentes
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float contaCorrente, contaPoupanca, contaEspecial;
    float maior, menor, limiteDobro, limiteTriplo; 

    // Inputs
    printf("Informe o saldo da Conta Corrente: "), scanf("%f", &contaCorrente);
    printf("Informe o saldo da Conta Poupança: "), scanf("%f", &contaPoupanca);

    // Processing
    if (contaCorrente < 1000 && contaPoupanca < 1000){
        printf("SEM CONTA ESPECIAL");
        
    } else {
        if (contaCorrente > contaPoupanca) {
            maior = contaCorrente; // dobro da conta corrente
            menor = contaPoupanca; // triplo da conta poupanca
        } else {
            maior = contaPoupanca;
            maior = contaCorrente;
        }

        limiteDobro = 2 * maior;
        limiteTriplo = 3 * menor;
    
        if (limiteDobro > limiteTriplo) {
            contaEspecial = limiteDobro;
        }
        else {
            contaEspecial = limiteTriplo;
        }
        printf("%.2f", contaEspecial);
    }

    // Outputs
    
    
    return 0;
}