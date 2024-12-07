#include <stdio.h>
void selectionsort(int arr[],int n){
    int i,j,mini,temp;
    for(i=0;i<n-1;i++){
        mini=i;
        for(j=i+1;j<n;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int arr[5];
    printf("Enter the elements of an array");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,5);
    printf("Sorted array:");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}
