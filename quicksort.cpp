#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void swap(int arr[],int i, int j ){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;	
}
int partition(int ar[], int low, int high){
    int pivot=ar[high];
    int i=low-1;
    for(int j=low; j<high; j++){
      if(ar[j]<=pivot){
      	i++;
        swap(ar,i,j);	
      }	
    }
    swap(ar,i+1,high);
    return i+1;	
}


void quicksort(int arr[], int low, int high){
      if(low<high){
      
      int pi=partition(arr, low ,high); 
      quicksort(arr, low, pi-1);
      quicksort(arr, pi+1, high);
}
}
int main(){
	
   int arr[]={5,40,39,2,1,10,40,83};//input
   quicksort(arr,0,4);
   for(int i=0; i<8; i++){
    cout<<arr[i]<<" ";	
    
   }
   return 0;
}
