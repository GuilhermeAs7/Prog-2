//Faça uma função em C que recebe 2 números como parametros e retorna a soma destes 2 números.

#include<stdio.h>
// funçao para somar dois numeros
void soma(float n1, float n2)
{
   float resultado;
    resultado = n1 + n2;
    printf("\nSoma  = %.2f\n",resultado);
}
// funçao para subtrair dois numeros
void subtracao(float n1, float n2)
{
    float resultado;
    resultado = n1 - n2;
    printf("\nSubtracao = %.2f\n", resultado);
}
// funçao principal
int main()
{
float n1, n2, resultado=0;

printf("\nEntre com o numero 1: ");
scanf("%f",&n1);
printf("\nEntre com o numero 2: ");
scanf("%f",&n2);

//Para chamar a funçao
soma(n1,n2);
subtracao(n1,n2);

return 0;
}


