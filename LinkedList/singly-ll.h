#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void initialize(int data);
void insert_at_start(int data);
void insert_at_end(int data);
void display();
