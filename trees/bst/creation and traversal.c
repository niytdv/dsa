#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* right;
    struct node* left;
};
struct node* root=NULL;
struct node* createnode(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* root, int data){
    if(root==NULL){
        root=createnode(data);
    }
    if(data>root->data){
        root->right=insert(root->right, data);
    }
    else if(data<root->data){
        root->left=insert(root->left,data);
    }
    return root;
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}  

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left); 
        preorder(root->right);
    }
}
void postorder(struct node* root){
    if(root!=NULL){ 
        postorder(root->left); 
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    root= insert(root,50);
    insert(root,10);
    insert(root,4);
    insert(root,80);
    insert(root,30);
    insert(root,20);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    return 0;

}