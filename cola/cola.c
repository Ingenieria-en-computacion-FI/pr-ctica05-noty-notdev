#include "cola.h"


//	Crear y destruir.
Queue* newQueue() {
	return newList();
}

void deleteQueue(Queue* q){
	deleteList(q);
}


//	Insertar e eliminar.
void queueEnqueue(Queue* q, int d) {
	listPushFront(q, d);
}

bool queueDequeue(Queue* q, int* d) {
	return listPopBack(q, d);
}

bool queueFront(Queue* q, int* d) {
	if(!q || queueIsEmpty(q)) return false;
	*d = q->tail->last->data;

	return true;
}


