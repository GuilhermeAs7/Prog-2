/*Programa de recuperação de senha: Entra com o nome e retornar em caixa alta.
Inserir senha nova, pedir confirmação de senha, se corretar printar senha confirmada,
se não, solicitar senha novamente. Com a senha confirmada, liberar opção de sacar dinheiro
e informar o saldo antes e depois do saque.*/
#include<stdio.h>
#include<string.h>

void maiusculo(char *nome);
int conf_senha(int,int);
int funcao_saque(int);

int main()
{
int senha;
int conf1, confirmacao;
int saque, valor, saldo;
char nome[20];

printf("\nEntre com seu nome: ");
gets(nome);
maiusculo(nome);
do{
printf("\n\nDigite sua nova senha: ");
scanf("%d",&senha);
printf("\nDigite sua nova senha novamente: ");
scanf("%d",&conf1);

confirmacao=conf_senha(senha,conf1);
}while(confirmacao==0);

if(confirmacao==1){
    printf("\nSenha confirmada.\n");

    printf("\nInsira 1 para saque, 2 para sair: ");
    scanf("%d",&saque);

    if(saque==2){printf("\nFim da Operacao");
    }
    else{
        printf("\nValor Disponivel: 5.000 reais\n\nValor a ser sacado: ");
        scanf("%d",&valor);
        saldo=funcao_saque(valor);
        printf("\nOperacao realizada.\n\nSaldo disponivel: %d reais",saldo);
    }
}
return 0;
}

void maiusculo(char *nome){
printf("\nSeja Bem vindo, %s !",strupr(nome));
}

int conf_senha(int senha,int conf){
if(senha!=conf){
    return 0;}
else{
    return 1;}
}
int funcao_saque(int valor){
return 5000-valor;
}


