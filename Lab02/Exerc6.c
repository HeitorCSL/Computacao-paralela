// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 6

#include<stdio.h>

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

  printf("Representação final da matriz:\n");
  for (i=0; i<taml; i++)
  {
    for (j=0; j<tamc; j++)
    {
      printf("%d, ", matriz[i][j]); //faz o mesmo que o loop acima porém ele printa como está a matriz
    }
      printf("\n");
  }
  
  printf("Representação transposta:\n"); // usando a lógico de que linha se torna coluna, invertendo a ordem do laço de reptição criamos a tranposta 
  for (j=0; j<tamc; j++) //x colunas que se tornarao y linhas
  {
    for (i=0; i<taml; i++) // y linhas que se tornao x colunas
    {
      printf("%d, ", matriz[i][j]); //faz o mesmo que o loop acima porém ele printa como está a matriz
    }
      printf("\n");
  }
}