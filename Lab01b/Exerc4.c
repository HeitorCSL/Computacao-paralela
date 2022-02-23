// Heitor Ce Sun Lin - 31930451
// Lab01b - Exercício 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char str1[15];
  char str2[15];
  int ret;

  //strcpy(str1, "aucas");
  //strcpy(str2, "lucaa");

  printf("Digite o 1o nome: ");
  scanf("%s", str1);
  printf("Digite o 2o nome: ");
  scanf("%s", str2);
  
  ret = strcoll(str1, str2);

  if(ret > 0) 
  {
    //printf("str1 possui um valor maior no caracter que str2\n ");
    printf("%s\n%s\n\n", str2,str1);
  }
  else if(ret < 0)  //str1 possuir um valor menor signfica que ele antecede o caracter de str2. 
  {
    //printf("str1 possui um valor menor no caracter que difere em str2\n ret<0");
    printf("%s\n%s\n\n", str1,str2);
  }
  else
  {
    //printf("str1 = str2");
    printf("%s\n%s\n\n", str1,str2);
  }
  return(0);
}