// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 11

#include<stdio.h>

int funcslinha12(int x,int matriz[x][x]) //função que soma linha 1 e linha 2 e poe na linha 2, no caso linha[1] = linha[0]+linha[1] 
{
  printf("função soma L1 e L2\n");
  for (int j=0; j<x; j++)
  {
      matriz[1][j]=matriz[1][j]+matriz[0][j];
  }
  
  return 0;
}

int funcmullinha12(int x,int matriz[x][x]) //função que soma linha 1 e linha 2 e poe na linha 2, no caso linha[1] = linha[0]+linha[1] 
{
  printf("função multiplica L1 e L2\n");
  for (int j=0; j<x; j++)
  {
      matriz[1][j]=matriz[1][j]*matriz[0][j];
  }
  
  return 0;
}

int funcmostramatriz(int x,int matriz[x][x]) //função que mostra como está a matriz atual
{
  printf("Matriz atual:\n");
  for (int i=0;i<x; i++)
  {
    for (int j=0;j<x; j++)
    {
      printf("%d, ", matriz[i][j]); //faz o mesmo que o loop acima porém ele printa como está a matriz
    }
      printf("\n");
  }
  printf("\n");
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

  funcslinha12(tam,matriz); //chamada da função soma linha 1 e 2 e poe na linha 2
  funcmostramatriz(tam,matriz); //chamada da função que mostra como está a matriz atual
  
  funcmullinha12(tam,matriz); // funcção multplica linha 1 e linha 2 e poe na linha2
  funcmostramatriz(tam,matriz);
  //printf("%d",matriz[0][1]*2);
}