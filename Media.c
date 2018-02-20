#include<stdio.h>
int main ()
{
int i;
int numero[10], maior = 0;
float media=0, soma=0;
int aluno = 0, cont=0;

for(i=0 ; i<10 ; i++)
{
printf("\nDigite a %d nota: ", i+1);
scanf("%d", &numero[i]);
//Maior nota
if(numero[i]>maior)
{maior = numero[i];}

}
printf("\nA maior nota eh: %d \n", maior);
// Media
for(i=0;i<10;i++)
{
soma += numero [i];
}
media = soma / 10;

printf("\nA media da turma eh: %.2f \n", media);
// Nota superior a media
for(i=0;i<10;i++)
{
    if(numero[i]>media)
    {
        cont++;
    }
}

printf("\n%d alunos tiraram nota superior a media\n", cont);

return 0;
}
