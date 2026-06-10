#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i, n;

    printf("Informe um número da tabuada: \n");
    scanf("%d", &n);

    printf("========TABUADA========");

    for(i = 0; i <= 10; i++){
        printf("\n%d X %2d = %3d", n, i, (n*i));
    }

    

    system("pause");
    return 0;
}