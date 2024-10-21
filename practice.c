#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeg(struct Node** head, int newData){
    struct Node* newNode = createNode(newData);
    struct Node* temp = *head;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int newData){
    struct Node* newNode = createNode(newData);
    struct Node* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printLL(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main(){
    struct Node* head = NULL;
    insertAtBeg(&head, 4);
    insertAtBeg(&head, 3);
    insertAtBeg(&head, 2);
    insertAtBeg(&head, 1);
    insertAtBeg(&head, 0);
    insertAtEnd(&head, 5);
    printLL(head);

}

