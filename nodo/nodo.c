#include <stdlib.h>
#include "nodo.h"


/*	DEJE DE TABULAR CON ESPACIOS!!!
 *	;_;
*/


Node* newNode(int d) {
	Node*  n = (Node*) malloc(sizeof(Node));
	if(n) *n = (Node) {d, NULL, NULL};

	return n;
}

void deleteNode(Node* n) {
	free(n);
}


