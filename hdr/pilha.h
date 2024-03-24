#ifndef PILHA_H
#define PILHA_H

typedef struct Node {
    int x;
    int y;
    struct Node* next;
} Node;


Node* createNode(int x, int y);

void push(Node** top, int x, int y);

void pop(Node** top);

Node* top(Node* top);

int isEmpty(Node* top);

void print(Node* top);

void freeStack(Node* top);



#endif