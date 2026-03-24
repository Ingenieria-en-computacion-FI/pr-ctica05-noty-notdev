#ifndef __NOTY_COLA_D_PRACTICA_H__

	#define __NOTY_COLA_D_PRACTICA_H__

	#include "../lista/lista.h"

	#ifdef __NOTY_COLA_D_BY_DEFINE__
		#define Deque List

		#define newDeque(dq)	( newList(dq) )
		#define deleteDeque(dq)	( deleteList(dq) )
		
		#define dequePushFront(dq, d)	( listPushFront(dq, d) )
		#define dequePushBack(dq, d)	( listPushBack(dq, d) )
		#define dequePopFront(dq, d)	( listPopFront(dq, d) )
		#define dequePopBack(dq, d)	( listPopBack(dq, d) )

		#define dequeIsEmpty(dq)	( listIsEmpty(dq) )
	#else
		typedef List Deque;

		//	Crear y destruir.
		Deque* newDeque();
		void deleteDeque(Deque* dq);

		//	Insertar e eliminar.
		void dequePushFront(Deque* dq, int d);
		void dequePushBack(Deque* dq, int d);
		bool dequePopFront(Deque* dq, int* d);
		bool dequePopBack(Deque* dq, int* d);

		//	Auxiliares.
		static inline bool dequeIsEmpty(Deque* dq) {
			return listIsEmpty(dq);
		}
	#endif

#endif
