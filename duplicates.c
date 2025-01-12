#include<stdio.h>
int main(){
    int num,i,j,temp,count=1,count_=1;
    printf("Enter the number of terms in the array:");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++){
        printf("Enter the number at position %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nSorted array is:\n");
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
    printf("\n");
    for(i=0;i<num;i++){
        if(arr[i]==arr[i+1]){
            count++;
            count_++;
            if(count==2){
                printf("\nThe number %d has been repeated.",arr[i]);
                i+=count;
                count=1;
            }
        }
    }
    if(count_==1){
        printf("\nNone of the numbers are repeated.");
    }
}