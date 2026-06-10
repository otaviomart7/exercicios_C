#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[50];
    printf("Digite seu nome: ");
    // scanf("%s", nome);
    fgets(nome, 50, stdin);
    printf("O nome informado foi: %s \n", nome);

    system("pause");
    return 0;
}