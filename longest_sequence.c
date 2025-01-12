#include<stdio.h>
int main(){
    int num,i,j,temp,count=1,lcount=1;
    printf("Enter the number of elements in the array:");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++){
        printf("Enter the element at position %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe sorted array is:\n");
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("%d ",arr[i]);
    }
    for(i=0;i<num;i++){
        if(arr[i+1]-arr[i]==0){
            continue;
        }
        if(arr[i+1]-arr[i]==1){
            count++;
        }
        else{
            if(count>lcount){
                lcount=count;
            }
            count=1;
        }
    }
    printf("\n\nLength of the longest consecutive secuence is %d.",lcount);
    return 0;
}