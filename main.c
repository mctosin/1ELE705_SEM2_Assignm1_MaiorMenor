#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	int a[1000], Q_elem_a;
	int i;

	// Converte as strings de entrada apontadas por argv
	// para n�meros inteiros e armazena os n�meros no
	// vetor de inteiros a[]
	// Tamb�m imprime a[] em stderr
	fprintf(stderr, "Este eh o vetor de entrada:\n");
	for (i = 1; i < argc; i++) {
		a[i - 1] = atoi(argv[i]);
		fprintf(stderr, "%d ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1; // Quantidade de elementos de a[]

	// N�o modifique o c�digo acima

	// Encontre o maior e o menor elemento do vetor a[]
	// Q_elem_a cont�m a quantidade de elementos de a[]
	// Fa�a seu c�digo abaixo
	// Crie suas vari�veis abaixo
	int maior, menor;


	// Crie o corpo do seu c�digo abaixo

	


	
	// A sa�da deve ser para a stdout e deve ser na forma de 
	// uma string contendo o maior e o menor, serados por um
	// �nico espa�o. O �ltimo caractere da string deve ser o
	// pula linha '\n'. Exemplo: "<maior>< ><menor><\n>"
	// <  > servem para representar os componentes da string
	// e n�o devem ser impressos.
	//
	// Crie a sa�da para o programa de testes autom�tico abaixo

	



	// N�o modifique o c�digo abaixo

	return 0;
}
