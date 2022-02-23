// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 14

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char string[100], caracter; //vetor global de 100 caracteres, variavel char;
  int pos1,cont; //variavel de inteiros

  printf("Digite uma string: "); 
  for(int i = 0; i < 100; i++) 
  {
    scanf("%c", &string[i]); //leitura da string 
    if(string[i] == '\n') {
      break;
    }
    cont++; 
  }
  //printf("o string é %c\n",string[0]);
  printf("Digite um caracter a ser inserido na posição na string: ");
  scanf("%c", &caracter);
  
  obs:printf("\nOBS:(x é um valor entre 0 e %d) ",cont);  
  printf("\nDeseja inserir em qual pos[x]:"); 
  scanf("%d", &pos1);
  printf("Posição[%d] inserida.\n", pos1);

  for(int k=cont;k>pos1;k--) //deslocaos elem onde vai ser inserido o caracter para uma posição a frente
  {  
    string[k]=string[k-1];
  }
  string[pos1]=caracter; //inserção do caracter na posição
  
  printf("\nstring final: %s",string); // Mostra como está a string final
  
  return 0;
}