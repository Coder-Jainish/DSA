#include <stdio.h>
#include <stdlib.h>

void* head = NULL;

struct Node{
    int data;
    struct node* next;
};

struct Node* create(int data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node*));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
};

void insertatfirst(struct node** head, int data) {
    struct Node* newNode = create(data);
    newNode->next = *head;
    *head = newNode;
}

void insertatend(struct node** head, int data) {
    struct Node* newNode = create(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    if (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertatposition(struct node** head, int data, int position) {
    struct Node* newNode = create(data);
    if(position == 0){
        insertatfirst(head,data);
        return;
    }
    struct Node* temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){
    struct Node* head = NULL;
    int info = create(5);
    printf("linked list for %d is created.\n",info);
    insertatfirst(*head, 9);
    insertatposition(*head, 8,1);
    return 0;
}