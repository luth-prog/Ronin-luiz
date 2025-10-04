#include <stdio.h>

int main(){

    //Definição de variaveis

    float salario, inss, imposto;
    float inss_total, imposto_total, salario_liquido;

    //Entrada de dados

    printf("Qual o salario do funcionario: ");
    scanf("%f", &salario);

    //Condicionais para atualização de variaveis

    if( salario <= 1320 ){
        inss = 0.075;
    }
    else{
        if( salario >= 1320.01 && salario <= 2571.29 ){
            inss = 0.09;
        }
        else{
            if( salario >= 2571.30 && salario <= 3856.94){
                inss = 0.12;
            }
            else{
                if( salario >= 3856.95 && salario <= 7507.49){
                    inss = 0.14;
                }
            }
        }
    }

    if( salario <= 1903.98){
        imposto = 0;
    }
    else{
        if( salario >= 1903.99 && salario <= 2826.65){
            imposto = 0.075;
        }
        else{
            if( salario >= 2826.66 && salario <= 3751.05){
                imposto = 0.15;
            }
            else{
                if( salario >= 3751.06 && salario <= 4664.68){
                    imposto = 0.225;
                }
                else{
                    if( salario > 4664.68){
                        imposto = 0.275;
                    }
                }
            }
        }
    }

    //Processamento

    inss_total = salario * inss;
    imposto_total = salario * imposto;
    salario_liquido = (salario - inss_total) - imposto_total;

    //Saida de Informações

    printf("O valor do INSS a ser pago eh de %.3f\n Totalizando: %.2f\n", inss, inss_total);
    printf("O valor a ser pago do importo de renda eh de %.3f\n Totalizando: %.2f\n", imposto, imposto_total);
    printf("Com isso o valor total do Salario Liquido do funcionario sera de: %.2f\n", salario_liquido);
}