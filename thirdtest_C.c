#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	int num, ant, suc;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Escreva um n�mero:\n");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("\n Seu n�mero antecessor � o: %d", ant);
	printf("\n Seu n�mero sucessor � o: %d", suc);
	
	return (0);
}
