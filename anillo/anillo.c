#include "anillo.h"


//	Crear y destruir.
Ring* newRing() {
	return newList();
}

void deleteRing(Ring* r){
	deleteList(r);
}


//	Insertar e eliminar.
void ringPushFront(Ring* r, int d) {
	listPushFront(r, d);
}

void ringPushBack(Ring* r, int d) {
	listPushBack(r, d);
}

bool ringPopFront(Ring* r, int* d) {
	return listPopFront(r, d);
}

bool ringPopBack(Ring* r, int* d) {
	return listPopBack(r, d);
}


