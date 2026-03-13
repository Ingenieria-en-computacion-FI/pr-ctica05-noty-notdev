#include <stdio.h>
#include "pila/pila.h"
#include "cola/cola.h"

int main() {
	Stack* s = newStack();
	Queue* q = newQueue();

	stackPush(s, 10);
	stackPush(s, 20);
	stackPush(s, 30);
	stackPush(s, 40);
	stackPush(s, 50);
	printList(s);


	queueEnqueue(q, 1);
	queueEnqueue(q, 2);
	queueEnqueue(q, 3);
	queueEnqueue(q, 4);
	queueEnqueue(q, 5);
	printList(q);

	printf("Repositorio compilado correctamente\n");

	deleteStack(s);
	deleteStack(q);

	return 0;
}
