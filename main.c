#include <stdio.h>

#define __NOTY_ANILLO_BY_DEFINE__
#include "anillo/anillo.h"

#define __NOTY_COLA_D_BY_DEFINE__
#include "cola-d/cola-d.h"

int main() {
	Ring* r   = newRing();
	Deque* dq = newDeque();

	for(int i = 1; i <= 10; i++) {
		ringPushFront(r, i);
		ringPushBack(r, 2*i);
		
		dequePushFront(dq, i);
		dequePushBack(dq, 3*i);
	}
	printf("Anillo:\n\t");
	printList(r);

	printf("Cola Doble:\n\t");
	printList(dq);

	listEmpty(r);
	listEmpty(dq);

	printf("El anillo esta vacio? : %s\n", (ringIsEmpty(r) ? "si" : "no"));
	printf("La cola doble esta vacia? : %s\n", (dequeIsEmpty(dq) ? "si" : "no"));

	deleteRing(r);
	deleteDeque(dq);

	return 0;
}
