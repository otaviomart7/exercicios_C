//Inclui a biblioteca stdio.h que permite usar entrada e saida de infos(printf e scanf)
#include<stdio.h>
//Inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>
//Declarar a função principal, opnde o programa começa a execução
int main(){

    //declarar variaveis
    float numero1, numero2, respostaSoma;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    respostaSoma = numero1 * numero2;
    printf("%.2f \n",respostaSoma);

    //pausar o sistema ate que o usuario pressione qualquer tecla
    system("pause");
    //finalizar o sistema retornando 0 - tudo ocorreu bem
    return 0;
}