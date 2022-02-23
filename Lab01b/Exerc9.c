// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 9

#include<stdio.h>

int functransf(int y,int x,int matriz[y][x]) // função que cria o modulo de um numero negativo na matriz
{
  for (int i=0; i<y; i++) 
  {
    for (int j=0; j<x; j++) 
    {
      if(matriz[i][j]<0)
      {
        matriz[i][j]=matriz[i][j]*(-1);
      }
    }
      printf("\n");
  }
  printf("Substituindo numeros negativos...\n"); 
  return 0;
}


int main (){
  
  int menor;
  int i; //linha
  int j; //coluna
  int taml,tamc;
  
  printf("Digite o tamanho da linha: ");
  scanf("%d", &taml);
  printf("\n");
  printf("Digite o tamanho da coluna : ");
  scanf("%d", &tamc);
  printf("\n");

  int matriz[taml][tamc];
  
  for (i=0; i<taml; i++){
    printf("Digite os valores para a %d linha:\n", i+1);
    for (j=0; j<tamc; j++){
      scanf("%d", &matriz[i][j]); //linha 0... coluna 0++
    }// volta pra linha até chegar em tam
    printf("\n");
  }  

  printf("Representação atual da matriz:\n");
  for (i=0; i<taml; i++)
  {
    for (j=0; j<tamc; j++)
    {
      printf("%d, ", matriz[i][j]); //faz o mesmo que o loop acima porém ele printa como está a matriz
    }
      printf("\n");
  }
  functransf(taml,tamc,matriz); //função que chama o módulo de um numero neg na matriz

  printf("Representação final da matriz:\n");
  for (i=0; i<taml; i++)
  {
    for (j=0; j<tamc; j++)
    {
      printf("%d, ", matriz[i][j]); 
    }
      printf("\n");
  }
}