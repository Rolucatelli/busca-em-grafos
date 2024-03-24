#include <stdio.h>
#include <stdlib.h>
#include "../hdr/pilha.h"


// Função para criar um novo nó
Node* createNode(int x, int y) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->x = x;
    newNode->y = y;
    newNode->next = NULL;
    return newNode;
}

// Função para verificar se a pilha está vazia
int isEmpty(Node* top) {
    return top == NULL;
}

// Função para empilhar um elemento
void push(Node** top, int x, int y) {
    Node* newNode = createNode(x, y);
    newNode->next = *top;
    *top = newNode;
    printf("Elemento (%d, %d) empilhado com sucesso.\n", x, y);
}

// Função para desempilhar um elemento
void pop(Node** top) {
    if (isEmpty(*top)) {
        printf("A pilha está vazia. Nenhum elemento para desempilhar.\n");
        return;
    }
    Node* temp = *top;
    *top = (*top)->next;
    printf("Elemento (%d, %d) desempilhado com sucesso.\n", temp->x, temp->y);
    free(temp);
}

// Função para exibir o elemento do topo da pilha
void peek(Node* top) {
    if (isEmpty(top)) {
        printf("A pilha está vazia. Nenhum elemento para exibir.\n");
        return;
    }
    printf("Elemento do topo da pilha: (%d, %d)\n", top->x, top->y);
}

// Função para exibir todos os elementos da pilha
void display(Node* top) {
    if (isEmpty(top)) {
        printf("A pilha está vazia. Nenhum elemento para exibir.\n");
        return;
    }
    printf("Elementos da pilha:\n");
    Node* temp = top;
    while (temp != NULL) {
        printf("(%d, %d)\n", temp->x, temp->y);
        temp = temp->next;
    }
}

// int main() {
//     Node* top = NULL;

//     // Exemplo de uso da pilha
//     push(&top, 1, 2);
//     push(&top, 3, 4);
//     push(&top, 5, 6);

//     display(top);

//     peek(top);

//     pop(&top);
//     pop(&top);

//     display(top);

//     return 0;
// }