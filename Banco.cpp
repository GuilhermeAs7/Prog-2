#include<stdio.h>
int main()
{

int saque;
int agencia, conta;
int senha,tentativa=0;
int valor, resposta;

do{
printf("\e[H\e[2J"); // Para limpar a tela

printf("\nCaixa eletronico\n________________\n1-Saque\n2-Deposito\n________________");
printf("\nEscolha a opcao desejada: ");
scanf("%d",&saque);
} while(saque!=1);

do{
    printf("\e[H\e[2J");
    printf("\nPor favor insirao cartao do banco ou digite o numero da agencia e conta: \n\nAgencia: ");
    scanf("%d",&agencia);
    printf("\nConta: ");
    scanf("%d",&conta);
} while((agencia!=12345 || conta!=12345) || (agencia==0 && conta==0));

printf("\e[H\e[2J");
again:
printf("\nPor favor digite a sua senha: ");
scanf("%d",&senha);

if(senha != 12345)
{
    printf("\nSenha invalida\n");
    tentativa++;
    if (tentativa<4) goto again;

    else {printf("\nSenha bloqueada\n"); return 0;}
}

else
{
    printf("\e[H\e[2J");
    start:
    printf("\nDigite o valor a ser sacado: ");
    scanf("%d",&valor);
}

if(valor>0 && valor<=350)
{
    printf("\nOperacao realizada com sucesso.\n");
    resposta = 0;
}

else
{
    printf("\nSaldo insuficiente, desesejasacar outro valor(1-Sim/2-Nao)? ");
    scanf("%d",&resposta);
}

if(resposta == 1) goto start;

else return 0;

return 0;
}
