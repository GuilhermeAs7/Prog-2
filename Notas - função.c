//Crie uma função unilasalle_resultado().
//Esta função deverá receber 3 parâmetros de entrada av1, av2 e av3 e retornar 0 ou 1:  (1-passou, 0-não passou).

#include<stdio.h>
float unilasalle_resultado(float av1,float av2,float av3)
{
    float media;
    int result=0;
    media = (av1+av2+av3) / 3;
    if(media>=6)
    {
        result = 1;
    }
    return result;
}

int main()
{
    float av1,av2,av3;
    int x;

    printf("\nEntre com a nota da Av1: ");
    scanf("%f",&av1);
    printf("\nEntre com a nota da Av2: ");
    scanf("%f",&av2);
    printf("\nEntre com a nota da Av3: ");
    scanf("%f",&av3);
    // X RECEBE O RETORNO DA FUNÇAO
    x = unilasalle_resultado(av1,av2,av3);

    if(x==1)
    {
        printf("\nO aluno passou!\n");
    }
    else
    {
        printf("\nO aluno reprovou!\n");
    }

return 0;
}


