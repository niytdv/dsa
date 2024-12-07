#include <stdio.h>
int main(){
    int arr[]={10,20,30,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key,i,count=0;
    printf("Enter the element to find:");
    scanf("%d",&key);
    for(i=0; i<n; i++){
        if(arr[i]==key){
            count++;;
        }
    }
    printf("The no of element %d is %d",key,count);
    return 0;
}