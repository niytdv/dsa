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
int search(int key){
    int i=0;
    struct node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return i;
        }
        temp=temp->next;
        i++;
    }
    return -1;
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
    int key;
    printf("enter element to search");
    scanf("%d",&key);
    int result=search(key);
    (result==-1)?printf("Elent not found"):printf("Found at index: %d",result);
    return 0;
}
