#include<stdio.h>

int menu()
{
    printf("\n*************\nCALCULADORA\n*************\n1- Somar\n2- Subtrair\n3- Sair\n*************");

    int opcao;

    do{
    printf("\nSelecione a operacao que deseja efetuar: ");
    scanf("%d",&opcao);
    }while(opcao<1 || opcao>3);

    return opcao;
}

float soma(float num1, float num2)
{
    return num1+num2;

}

float subtracao(float num1, float num2)
{
    return num1-num2;
}

int main()
{
    int m;
    float num1, num2;

    m=menu();

    if(m == 3)
    {
        printf("\nObrigado e ate a proxima!\n");
        return 0;
    }
    else
    {
        printf("\nEntre com o primeiro numero: ");
        scanf("%f",&num1);
        printf("\nEntre com o segundo numero: ");
        scanf("%f",&num2);

        if( m==1) printf("\n%.2f + %.2f = %.2f",num1,num2,soma(num1,num2));

        else printf("\n%.2f - %.2f = %.2f", num1, num2, subtracao(num1,num2));
    }

return 0;
}
