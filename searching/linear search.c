#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key,i;
    printf("Enter the element to find:");
    scanf("%d",&key);
    for(i=0; i<n; i++){
        if(arr[i]==key){
            break;
        }
    }
    printf("The element %d is at index %d",key,i);
    return 0;
}