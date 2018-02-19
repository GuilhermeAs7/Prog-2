#include<stdio.h>
int main ()
{
int i;
int numero[10];
int maior = 0;

for(i=0 ; i<10 ; i++)
{
printf("\nDigite 10 numeros: ");
scanf("%d", &numero[i]);

if(numero[i]>maior)
{maior = numero[i];}

}
printf("\nO maior numero eh: %d \n", maior);

return 0;
}
