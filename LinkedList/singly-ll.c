#include "singly-ll.h"

Node *head = NULL;
Node *tail = NULL;

void initialize(int data) {
    Node *curr = (Node *)malloc(sizeof(Node));
    curr->next = NULL;
    curr->data = data;
    head = tail = curr;
}

void insert_at_start(int data) {
    if (head == NULL) {
        initialize(data);
        return;
    }
    Node *curr = (Node *)malloc(sizeof(Node));
    curr->data = data;
    curr->next = head;
    head = curr;
}

void insert_at_end(int data) {
    if (head == NULL) {
        initialize(data);
        return;
    }
    Node *curr = (Node *)malloc(sizeof(Node));
    curr->data = data;
    tail->next = curr;
    tail = curr;
}

void display() {
    Node *curr = head;
    while (curr != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
}
