#include <stdio.h>

int main(){
  // REFERENTE A CARTA 1
 char estado[50];
 char codigodacidade[50];
 char nomedacidade[50];
 int populacao;
 int pontosturisticos;
 float area;
 float pib;
 float densidadepopulacional;
 float pibpercapital;
 float superpoder;

int atributo;
int atributo2;

// Carta 1

 printf("Estado: ");
 scanf("%s", &estado);

 printf("Codigo da cidade: ");
 scanf("%s", &codigodacidade);

 printf("Nome da cidade: ");
 scanf("%s", &nomedacidade);

 printf("Populaçao: ");
 scanf("%d", &populacao);
 
 printf("Pontos turisticos: ");
 scanf("%d", &pontosturisticos);

 printf("Área: ");
 scanf("%f", &area);

 printf("Pib: ");
 scanf("%f", &pib);



  // calculos carta 1


 densidadepopulacional = (populacao + area ) /2;

 pibpercapital = (pib + populacao) /2;

  //conclusão para o super poder da carta 1
  
  superpoder = (populacao + area + pib + pontosturisticos + pibpercapital + densidadepopulacional);



//REFERENTE A CARTA 2

char estado2[50];
char codigodacidade2[50];
char nomedacidade2[50];
int populacao2;
int pontosturisticos2;
float area2;
float pib2;
float densidadepopulacional2;
float pibpercapital2;
float superpoder2;

printf("Estado: ");
scanf("%s", &estado2);


printf("Codigo da cidade: ");
scanf("%s", &codigodacidade2);


printf("Nome da cidade: ");
 scanf("%s", &nomedacidade2);


 printf("Populaçao: ");
 scanf("%d", &populacao2);
 

 printf("Pontos turisticos: ");
 scanf("%d", &pontosturisticos2);


 printf("Área: ");
 scanf("%f", &area2);


 printf("Pib: ");
 scanf("%f", &pib2);
  
 
 
 //        calculos carta 2



 densidadepopulacional2 = (populacao2 + area2 ) /2;

 pibpercapital2 = (pib2 + populacao2) /2;


 // conclusão do super poder da carta 2

 superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapital2 + densidadepopulacional2);


// carta 1
printf("Estado é: %s\n", estado);
printf("Codigo da cidade %s\n", codigodacidade);
printf("Nome da cidade: %s\n", nomedacidade);
printf("População: %d\n", populacao);
printf("pontos turisticos: %d\n", pontosturisticos);
printf("Área: %.2f km²\n", area);
printf("Pib: %.2f Bilhões de reais\n", pib);
printf("Densidade populacional é: %.2f hab/km²\n", densidadepopulacional);
printf("O pib per capital é: R$ %.2f\n", pibpercapital);
printf("O super poder é: %.2f\n", superpoder);


//carta 2

printf("Estado é: %s\n",estado2);
printf("Codigo da cidade %s\n",codigodacidade2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("População: %d\n", populacao2);
printf("pontos turisticos: %d\n", pontosturisticos2);
printf("Área: %.2f km²\n",area2);
printf("Pib: %.2f Bilhões de reais\n",pib2);
printf("Densidade populacional é: %.2f hab/km²\n", densidadepopulacional2);
printf("O pib per capital é: R$ %.2f\n", pibpercapital2);
printf("O super poder é: %.2f\n", superpoder2);

// MENU DE COMPARAÇÃO DE ATRIBUTOS DAS CARTAS

printf("Qual atributos voçê gostaria de comparar?\n");
printf("1. Nomes das cidades\n");
printf("2. População\n");
printf("3. Pontos Turisticos\n");
printf("4. Área km²\n");
printf("5. PIB\n");
printf("6. Densidade Populacional\n");
printf("7. Pib per Capital\n");
printf("8. Super Poder\n");

printf("Escolha o atributo voçê gostaria de comparar:");
scanf("%d", &atributo);

switch (atributo)
{
  // Nome da cidade
  case 1:
printf("%s e %s\n", nomedacidade, nomedacidade2);

  break;
  // População
  case 2:
printf("População da Carta 1: %d\n", populacao);
printf("População da Carta 2: %d\n", populacao2);
  if (populacao > populacao2)
{
    printf("%s Venceu\n",nomedacidade);
}else if(populacao < populacao2)
    printf("%s Venceu\n", nomedacidade2);
    else
    {
    printf("Empatou!\n");
}
break;
  //Pontos turisticos
  case 3:
printf("Pontos turisticos da Carta 1: %d\n", pontosturisticos);
printf("Pontos turisticos da Carta 2: %d\n", pontosturisticos2);
  if(pontosturisticos > pontosturisticos2)
{
  printf("%s Venceu\n",nomedacidade);
}else if (pontosturisticos < pontosturisticos2)
printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  // Área em km²
  case 4:
printf("Área da Carta 1: %.2f Km²\n",area);
printf("Área da Carta 2: %.2f Km²\n",area2);
  if (area > area2)
{
  printf("%s Venceu\n",nomedacidade);
}else if (area < area2)
printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  break;
  //PIB
  case 5:
printf("PIB da Carta 1:R$ %.2f Milhões de reais\n",pib);
printf("PIB da Carta 2:R$ %.2f Milhões de reais\n",pib2);
  if (pib > pib2)
{
  printf("%s Venceu\n", nomedacidade);
}else if (pib < pib2)
printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  break;
  //Densidade populacional
  case 6:
  printf("Densidade Populacional da Carta 1: %.2f\n", densidadepopulacional);
  printf("Densidade Populacional da Carta 2: %.2f\n", densidadepopulacional2);
   if (densidadepopulacional < densidadepopulacional2)
{
  printf("%s Venceu\n", nomedacidade);
}else if (densidadepopulacional > densidadepopulacional2)
printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  break;
  //PIB per Capital
  case 7:
  printf("Pib per Capital da Carta 1: R$ %.2f\n Milhoes de reais", pibpercapital);
  printf("Pib per Capital da Carta 2: R$ %.2f\n Milhoes de reais", pibpercapital2);
   if (pibpercapital > pibpercapital2)
   {
    printf("%s Venceu\n", nomedacidade);
   }else if (pibpercapital < pibpercapital2)
   printf("%s Venceu\n", nomedacidade2);
   else
   {
     printf("Empatou!\n");
   }
  break;
  // Super poder
  case 8:
  printf("Super Poder da Carta 1: %.2f\n", superpoder);
  printf("Super Poder da Carta 2: %.2f\n", superpoder2);
  if (superpoder > superpoder2)
{
  printf("%s Venceu\n", nomedacidade);
}else if (superpoder < superpoder2)
printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  break;
  
default:
printf("Opção invalida\n");
  break;
}

//selação de atributos

printf("Qual é o outro atributos que voçê gostaria de comparar?\n");
printf("1. Nomes das cidades\n");
printf("2. População\n");
printf("3. Pontos Turisticos\n");
printf("4. Área km²\n");
printf("5. PIB\n");
printf("6. Densidade Populacional\n");
printf("7. Pib per Capital\n");
printf("8. Super Poder\n");

printf("Escolha o atributo que vc gostaria de comparar: ");
scanf("%d", &atributo2);

if (atributo == atributo2)
{
printf("Voçê escolheu o mesmo atributo!");
}else{

switch (atributo2)
{
  // Nome da cidade
  case 1:
printf("%s e %s\n", nomedacidade, nomedacidade2);

  break;
  // População
  case 2:
printf("População da Carta 1: %d\n", populacao);
printf("População da Carta 2: %d\n", populacao2);
  if (populacao > populacao2)
{
    printf("%s Venceu\n",nomedacidade);
}else if(populacao < populacao2)
    printf("%s Venceu\n", nomedacidade2);
    else{
      printf("Empatou!\n");
    }
     
   break;
  //Pontos turisticos
  case 3:
printf("Pontos turisticos da Carta 1: %d\n", pontosturisticos);
printf("Pontos turisticos da Carta 2: %d\n", pontosturisticos2);
  if(pontosturisticos > pontosturisticos2)
{
  printf("%s Venceu\n",nomedacidade);
}else if (pontosturisticos < pontosturisticos2)
  printf("%s Venceu\n", nomedacidade2);
  else
  {
    printf("Empatou!\n");
  }
  
 break;
  // Área em km²
  case 4:
printf("Área da Carta 1: %.2f Km²\n",area);
printf("Área da Carta 2: %.2f Km²\n",area2);
  if (area > area2)
{
  printf("%s Venceu\n",nomedacidade);
}else if (area < area2)
  printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  break;
  //PIB
  case 5:
printf("PIB da Carta 1: %.2f Milhões de reais\n",pib);
printf("PIB da Carta 2: %.2f Milhões de reais\n",pib2);
  if (pib > pib2)
{
  printf("%s Venceu\n", nomedacidade);
}else if (pib < pib2)
  printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  break;
  //Densidade populacional
  case 6:
  printf("Densidade Populacional da Carta 1: %.2f\n", densidadepopulacional);
  printf("Densidade Populacional da Carta 2: %.2f\n", densidadepopulacional2);
   if (densidadepopulacional < densidadepopulacional2)
{
  printf("%s Venceu\n", nomedacidade2);
}else if (densidadepopulacional > densidadepopulacional2)
  printf("%s Venceu\n", nomedacidade);
else
{
  printf("Empatou!\n");
}
  break;
  //PIB per Capital
  case 7:
  printf("Pib per Capital da Carta 1: %.2f\n Milhoes de reais", pibpercapital);
  printf("Pib per Capital da Carta 2: %.2f\n Milhoes de reais", pibpercapital2);
   if (pibpercapital > pibpercapital2)
   {
    printf("%s Venceu\n", nomedacidade);
   }else if (pibpercapital < pibpercapital2)
    printf("%s Venceu\n", nomedacidade2);
   else
   {
     printf("Empatou!\n");
   }
  break;
  // Super poder
  case 8:
  printf("Super Poder da Carta 1: %.2f\n", superpoder);
  printf("Super Poder da Carta 2: %.2f\n", superpoder2);
  if (superpoder > superpoder2)
{
  printf("%s Venceu\n", nomedacidade);
}else if (superpoder < superpoder2)
printf("%s Venceu\n", nomedacidade2);
else
{
  printf("Empatou!\n");
}
  break;
  
default:
printf("Opção invalida\n");
}}

}
