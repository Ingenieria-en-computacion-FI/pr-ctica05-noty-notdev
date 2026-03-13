#ifndef __NOTY_LISTA_H_PRACTICA__

	#define __NOTY_LISTA_H_PRACTICA__

	#include <stdbool.h>
	#include "../nodo/nodo.h"

	typedef struct {
	    Node* head;
	    Node* tail;
	} List;

	//	Crear y destruir lista.
	List* newList();
	void  deleteList(List* l);

	//	Insertar en la lista.
	void listPushFront(List* l, int d);
	void listPushBack(List* l, int d);

	//	Eliminar de la lista.
	bool listPopFront(List* l, int* d);
	bool listPopBack(List* l, int* d);

	//	Funciones auxiliares.
	void listEmpty(List* l);
	void printList(List* l);
	
	static inline bool listIsEmpty(List* l) {
		return l->head->next == l->tail;
	}

#endif
