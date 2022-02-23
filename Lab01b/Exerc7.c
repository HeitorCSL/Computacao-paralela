// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 7

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<locale.h>

typedef struct // Cria uma STRUCT onde armazena 4 variáveis
{
    char Nome[20]; // Nome de até 20 caracteres // Vetor de char de até 20 caract.
    int Idade; // Idade // var. inteiro
    float Peso; // Peso // var. ponto flutuante
    float Altura; // Altura  // var. ponto flutuante
} Pessoa; // Define o tipo da struct criada

Pessoa pessoas[3]; // Criação de um vetor global de struct(do tipo Pessoa) de 3 posições(0,1,2).

int main()
{
  for(int i=0; i<3; i++) //atribuição de valores para cada pos do array de struct
  { 
    printf(" Digite nome da Pessoa: "); // exemplo enquanto i for ZERO..
    scanf("%s%*c", pessoas[i].Nome); // .. pessoas[ZERO] = o nome que o usuário digitar 
    printf(" Digite a idade da Pessoa: ");
    scanf("%d%*c", &pessoas[i].Idade);
    printf(" Digite o Peso da Pessoa: ");
    scanf("%f%*c", &pessoas[i].Peso);  
    printf(" Digite o Altura da Pessoa: ");
    scanf("%f%*c", &pessoas[i].Altura);
  }
  // vetor ou array preenchido após a linha de cod. acima
  
  for(int i=0; i<3; i++) // Mostra Cada posição do array de struct
  {
    printf("Nome: %s, Idade: %d, Peso: %.2f, Altura: %.2f\n",pessoas[i].Nome,pessoas[i].Idade, pessoas[i].Peso, pessoas[i].Altura);  
  }
  
}

