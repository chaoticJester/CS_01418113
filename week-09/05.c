//05 Single Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node *next;
};
typedef struct Node node;
typedef node* List;

void printList(node *pList) {
    if(pList == NULL) {
        printf("\n");
        return;
    } else {
        printf("%d ", pList->value);
        printList(pList->next);
    }
}

void insertNode(List *ptr, int data) {
    node* newNode = (node*) malloc(sizeof(node));
    newNode->value = data;
    newNode->next = NULL;

    if( *ptr == NULL) {
        *ptr = newNode;
        return;
    }

    node* current = *ptr;
    node* prev = NULL;

    while(current != NULL) {
        if(newNode->value <= current->value) {
            break;
        }
        prev = current;
        current = current->next;
    }

    if(prev == NULL) {
        newNode->next = current;
        *ptr = newNode;
        return;
    }
    newNode->next = current;
    prev->next = newNode;
}

int main() {
    int i, value;
    node *pList=NULL;
    
    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }
    
    printList(pList);


}