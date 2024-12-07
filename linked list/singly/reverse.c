#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void addnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }

}
void reverse(){
    struct node* current=head;
    struct node* before=NULL;
    struct node* after=NULL;
    while(current!=NULL){
        after=current->next;
        current->next=before;
        before=current;
        current=after;

    }
    head=before;
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
    reverse();
    display();
    return 0;
}
