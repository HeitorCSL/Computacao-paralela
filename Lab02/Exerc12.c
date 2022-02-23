// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 12

#include <stdio.h>
#include <stdlib.h>

int retornapos(char string[],int qtd,int pos, char caracter) //função que retorna posição do caracter
{
  for(int i=0;i<qtd;i++ ) //for até qtd maximo do vetor de char
  {
    if(string[i]==caracter) //se o vetor da pos[i] encontrar o caracter
    {
      pos = i; //a posição = i que é a posição que foi encontrada
      printf("o caracter se encontra na posição: %d ou pos[%d]",pos+1, pos);
    } //mostra qual posição encontrada para o usuário
  }
  return 0;
}

int main()
{
  char string[100], caracter; //vetor global de 100 caracteres, variavel char;
  int pos,cont; //variavel de inteiros

  printf("Digite uma string: "); 
  for(int i = 0; i < 100; i++) 
  {
    scanf("%c", &string[i]); //leitura da string 
    if(string[i] == '\n') {
      break;
    }
    cont++; 
  }
  //printf("Contador: %d\n",cont);
  //printf("o string é %c\n",string[0]);
  printf("Digite um caracter a ser encontrada na string: ");
  scanf("%c", &caracter);

  retornapos(string,cont,pos,caracter);
  //retonapos(string, posicoes, &qtd, caracter);
  return 0;
}