#ifndef __NOTY_ANILLO_PRACTICA_H__

	#define __NOTY_ANILLO_PRACTICA_H__

	#include "../lista/lista.h"

	#ifdef __NOTY_ANILLO_BY_DEFINE__
		#define Ring List

		#define newRing(r)	( newList(r) )
		#define deleteRing(r)	( deleteList(r) )
		
		#define ringPushFront(r, d)	( listPushFront(r, d) )
		#define ringPushBack(r, d)	( listPushBack(r, d) )
		#define ringPopFront(r, d)	( listPopFront(r, d) )
		#define ringPopBack(r, d)	( listPopBack(r, d) )

		#define ringIsEmpty(r)	( listIsEmpty(r) )
	#else
		typedef List Ring;

		//	Crear y destruir.
		Ring* newRing();
		void deleteRing(Ring* r);

		//	Insertar e eliminar.
		void ringPushFront(Ring* r, int d);
		void ringPushBack(Ring* r, int d);
		bool ringPopFront(Ring* r, int* d);
		bool ringPopBack(Ring* r, int* d);

		//	Auxiliares.
		static inline bool ringIsEmpty(Ring* r) {
			return listIsEmpty(r);
		}
	#endif

#endif
