#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
   do{
    printf("**********CALCULADORA**********\n\n");
    printf("Digite a opcao 1 para soma\n\n");
    printf("Digite a opcao 2 para multiplicacao\n\n");
    printf("Digite a opcao 3 para divisao\n\n");
    printf("Digite a opcao 4 para subtracao\n\n");
    printf("digite a opcao 0 para sair\n\n");
    scanf("%d",&opcao);
    printf("\n\n");
    switch(opcao){
        case 1:
        printf("voce escolheu a opcao soma : \n");
        CalculoSoma();
        break;

        case 2:
        printf("voce escolheu a opcao multiplicacao : \n");
        CalculaMult();
        break;

        case 3:
        printf("voce escolheu a opcao divisao: \n");
        CalculaDiv();
        break;

        case 4:
        printf("voce escolheu a opcao subtracao : \n");
        CalculoSub();
        break;

        case 0:
        break;

        default:
        printf("opcao invalida, tente novamente!!!\n\n");
        break;
    }

   }
     while(opcao != 0);
    }
CalculaMult(){

float multiplicacao,x,y;
printf("entre com o primeiro valor\n");
scanf("%f",&x);
printf("entre com o segundo valor\n");
scanf("%f",&y);
multiplicacao = x * y;
printf("o valor da multiplicacao dos numeros : \n %.2f e %.2f eh :\n %.2f\n",x,y,multiplicacao);
printf("\n\n");
}
CalculaDiv(){
int Div,x,y;
printf("entre com o primeiro valor\n");
scanf("%d",&x);
printf("entre com o segundo valor\n");
scanf("%d",&y);
Div = x/y;
printf("o valor dos numeros  que vc deseja dividir : \n %d e %d eh :\n %d\n",x,y,Div);
printf("\n\n");
}
CalculoSoma(){
float soma,x,y;
printf("entre com o primeiro valor\n");
scanf("%f",&x);
printf("entre com o segundo valor\n");
scanf("%f",&y);
soma = x+y;
printf("o valor da soma dos numeros : \n %.2f e %.2f eh :\n %.2f\n",x,y,soma);
printf("\n\n");
}
CalculoSub(){
float sub,x,y;
printf("entre com o primeiro valor\n");
scanf("%f",&x);
printf("entre com o segundo valor\n");
scanf("%f",&y);
sub = x-y;
printf("o valor da soma dos numeros : \n %.2f e %.2f eh :\n %.2f\n",x,y,sub);
printf("\n\n");
}
