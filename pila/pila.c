#include "pila.h"


//	Crear y destruir.
Stack* newStack() {
	return newList();
}

void deleteStack(Stack* s) {
	deleteList(s);
}


//	Insertar y eliminar.
void stackPush(Stack* s, int d) {
	listPushFront(s, d);
}

bool stackPop(Stack* s, int* d) {
	return listPopFront(s, d);
}

bool stackTop(Stack* s, int* d) {
	if(!s || stackIsEmpty(s)) return false;
	*d = s->head->next->data;

	return true;
}


