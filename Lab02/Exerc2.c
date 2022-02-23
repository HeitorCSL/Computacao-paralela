// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 2

#include<stdio.h>

int main()
{
  float N1, N2, N3, Exerc, MF;
  
  printf("Digite a nota1: ");
  scanf("%f", &N1);

  printf("Digite a nota2: ");
  scanf("%f", &N2);
  
  printf("Digite a nota3: ");
  scanf("%f", &N3);

  printf("Digite a nota dos exercícios ");
  scanf("%f", &Exerc);

  MF = (N1+(N2*2)+(N3*3)+Exerc)/7;
  printf("\n");
  
  if(MF>=9)
  {
    printf("A\n");
  }
  if(MF>=7.5 && MF<9)
  {
    printf("\nB\n");
  }
  if(MF>=6 && MF<7.5)
  {
    printf("\nC\n");
  }
  if(MF>=4 && MF<6)
  {
    printf("\nD\n");
  }
  if(MF<4)
  {
    printf("\nE\n");
  }
}