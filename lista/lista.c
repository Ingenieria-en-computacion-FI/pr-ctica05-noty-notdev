#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


//	Crear y destruir lista.
List* newList() {
	List*  l = (List*) malloc(sizeof(List));
	if(!l) return NULL;

	Node* h = newNode(0);
	Node* t = newNode(0);

	if(!h || !t) {
		deleteNode(h);
		deleteNode(t);
		free(l);

		return NULL;
	}

	h->last = t->last = h;
	h->next = t->next = t;
	
	*l = (List) {h, t};

	return l;

}

void  deleteList(List* l) {
	if(!l) return;

	listEmpty(l);
	
	deleteNode(l->head);
	deleteNode(l->tail);
	free(l);
}


//	Insertar en la lista.
void listPushFront(List* l, int d) {
	Node* n;
	if(!l || !(n = newNode(d))) return;
	
	n->next = l->head->next;
	n->next->last = l->head->next = n;

	n->last = l->head;
}

void listPushBack(List* l, int d) {
	Node* n;
	if(!l || !(n = newNode(d))) return;
	
	n->last = l->tail->last;
	n->last->next = l->tail->last = n;

	n->next = l->tail;
}


//	Eliminar de la lista.
bool listPopFront(List* l, int* d) {
	//	La API supone que la lista no debe ser nuls
	if(!l || listIsEmpty(l)) return false;

	Node* n = l->head->next;
	l->head->next = n->next;
	n->next->last = l->head;

	*d = n->data;
	deleteNode(n);

	return true;
}

bool listPopBack(List* l, int* d) {
	if(!l || listIsEmpty(l)) return false;

	Node* n = l->tail->last;
	l->tail->last = n->last;
	n->last->next = l->tail;

	*d = n->data;
	deleteNode(n);

	return true;
}

//	Funciones auxiliares.
void listEmpty(List* l) {
	if(!l) return;

	Node* n = l->head->next;
	while(n != l->tail) {
		Node* tmp = n->next;
		deleteNode(n);
		n = tmp;
	}

	l->head->next = l->tail;
	l->tail->last = l->head;
}

void printList(List* l) {
	if(!l) {
		fprintf(stderr, "La lista a imprimir, no existe.\n");
		return;
	}

	printf("[ ");
	
	Node* n = l->head;
	while(n->next != l->tail) 
		printf("%d, ", (n = n->next)->data);

	puts("\b\b ]");
}


