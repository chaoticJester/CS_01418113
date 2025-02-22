//07 Hashing - Chaining (Cc
#include <stdio.h>
#include <stdlib.h>

#define SIZE 97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

void add(Node **ptr, int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->item = value;
    newNode->next = NULL;
    
    if(*ptr == NULL) {
        *ptr = newNode;
        return;
    }
    newNode->next = *ptr;
    *ptr = newNode;
}

void print(Node *ptr) {
    for(int i = 0; i < SIZE; i++) {
        Node *current = ptr;
        printf("KEY %2d: ", i);
        while(current != NULL) {
            if(current->item % SIZE == i) {
                printf("%d ", current->item);
            }
            current = current->next;
        }
        if(i != SIZE - 1) {
            printf("\n");
        }
    }
}

int main() {
    char command;
    int num;
    Node *head = NULL;
    while(1) {
        printf("input> ");
        scanf(" %c", &command);
        if(command == 'q') {
            break;
        } else if(command == 'a') {
            scanf(" %d", &num);
            add(&head, num);
        } else if(command == 'p') {
            print(head);
            printf("\n");
        }
    }
}