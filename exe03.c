#include <stdio.h>

// Constantes

#define taxa 0.10
#define desconto 0.05

int main(){

    // Variaveis

    float preco, valortaxa, valordesconto, precototal;

    // Entrada de Dados

    printf("Qual o valor do seu produto? ");
    scanf("%f", &preco);

    // Processamento

    valortaxa = preco * taxa;
    valordesconto = preco * desconto;
    precototal = preco + valortaxa - valordesconto;

    // Saida de Dados

    printf("Relatorio de compra:\n");
    printf("Valor do produto: %.2f\n", preco);
    printf("Valor dos impostos: %.2f\n", valortaxa);
    printf("Valor do desconto aplicado: %.2f\n", valordesconto);
    printf("Valor total a ser pago: %.2f\n", precototal);

    return 0;
}