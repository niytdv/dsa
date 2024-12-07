#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top= NULL;

void push(int data) {//insert at begin
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("stack overflow!!");
        exit(1);
    }

    newnode->data= data;
    newnode->next= NULL;

    newnode->next= top;
    top=newnode;
}

void display() {
    struct node* temp= top;
    if(top== NULL) {
        printf("no data available!\n");
        return;
    }
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void pop() {//delete from begin
    if(top== NULL) {
        printf("no data available!\n");
        return;
    }
    else {
        struct node* temp= top;
        top= top->next;
        free(temp);
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
    return 0;
}