#include "cola-d.h"


//	Crear y destruir.
Deque* newDeque() {
	return newList();
}

void deleteDeque(Deque* dq){
	deleteList(dq);
}


//	Insertar e eliminar.
void dequePushFront(Deque* dq, int d) {
	listPushFront(dq, d);
}

void dequePushBack(Deque* dq, int d) {
	listPushBack(dq, d);
}

bool dequePopFront(Deque* dq, int* d) {
	return listPopFront(dq, d);
}

bool dequePopBack(Deque* dq, int* d) {
	return listPopBack(dq, d);
}


