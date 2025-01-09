#include<stdio.h>
int main(){
  int num, count;
  printf("Enter the no. of elements:");
  scanf("%d",&num);
  int arr[num];
  for(int i=0;i<num;i++){
    printf("Enter the element at position %d:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Array in ascending order is:\n");
  for(int i=0;i<num;i++){
    for(int j=i+1;j<num;j++){
      if(arr[i]>arr[j]){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
      else{
        continue;
      }
    }
    printf("%d ",arr[i]);
  }
  for(int i=0;i<num;){
    count=0;
    for(int j=0;j<num;j++){
      if(arr[i]==arr[j]){
        count++;
      }
    }
    printf("\nThe element %d has appeared %d time(s).",arr[i],count);
    i+=count;
  }
  return 0;
}

