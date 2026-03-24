#ifndef __NOTY_COLA__PRACTICA_H__

	#define __NOTY_COLA_PRACTICA_H__

	#include "../lista/lista.h"

	typedef List Queue;

	//	Crear y destruir.
	Queue* newQueue();
	void deleteQueue(Queue* q);

	//	Insertar e eliminar.
	void queueEnqueue(Queue* q, int d);
	bool queueDequeue(Queue* q, int* d);
	bool queueFront(Queue* q, int* d);

	//	Auxiliares.
	static inline bool queueIsEmpty(Queue* q) {
		return listIsEmpty(q);
	}

#endif
