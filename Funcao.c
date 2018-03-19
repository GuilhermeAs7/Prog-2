#include<stdio.h>
int main()
{
    int a, b, funcao(int,int,char);
    char op = 'S';
    a=b=10;

    printf("%d", funcao(a,++b,op));// Vai para função levando os valores 10, 11 (pois soma 1 a b) e S.
    return 0;

}

int funcao(int x, int y, char c)
{
    int teste(char);
    if(teste(c)) // Vi para função teste levando S volta 10
        return x*y;
    else
        return 0;
}

int teste (char op) // S vem para essa função
{
    if(op=='S' || op=='s')
        return 10; // Manda 10 para o "If"

    return 0;
}
