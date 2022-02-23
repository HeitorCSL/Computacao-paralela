// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 5

#include<stdio.h>

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

  int numero,numero1;
  printf("Digite o num a ser multiplicado pela linha:");
  scanf("%d", &numero);
  printf("\n");
  printf("Digite qual linha[x] multiplicara:"); //linha[1] = segunda linha
  scanf("%d", &numero1);
  while(numero1>=tam)
  {
    printf("linha inválida\n");
    printf("Digite qual linha[x] multiplicara novamente:");
    scanf("%d", &numero1);
  }
  printf("\n");
  for (int j=0; j<tam; j++)
  {
      matriz[numero1][j]=matriz[numero1][j]*numero;
  }

  int colun,colun1;
  printf("Digite o num a ser multiplicado pela coluna:");
  scanf("%d", &colun);
  printf("\n");
  printf("Digite qual coluna[x] multiplicara:"); //linha[1] = segunda coluna
  scanf("%d", &colun1);
  while(colun1>=tam)
  {
    printf("coluna inválida\n");
    printf("Digite qual coluna[x] multiplicara novamente:");
    scanf("%d", &colun1);
  }
  printf("\n");
  for (int i=0; i<tam; i++)
  {
      matriz[i][colun1]=matriz[i][colun1]*colun;
  }

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