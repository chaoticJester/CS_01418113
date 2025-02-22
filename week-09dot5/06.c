//06 Sorted linked list (C)
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node Node;

void insert(Node **start, int value) {
    int found = 0;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(*start == NULL) {
        *start = newNode;
        return;
    }

    Node *current = *start;
    Node *prev = NULL;

    while(current != NULL) {
        if(newNode->data <= current->data) {
            break;
        }
        prev = current;
        current = current->next;
    }
    if(prev == NULL) {
        *start = newNode;
        newNode->next = current;
        return;
    }
    prev->next = newNode;
    newNode->next = current;
    
}

void delete(Node **start, int target) {
    if(*start == NULL) {
        return;
    }
    Node *current = *start;
    Node *prev = NULL;
    while(current != NULL) {
        if(current->data == target) {
            if(prev == NULL) {
                *start = current->next;
                current = current->next;
            } else {
                current = current->next;
                prev->next = current;
            }
        } else {
            prev = current;
            current = current->next;
        }
    }
    free(current);
}

void print(Node *start) {
    Node *current = start;
    if(current == NULL) {
        return;
    } else {
        printf("%d ", current->data);
        print(current->next);
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
        } else if(command == 'i') {
            scanf(" %d", &num);
            insert(&head, num);
        } else if(command == 'd') {
            scanf(" %d", &num);
            delete(&head, num);
        } else if(command == 'p') {
            printf("[ ");
            print(head);
            printf("]");
            printf("\n");
        }
    }
}