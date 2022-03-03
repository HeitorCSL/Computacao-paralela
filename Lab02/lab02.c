// Heitor Ce Sun Lin - 31930451
// LAB02

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
        pid_t pid;
	int i, num, j;

	printf("\nEnter the number: ");
	scanf("%d",&num);
	j = num;
	pid = getpid();

	for(i = 1;j>1;j=j-1){
		pid= fork(); //tentativa de criação de processos filhos dentro do loop
	
		i=i*j;
	}
	
	if(pid<0){
		fprintf(stderr,"Erro na chamada do fork\n");
		exit(2);
	}
	if(pid==0){
		printf("PID:%d \n",getpid());
	}
	else{
		printf("PIDp:%d \n",getpid());
	}

	
	waitpid(pid,NULL,0);
	printf("The factorial of %d is %d\n",num,i);

	return 0;
}
