#include<stdio.h>
int main ()
{
    int i, num[10], x;
    int n=10;

    for(i=0;i<10;i++)
    {
    printf("\nEntre com um valor: ");
    scanf("%d",&num[i]);
    }

    printf("\nQual numero voce deseja saber a posicao? ");
    scanf("%d",&x);

  if(x<n){
        for(i=0;i<10;i++)
        {
        if(num[i]==x){printf("\nO numero %d esta na posicao %d \nFim", x, num[i]);}
        }
    }
    else{printf("\nFim\nA busca falhou");}

return 0;
}
