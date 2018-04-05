#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


// esse codigo possui todas as fun��es essenciais para cria��o de um grafo direcionado
int main() {
	int eh_digrafo = 1;
	//cria��o do grafo
    Grafo* gr = cria_Grafo(6, 5, 0);
    
    //inser��o das arestasdo grafo
    insereAresta(gr, 0, 1, eh_digrafo, 0);
    insereAresta(gr, 1, 3, eh_digrafo, 0);
    insereAresta(gr, 1, 2, eh_digrafo, 0);
    insereAresta(gr, 2, 4, eh_digrafo, 0);
    insereAresta(gr, 3, 0, eh_digrafo, 0);
    insereAresta(gr, 3, 4, eh_digrafo, 0);
    insereAresta(gr, 4, 1, eh_digrafo, 0);
	insereAresta(gr, 5, 1, eh_digrafo, 0);
	
	//impress�o do grafo    
	printf("Grafo Direcionado\n");
    imprime_Grafo(gr);

    libera_Grafo(gr);

    system("pause");
	
	return 0;
}
