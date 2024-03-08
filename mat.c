
#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 3

int criarmat() {
// declaração de variável ponteiro para ponteiro
	int **mat;
    int i, j;


	// alocando o vetor de ponteiros
	mat = (int**)malloc(LINHAS * sizeof(int*));



	// alocando cada uma das linhas da matriz
	for(i = 0; i < LINHAS; i++)
		mat[i] = (int*)malloc(COLUNAS * sizeof(int));

	// preenchendo a matriz
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
			mat[i][j] = i + j;
	}

    return **mat;
}

int main(int argc, char *argv[])
{




	// mostrando os elementos da matriz
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}
    printf("%d", &mat);



	// liberando o espaço de memória



	// libera cada linha
	for(i = 0; i < LINHAS; i++)
		free(mat[i]);



	// libera o vetor de ponteiros
	free(mat);



	return 0;
}

