#include <stdio.h>

#include "../hdr/pilha.h"

int main()
{

    Node *top = NULL;

    // Exemplo de uso da pilha
    push(&top, 1, 2);
    push(&top, 3, 4);
    push(&top, 5, 6);

    display(top);

    peek(top);

    pop(&top);
    pop(&top);

    display(top);

    return 0;
}