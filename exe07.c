#include <stdio.h>

int main(){
    int x, z;
    long int res = 1;

    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    printf("Digite o valor de z: \n");
    scanf("%d", &z);

    if(z == 0){
        printf("Qualquer numero elevado a 0 tem o resultado igual a 1\n");
    }

    for(int i = 0; i < z; i++){
        res = res * x;
    }

    printf("%d elevado a %d eh igual a %ld \n", x, z, res);

    return 0;

}