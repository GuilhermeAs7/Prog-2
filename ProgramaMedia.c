#include <stdio.h>
#include <string.h>

int aprovado(int, int);
int main(){

		char nome[20];
		int result=0;
		int x=0,y=0;



		printf("\nDigite seu nome: ");
		gets(nome);
		strupr(nome);

		printf("\nDivite sua nota da av1: ");
		scanf("%d", &x);

		printf("\nDivite sua nota da av2: ");
		scanf("%d", &y);

		result=aprovado(x,y);
	
        if(result==1){
                printf("\n%s esta aprovado!\n",nome);
        }
        else
		printf("\n%s esta reprovado!\n",nome);

	return 0;
}

int aprovado(int a,int b){
	int media=0;

	media=(a+b)/2;

	if(media>=6){
		return 1;
	}
    	else{
        	return 0;
	}
}
