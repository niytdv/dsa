#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front= NULL;//head
struct node* rear= NULL;//tail

void enqueue(int data){//insert at end (the usual ll insertion)
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

    if(front== NULL && rear== NULL) {
        front= rear= newnode;
    }
    else{
        rear->next= newnode;
        rear=newnode;
    }
}

void dequeue() {//delete from begin
    struct node* temp= front;
    front= front->next;
    free(temp);
}

void display() {
    struct node* temp= front;
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    dequeue();
    dequeue();
    display();
    enqueue(7);
    display();
}