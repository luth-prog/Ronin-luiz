#include <stdio.h>

int main(){

    float tv_2020, tv_2021, tv_2022;
    float notebook_2020, notebook_2021, notebook_2022;
    float smartphone_2020, smartphone_2021, smartphone_2022;
    float media_2020, media_2021, media_2022;

    printf("Digite a quantidade de TVs vendidas em 2020: ");
    scanf("%f", &tv_2020);
    printf("Em 2021: ");
    scanf("%f", &tv_2021);
    printf("Em 2022: ");
    scanf("%f", &tv_2022);

    printf("Digite a quantidade de Notebooks vendidos em 2020: ");
    scanf("%f", &notebook_2020);
    printf("Em 2021: ");
    scanf("%f", &notebook_2021);
    printf("Em 2022: ");
    scanf("%f", &notebook_2022);

    printf("Digite a quantidade de Smartphones vendidos em 2020: ");
    scanf("%f", &smartphone_2020);
    printf("Em 2021: ");
    scanf("%f", &smartphone_2021);
    printf("Em 2022: ");
    scanf("%f", &smartphone_2022);

    media_2020 = (tv_2020 + notebook_2020 + smartphone_2020) / 3;
    media_2021 = (tv_2021 + notebook_2021 + smartphone_2021) / 3;
    media_2022 = (tv_2022 + notebook_2022 + smartphone_2022) / 3;

    printf("A media de produtos vendidos em 2020 eh: %.2f\n", media_2020);
    printf("A media de produtos vendidos em 2021 eh: %.2f\n", media_2021);
    printf("A media de produtos vendidos em 2022 eh: %.2f\n", media_2022);

    printf("2020 recebeu a maior media? %d\n", ((media_2020 > media_2021) && (media_2020 > media_2022)));
    printf("2021 recebeu a maior media? %d\n", ((media_2021 > media_2020) && (media_2021 > media_2022)));
    printf("2021 recebeu a maior media? %d\n", ((media_2022 > media_2020) && (media_2022 > media_2021)));


}