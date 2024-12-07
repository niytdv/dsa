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
void insertatbegin(int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    newnode->prev=NULL;
    head->prev=NULL;
    head=newnode;

}
void insertafternode(int node, int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    struct node* temp=head;
    while(temp->data!=node){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next =newnode;

}
void insertinbtw(int x, int index){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    struct node* temp=head;
    if(head==NULL){
        return;
    }
    if(index==0){
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    for(int i=1;i<index;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    newnode->prev=temp;
    temp->next =newnode;

}
void display(){
    struct node* temp= head;
    while(temp!=NULL){
        printf(" %d",temp->data);
        
        temp= temp->next;
    }
    printf("\n");
}
int main(){
    addnode(10);
    addnode(20);
    addnode(30);
    addnode(40);
    display();
    insertatbegin(50);
    display();
    insertafternode(10,60);
    display();
    insertinbtw(70,3);
    display();
    return 0;
}
