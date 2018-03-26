#include<stdio.h>
int main()
{
    char frase[50];
    int i, contador = 0,cont;
    int letra, aux;

    printf("\nEntre com um frase[50]: ");
    gets(frase);// Para ler com espaço ou scanf("%[^\n]s", frase);

    for(letra='a'; letra<='z'; letra++){
            for(i=0;frase[i]!='\0';i++){
                if(frase[i]==letra && frase[i]!=aux){
                    contador++;
                    aux=frase[i];
                }
            }
	}

    printf("\nO numero de letras diferentes presentes nesta frase eh %d", contador);

    printf("\n\n");

    return 0;
}


