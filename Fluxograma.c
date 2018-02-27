#include<stdio.h>
int main ()
{
    int i, num[10], x;
    int n=10, cont=0;

    for(i=0;i<10;i++)
    {
    printf("\nEntre com um valor: ");
    scanf("%d",&num[i]);
    }

    printf("\nQual numero voce deseja saber a posicao? ");
    scanf("%d",&x);

    for(i=0;i<10;i++)
    {
    if(num[i]==x)
        {
            printf("\nO numero %d esta na posicao %d \nFim\n", x, i);
            cont++;
        }
    }
    if(cont==0)
    {
        printf("\nFim\nA Busca falhou\n");
    }

return 0;
}
