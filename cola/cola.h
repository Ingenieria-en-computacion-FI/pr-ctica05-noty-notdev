#ifndef COLA_H

	#define COLA_H

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
