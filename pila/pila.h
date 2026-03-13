#ifndef __NOTY_PILA_H_PRACTICA__

	#define __NOTY_PILA_H_PRACTICA__

	#include "../lista/lista.h"

	typedef List Stack;

	//	Crear y destruir.
	Stack* newStack();
	void deleteStack(Stack* s);

	//	Insertar y eliminar.
	void stackPush(Stack* s, int d);
	bool stackPop(Stack* s, int* d);
	bool stackTop(Stack* s, int* d);

	//	Auxiliares.
	static inline bool stackIsEmpty(Stack* s) {
		return listIsEmpty(s);
	}

#endif
