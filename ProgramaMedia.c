#include <stdio.h>
#include <string.h>

int aprovado(int, int);
int main(){

		char nome[20];
		int result=0;
		int a=0,b=0;



		printf("\nDigite seu nome: ");
		gets(nome);

		strupr(nome);

		printf("\nDivite sua nota da av1: ");
		scanf("%d", &a);

		printf("\nDivite sua nota da av2: ");
		scanf("%d", &b);

		result=aprovado(a,b);

        if(result==1){
                printf("\n%s esta aprovado!\n",nome);
        }
        else
		printf("\n%s esta reprovado!\n",nome);

	return 0;
}

int aprovado(int a,int b){
	int apro=0;

	apro=(a+b)/2;

	if(apro>=6){
		return 1;
	}
    else{
        return 0;
		}
	}
