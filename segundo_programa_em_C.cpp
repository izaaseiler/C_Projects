//Meu segundo programa em C, testando entrada e sa�da de dados.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int idade; //declara��o da vari�vel que utilizarei no meu programa
	printf("Digite a idade: \n"); //mensagem que imprimirei na tela para o usu�rio e um pulo de linha indicado por \n, tudo entre aspas
	scanf("%d", &idade); //leitura de dados informados pelo usu�rio, tipo de dado com o especificador de formato %d = inteiro e a leitura da vari�vel idade ap�s o &
	printf("A idade digitada foi = %d", idade); //mensagem que imprimirei na tela como resposta, novamente utilizando o especificador e a vari�vel com o resultado, agora sem o &
	return(0);
}
