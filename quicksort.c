#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
  int c;
  c=*a;
  *a=*b;
  *b=c;
}



int partition (int arr[],int l,int u) 
{ 
  int pivot = arr[u];
  int i=(l-1); 
  
	for(int j=l;j<=u-1;j++) 
	  { 
	    if (arr[j] < pivot) 
	    { 
	      swap(&arr[++i], &arr[j]); 
	    } 
	  } 
	swap(&arr[i + 1], &arr[u]); 
	return (i + 1); 
} 

void quicksort(int arr[],int l,int u){
  if(l<u){
    int p;
    p=partition(arr,l,u);
    quicksort(arr,l,p-1);
    quicksort(arr,p+1,u);
  }
 
}

void printArray(int arr[], int size) 
{ 
  int i; 
  for (i=0; i < size; i++) 
    printf("%d ", arr[i]); 
} 


int main(){
  int lb;
  int ub;
  int n;
  printf("Enter the array size :");
  scanf("%d",&n);
  printf("Enter the array elements :");
  int arr[n];
  lb=0;ub=n-1;
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  quicksort(arr,lb,ub);
  printArray(arr,n);
  

}
  
