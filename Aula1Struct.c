#include<stdio.h>

struct horario{
    int hora, min, seg;
};
void imprimeHora(struct horario p){
    printf("\nHorario novo: %d:%d:%d\n",p.hora,p.min,p.seg);
}
void lerHora(struct horario *p){

    printf("\nEntre com a hora: ");
    scanf("%d",&(*p).hora);
    printf("\nEntre com o minuto: ");
    scanf("%d",&(*p).min);
    printf("\nEntre com o segundo: ");
    scanf("%d",&(*p).seg);
}
void adicionarMin(struct horario *p, int min){
    p->min += min;

}
int main(){

    struct horario tempo;
    int novo_min;

    lerHora(&tempo);

    printf("\nEntre com os minutos a adicionar: ");
    scanf("%d",&novo_min);

    adicionarMin(&tempo, novo_min);

    imprimeHora(tempo);

return 0;
}
