#include<stdio.h>
#include<math.h>

struct reg_ponto{
float x;
float y;
};
void lerPonto(struct reg_ponto *p){

printf("\nEntre com a coordenada x: ");
scanf("%f", &p->x);
printf("\nEntre com a coordenada y: ");
scanf("%f", &p->y);
}
void imprimePonto(struct reg_ponto p){

printf("\nCoordenadas (x,y)=(%.2f, %.2f)\n", p.x, p.y);
}

float calcDistancia(struct reg_ponto pA, struct reg_ponto pB ){
float result;
result=sqrt(pow((pB.x-pA.x),2)+pow((pB.y-pA.y),2));
return result;

}
int main(){

struct reg_ponto pontoA;
struct reg_ponto pontoB;
float dist;

lerPonto(&pontoA);
lerPonto(&pontoB);

dist=calcDistancia(pontoA, pontoB);

printf("\nDistancia entre dois pontos = %.2f\n", dist);
imprimePonto(pontoA);
imprimePonto(pontoB);

return 0;
}
