#include<stdio.h>
#include<stdlib.h>

int main(){

    char cidade[50];
    char estado[50];
    int ano;
    int resp;

    printf("DIgite sua Cidade:");
    fgets(cidade, 50, stdin);

    printf("DIgite seu Estado:");
    fgets(estado, 50, stdin);

    printf("DIgite o Ano do seu Nascimento:");
    scanf("%d", &ano);

    resp = 2026 - ano;

    printf("Você nasceu em %s no estado do(e) %s e tem %d anos", cidade, estado, resp);


    

    system("pause");
    return 0;
}