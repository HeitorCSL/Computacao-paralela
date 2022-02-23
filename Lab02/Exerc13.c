// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 13

#include <stdio.h>
#include <stdlib.h>


int main()
{
  char string[100], caracter; //vetor global de 100 caracteres, variavel char;
  int pos,pos1,cont; //variavel de inteiros

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
  printf("Digite um caracter a ser revelado a posição na string: ");
  scanf("%c", &caracter);
  
  printf("\nO caracter %c se encontra na posição:\n",caracter); 
  for(int i=0;i<cont;i++ ) //loop que mostra em qual(is) posição(ões) o caracter se encontra
  {
    if(string[i]==caracter) //se o vetor da pos[i] encontrar o caracter
    {
      pos = i; //a posição = i que é a posição que foi encontrada
      printf("pos %d ou pos[%d] \n",pos+1, pos);
    } //mostra qual posição encontrada para o usuário
  }

  printf("\nDeseja remover qual pos[x]: "); 
  scanf("%d", &pos1);
  printf("Posição[%d] removida.\n", pos1);
    
  for(int j=pos1;j<cont;j++) //loop que remove a partir da posição dada
  {
    string[j]=string[j+1];    
  }
  
  printf("\nstring final: %s",string); // Mostra como está a string final
  
  return 0;
}