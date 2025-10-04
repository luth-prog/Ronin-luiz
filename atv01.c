#include <stdio.h>

int main(){

    int integrantes;
    float conta, desconto, valor_total, valor_cliente;

    printf("Qual o valor total da conta: ");
    scanf("%f", &conta);
    printf("Quantos integrantes tem na mesa: ");
    scanf("%d", &integrantes);

    desconto = 0.05;
    valor_total = conta - (conta * desconto);
    valor_cliente = valor_total / integrantes;

    printf("O valor total da conta com o desconto aplicado eh: %.2f\n", valor_total);
    printf("Cada um dos %d clientes pagam %.2f", integrantes, valor_cliente);


    


}