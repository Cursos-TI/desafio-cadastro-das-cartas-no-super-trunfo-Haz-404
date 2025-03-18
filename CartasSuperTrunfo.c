#include <stdio.h>

int main(){
//variaveis das cartas
char estado1, estado2;
char codigo1, codigo2[20];
char nome1, nome2[20];
int populacao1, populacao2;
float area1, area2; 
float pib1, pib2;
int pt1, pt2;
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

//carta 2
//cadastro das informaçoes

printf("digite o estado: ");
scanf("%c", &estado2);
printf("digite o codigo:");
scanf("%s", &codigo2);
printf("digite o nome:");
scanf("%s", &nome2);
printf("digite a populacao:");
scanf("%d", &populacao2);
printf("digite a area:");
scanf("%f", &area2);
printf("digite o pib:");
scanf("%f", &pib2);
printf("digite os pontos turisticos:");
scanf("%d", &pt2);

//resultados da carta 2

printf("estado:%c\n", estado2);
printf("codigo:%s\n", codigo2);
printf("nome da cidade:%s\n", nome2);
printf("população:%d\n", populacao2);
printf("area:%.2f\n", area2);
printf("PIB:%.2f\n", pib2);
printf("pontos turisticos:%d\n", pt2);


















    return 0;
}