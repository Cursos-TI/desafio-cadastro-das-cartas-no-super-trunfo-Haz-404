#include <stdio.h>

int main(){

char estado1;
char codigo1[20];
char nome1[20];
int populacao1;
float area1; 
float pib1;
int pt1;
// cadastro das informacoes
printf("digite o estado: ");
scanf("%c", &estado1);
printf("digite o codigo:");
scanf("%s", &codigo1);
printf("digite o nome:");
scanf("%s", &nome1);
printf("digite a populacao:");
scanf("%d", &populacao1);
printf("digite a area:");
scanf("%f", &area1);
printf("digite o pib:");
scanf("%f", &pib1);
printf("digite os pontos turisticos:");
scanf("%d", &pt1);
// resultado das leituras da carta
printf("estado:%c\n", estado1);
printf("codigo:%s\n", codigo1);
printf("nome da cidade:%s\n", nome1);
printf("população:%d\n", populacao1);
printf("area:%.2f\n", area1);
printf("PIB:%.2f\n", pib1);
printf("pontos turisticos:%d\n", pt1);
    return 0;
}




