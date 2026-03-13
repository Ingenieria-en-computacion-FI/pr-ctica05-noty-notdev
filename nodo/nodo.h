#ifndef __NOTY_NODO_H_PRACTICA__

	#define __NOTY_NODO_H_PRACTICA__

	typedef struct Node {
		int data;

		struct Node* last;
		struct Node* next;
	} Node;

	Node* newNode(int d);
	void deleteNode(Node* n);

#endif
