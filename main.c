#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv) {

	int a[1000], Q_elem_a;
	int i;

	// Converte as strings de entrada apontadas por argv
	// para números inteiros e armazena os números no
	// vetor de inteiros a[]
	// Também imprime a[] em stderr
	fprintf(stderr, "Este eh o vetor de entrada:\n");
	for (i = 1; i < argc; i++) {
		a[i - 1] = atoi(argv[i]);
		fprintf(stderr, "%d ", a[i - 1]);
	}
	fprintf(stderr, "\n");
	Q_elem_a = argc - 1; // Quantidade de elementos de a[]

	// Não modifique o código acima

	// Encontre o maior e o menor elemento do vetor a[]
	// Q_elem_a contém a quantidade de elementos de a[]
	// Faça seu código abaixo
	// Crie suas variáveis abaixo
	int maior, menor;


	// Crie o corpo do seu código abaixo

	


	
	// A saída deve ser para a stdout e deve ser na forma de 
	// uma string contendo o maior e o menor, serados por um
	// único espaço. O último caractere da string deve ser o
	// pula linha '\n'. Exemplo: "<maior>< ><menor><\n>"
	// <  > servem para representar os componentes da string
	// e não devem ser impressos.
	//
	// Crie a saída para o programa de testes automático abaixo

	



	// Não modifique o código abaixo

	return 0;
}
