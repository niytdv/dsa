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
void deleteatbegin(){
    struct node* temp= head;
    head=temp->next;
    free(temp);
}
void deleteatlast(){
    struct node* tail=head;
    struct node* temp= head->next;
    while(temp->next!=NULL){
        tail=tail->next;
        temp=temp->next;
    }
    free(temp);
    tail->next=NULL;

}
void deleteinbtw(int index){
    struct node* tail=head;
    struct node* temp=head->next;
    for(int i=1;i<index-1;i++){
        tail=tail->next;
        temp=temp->next;
    }
    tail->next=temp->next;
    free(temp);
}
void deletenode(int node){
    struct node* tail=head;
    struct node* temp=head->next;
    while(temp->data!=node){
        tail=tail->next;
        temp=temp->next;
    }
    tail->next=temp->next;
    free(temp);
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
    addnode(50);
    addnode(60);
    addnode(70);
    display();
    deleteatbegin();
    display();
    deleteatlast();
    display();
    deleteinbtw(3);
    display();
    deletenode(30);
    display();
    return 0;
}
