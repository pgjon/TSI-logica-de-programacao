/*
    5.4     Um posto está vendendo combustíveis com a seguinte tabela de descontos:
            
            Álcool:     Até 20 litros, desconto de 3 % por litro.
                        Acima de 20 litros, desconto de 5 % por litro.
            
            Gasolina:   Até 15 litros, desconto de 3,5 % por litro.
                        Acima de 15 litros, desconto de 6 % por litro
            
            Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível 
            (codificado da seguinte forma: 1-álcool 2-Gasolina), o preço do combustível, calcule e imprima o valor a ser pago 
            pelo cliente.
            
            OBS: Considere que serão informados apenas códigos válidos.
            
            [Entrada]     | [Entrada]     | [Entrada]     | [Entrada]
            10 (litros)   | 30 (litros)   | 10 (litros)   | 30 (litros)
            1 (álcool)    | 1 (álcool)    | 2 (gasolina)  | 2 (gasolina)
            2.5 (preço)   | 2.5 (preço)   | 3 (preço)     | 3 (preço)
                          |               |               |
            [Saída]       | [Saída]       | [Saída]       | [Saída]
            24.25 (t.pago)| 71.25 (t.pago)| 28.95 (t.pago)| 84.60 (t.pago)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float valor, precoCombustivel, desconto; int litros, combustivel;

    // Inputs
    printf("Qual a quantidade de litros deseja colocar?: "); scanf("%d", &litros);
    printf("Qual combustível deseja colocar?\n(1-Álcool ou 2-Gasolina):  "); scanf("%d", &combustivel);
    printf("Informe o preço do combustível: "); scanf("%f", &precoCombustivel);

    // Processing
    if (combustivel == 1){
        if ((litros > 0) && (litros <= 20)){
            desconto = precoCombustivel - precoCombustivel * 0.03; // extrai 3% por litro de alcool
            valor = desconto * litros; // calcula o valor a pagar
            
        }
        if (litros > 20) {
            desconto = precoCombustivel - precoCombustivel * 0.05; // extrai 5% por litro de alcool
            valor = desconto * litros; // calcula o valor a pagar
        }  
    }

    if (combustivel == 2){
        if ((litros > 0) && (litros <= 15)){
            desconto = precoCombustivel - precoCombustivel * 0.035; // extrai 3,5% por litro de alcool
            valor = desconto * litros; // calcula o valor a pagar
            
        }
        if (litros > 15) {
            desconto = precoCombustivel - precoCombustivel * 0.06; // extrai 6% por litro de alcool
            valor = desconto * litros; // calcula o valor a pagar
        }  
    }
    
    // Outputs
    printf("%.2f (t.pago)", valor);

    return 0;
}