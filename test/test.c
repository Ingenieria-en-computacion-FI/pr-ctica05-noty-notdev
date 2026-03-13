#include <stdio.h>
#include <stdlib.h>

#include "../pila/pila.h"
#include "../cola/cola.h"

int score = 0;

void test_pila_push_pop() {

    Pila* p = pila_crear();

    pila_push(p,1);
    pila_push(p,2);
    pila_push(p,3);

    if(pila_pop(p) == 3)
        score += 10;

    if(pila_pop(p) == 2)
        score += 10;

    pila_destruir(p);
}

void test_pila_top() {

    Pila* p = pila_crear();

    pila_push(p,5);
    pila_push(p,9);

    if(pila_top(p) == 9)
        score += 10;

    pila_destruir(p);
}

void test_cola_enqueue_dequeue() {

    Cola* c = cola_crear();

    cola_enqueue(c,1);
    cola_enqueue(c,2);
    cola_enqueue(c,3);

    if(cola_dequeue(c) == 1)
        score += 10;

    if(cola_dequeue(c) == 2)
        score += 10;

    cola_destruir(c);
}

void test_cola_frente() {

    Cola* c = cola_crear();

    cola_enqueue(c,7);
    cola_enqueue(c,8);

    if(cola_frente(c) == 7)
        score += 10;

    cola_destruir(c);
}

int main() {

    test_pila_push_pop();
    test_pila_top();
    test_cola_enqueue_dequeue();
    test_cola_frente();

    printf("Score: %d / 60\n", score);

    if(score == 60) {
        printf("All tests passed\n");
        return 0;
    }

    printf("Some tests failed\n");
    return 1;
}
