// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 1

#include<stdio.h>

int main (){
  
  int menor;
  int i; //linha
  int j; //coluna

  int matriz[3][3]={{4,5,6},{1,2,3},{7,8,9}}; //criação da matriz
  menor=matriz[0][0]; //primeiro elemento da matriz linha[0]coluna[0]
  /*
  int tam;

  printf("Digite a dimensao da matriz exemplo:3 = matriz3x3 : ");
  scanf("%d", &tam);
  printf("\n");
  
  for (i=0; i<tam; i++){
    printf("Digite os valores para a %d linha:\n", i+1);
    for (j=0; j<tam; j++){
      scanf("%d", &matriz[i][j]); //linha 0... coluna 0++
    }// volta pra linha até chegar em tam
    printf("\n");
  }  
  */
  printf("Representação da matriz:\n");
  for (i=0; i<3; i++)
  {
    for (j=0; j<3; j++)
    {
      printf("%d, ", matriz[i][j]); //faz o mesmo que o loop acima porém ele printa como está a matriz
    }
      printf("\n");
  }

  int lin=0,linha=1;
  
  for (i=0; i<3; i++)
  {
    for (j=0; j<3; j++)
    {
      if(matriz[i][j]<menor) // Compara os elem da matriz com a var menor= o primeiro elem da matriz
      {
        menor = matriz[i][j]; //Se o elem da matriz for menor, ela se torna o novo menor 
        lin = i;
        linha = i+1; 
      }
    }
  /*  if(i=tam-1)
    {
      printf("A linha de menor valor é %d\n", menor);
    }*/
  }  
  printf("\nA linha que possui o menor valor é a %da linha ou linha[%d]\n", linha, lin);
}