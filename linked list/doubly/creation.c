#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head=NULL;

void addnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        newnode->prev=temp;
        temp->next=newnode;
    }

}
void display(){
    struct node* temp= head;
    while(temp!=NULL){
        printf(" %d",temp->data);
        
        temp= temp->next;
    }
}
int main(){
    addnode(10);
    addnode(20);
    addnode(30);
    addnode(40);
    display();
    return 0;
}
