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
struct node* search(struct node* root, int key){
    if(root==NULL||root->data==key){
        return root;
    }
    if(root->data<key){
        return search(root->left,key);
    }
    else if(root->data>key){
        return search(root->right,key); 
    }
}