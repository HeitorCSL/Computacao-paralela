// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  int pos=2; //inicia 2 caracteres a frente
  
  while(num%2==0) //enquanto for par
  {
    printf ("Digite um número impar máximo do triângulo: ");
    scanf ("%d", &num); //input do numero
    printf("\n");
    if(num%2==0) //se for par 
    {
      printf ("Número invalido, digite um número impar.\n");
    } //retorna ao loop como ainda é um num par
  }
  
  for (int i = 1; i <= num; i++)
  {
    for (int j = 0; j < pos; j++)
    {
      printf(" ");
    }
    printf ("%d ",i); // imprime a proxima sequencia do triangulo
    for (int j= i+1; j<= num; j++) 
    {
      printf ("%d ",j); //imprime a sequência atual do triangulo
    }
    num = num -1; //decremento do num max
    printf ("\n"); 
    pos = pos + 2; //ajusta 2 posições 
  }
  return 0;
}