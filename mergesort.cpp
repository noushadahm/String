#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int merge(int ar[], int low, int mid,int high){
     int n1=mid-low+1;
     int n2=high-mid;
     int ar1[n1];
     int ar2[n2];
     for(int i1=0; i1<n1; i1++){
        ar1[i1]=ar[low+i1];	
     }
     for(int j1=0; j1<n1; j1++){
        ar2[j1]=ar[mid+j1+1];	
     }
     int i=0;
     int j=0;
     int k=low;
     while(i<n1&&j<n2){
       if(ar1[i]<ar2[j]){
          ar[k++]=ar1[i++];	
       }else{
          ar[k++]=ar2[j++];
          	
       }	
     }
     if(i<n1){
      while(i<n1){
        ar[k++]=ar1[i++];
        	
      }	
     }else if(j<n2){
       while(j<n2){
        ar[k++]=ar2[j++];	
       }	
     }
     
     
}


void mergesort(int arr[], int low, int high){
      if(low<high){
      
      int mid=(low+high)/2;
      mergesort(arr, low, mid);
      mergesort(arr, mid+1, high);
      merge(arr, low , mid , high);
}
}
int main(){
	
   int arr[]={5,4,3,59,1,87,890};
   mergesort(arr,0,6);
   for(int i=0; i<7; i++){
    cout<<arr[i]<<" ";	
   }	
	
  return 0;
  	
}
