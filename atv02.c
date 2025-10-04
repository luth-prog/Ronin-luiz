#include <stdlib.h>

#include <stdio.h>

int main(){
     int avalia, cont = 0, soma = 0, i, j;
     char letra;
     float media;

     do{
        printf("Digite uma nota para avaliação: \n");
        scanf("%d", &avalia);
        fflush(stdin); //limpa o buffer de entrada
        cont++;
        soma = soma + avalia;

        printf("Digite qualquer letra para continuar ou 's' para encerrar: ");
     }while((letra = getchar()) != 's');

     printf("\n\nQuantidade de avaliação = %d e soma das notas = %d. \n", cont, soma);

     media = soma / cont;

     printf("A media desse aluno eh: %.2f\n", media);

     system("PAUSE");

     for(i = 0, j = 100; i < j; i++, j--){
        printf("i = %d e j = %d\n", i, j);
     }

     return 0;
}