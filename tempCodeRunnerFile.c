#include<stdio.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void selectionsort(int arr[],int n){
    int j,min_idx,temp;
    for(int i=0;i<n-1;i++){
        min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[min_idx]){
                min_idx=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
}
int main(){
    int arr[10];
    int n;
    printf("ENter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printArray(arr,n);
    selectionsort(arr,n);
    printArray(arr,n);
}