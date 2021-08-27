#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n=7;

  void heapify(long a[],int n,int i){
        
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if( left<n  && a[left]<a[largest] ){
            
            largest=left;
            
        }
        
        if( right<n  && a[right]<a[largest] ){
            
            largest=right;
            
        }
        
        if(largest!=i){
            
            long temp=a[i];
            a[i]=a[largest];
            a[largest]=temp;
            
            heapify(a,n,largest);
            
        }
        
    }
    
     void sort(long a[]){
        
    //to bring the smallest element's at the front side of the array
        
        for(int i=n/2-1;i>=0;i--){
            
            heapify(a,n,i);
         
         //min Heap
            
        }
        
        for(int i=n-1;i>=0;i--){
            
     //swap between the first indexed element(the smallest of the array)
    // and the recent last element of the array      
            long temp=a[i]; 
            a[i]=a[0];
            a[0]=temp;
       
         //again heapify till 0 to ith index so that we can bring the largest
         //element at the front of the array
         
         heapify(a,i,0);
            
       
            
        }
        
        for(int i=0;i<n;i++){
            
            cout<<a[i]<<" ";
            
        }
        
    }

int main() {
    
    long a[]={ 41,9,27,63,49,108,78 };
    
    sort(a);
    
}