#include <stdio.h>

int binarysearch(int arr[],int x, int l, int r){
    while(l<=r){
        int m=l+(r-l)/2;
        
        if(arr[m]==x){
            return m;
        }
        if(arr[m]<x){
            return binarysearch(arr,x,m+1,r);
        }
        else{
            return binarysearch(arr,x,l,m-1);
        }
    }
    return -1;
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter the value of a[%d]",i);
        scanf("%d",&arr[i]);
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter the value to search");
    scanf("%d",&x);
    int result=binarysearch(arr,x,0,n-1);
    (result==-1)?printf("Element not found"):printf("Element found at index %d",result);
    return 0;
}