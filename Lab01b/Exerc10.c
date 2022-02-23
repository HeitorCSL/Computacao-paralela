// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 10

#include<stdio.h>

int funclinha(int x,int matriz[x][x]) //função que mulplica a linha de uma matriz
{
  int numero,numero1;
  printf("Digite o num a ser multiplicado pela linha:");
  scanf("%d", &numero);
  printf("\n");
  printf("Digite qual linha[x] multiplicara:"); //linha[1] = segunda linha
  scanf("%d", &numero1);
  while(numero1>=x)
  {
    printf("linha inválida\n");
    printf("Digite qual linha[x] multiplicara novamente:");
    scanf("%d", &numero1);
  }
  printf("\n");
  for (int j=0; j<x; j++)
  {
      matriz[numero1][j]=matriz[numero1][j]*numero;
  }
  return 0;
}

int funcoluna(int x,int matriz[x][x]) //função que mulplica a colun de uma matriz
{
  int colun,colun1;
  printf("Digite o num a ser multiplicado pela coluna:");
  scanf("%d", &colun);
  printf("\n");
  printf("Digite qual coluna[x] multiplicara:"); //linha[1] = segunda coluna
  scanf("%d", &colun1);
  while(colun1>=x)
  {
    printf("coluna inválida\n");
    printf("Digite qual coluna[x] multiplicara novamente:");
    scanf("%d", &colun1);
  }
  printf("\n");
  for (int i=0; i<x; i++)
  {
      matriz[i][colun1]=matriz[i][colun1]*colun;
  }
  return 0;
}

int main (){
  
  int menor;
  int i; //linha
  int j; //coluna
  int tam;
  
  printf("Digite a dimensao da matriz exemplo:3 = matriz3x3 : ");
  scanf("%d", &tam);
  printf("\n");

  int matriz[tam][tam];
  
  for (i=0; i<tam; i++){
    printf("Digite os valores para a %d linha:\n", i+1);
    for (j=0; j<tam; j++){
      scanf("%d", &matriz[i][j]); //linha 0... coluna 0++
    }// volta pra linha até chegar em tam
    printf("\n");
  }  

  funclinha(tam,matriz); //chamada da função linha 
  funcoluna(tam,matriz); //chamada da função coluna 
  
  printf("Representação final da matriz:\n");
  for (i=0; i<tam; i++)
  {
    for (j=0; j<tam; j++)
    {
      printf("%d, ", matriz[i][j]); //faz o mesmo que o loop acima porém ele printa como está a matriz
    }
      printf("\n");
  }
  //printf("%d",matriz[0][1]*2);
}