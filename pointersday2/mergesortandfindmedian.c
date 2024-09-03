#include<stdio.h>
void mergeAndSort(int *arr1,int size1,int *arr2,int size2,int *mergedarr){
    int i=0,j=0,k=0;

  while(i<size1 && j<size2){
    if(arr1[i]<arr2[j]){
        mergedarr[k++]=arr1[i++];
    }
    else{
        mergedarr[k++]=arr2[j++];
    }

  }
  while(i<size1){
    mergedarr[k++]=arr1[i++];
  }
  while(j<size2){
    mergedarr[k++]=arr2[j++];
  }
}
double findMedian(int *mergedarr,int totalsize){
    if(totalsize%2==0){
        return (mergedarr[totalsize/2-1]+mergedarr[totalsize/2])/2.0;
    }
    else{
        return mergedarr[totalsize/2];

    }
}

int main(){
    int size1,size2,i;
    printf("enter the  size of first array");
    scanf("%d",&size1);
    int arr1[size1];
    printf("enter %d integers elemets",size1);
    for(i=0;i<size1;i++){
    scanf("%d",&arr1[i]);
    }

    printf("enter the size of second array");
    scanf("%d",&size2);
    int arr2[size2];
    printf(" enter %d integers elemets",size2);
    for(i=0;i<size2;i++){
        scanf(" %d",&arr2[i]);
    }
    int totalsize=size1+size2;
    int mergedarr[totalsize];
    mergeAndSort(arr1,size1,arr2,size2,mergedarr);

    printf("after sorting the array is\n");
    for(i=0;i<totalsize;i++){
        printf("%d",mergedarr[i]);
    }
    printf("\n");

    double median=findMedian(mergedarr,totalsize);
    printf("median =%.1f",median);
}