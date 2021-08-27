#include <bits/stdc++.h>

using namespace std;

int n;

struct timing{
    
  int start,end;  
    
};

void heapify(timing a[],int n,int i){
        
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if( left<n  && a[left].end<a[largest].end ){
            
            largest=left;
            
        }
        
        if( right<n  && a[right].end<a[largest].end ){
            
            largest=right;
            
        }
        
        if(largest!=i){
            
            timing temp=a[i];
            a[i]=a[largest];
            a[largest]=temp;
            
            heapify(a,n,largest);
            
        }
        
    }
    
     void sort(timing a[]){
        
    //to bring the smallest element's at the front side of the array
        
        for(int i=n/2-1;i>=0;i--){
            
            heapify(a,n,i);
         
         //min Heap
            
        }
        
        for(int i=n-1;i>=0;i--){
            
     //swap between the first indexed element(the smallest of the array)
    // and the recent last element of the array      
            timing temp=a[i]; 
            a[i]=a[0];
            a[0]=temp;
       
         //again heapify till 0 to ith index so that we can bring the largest
         //element at the front of the array
         
         heapify(a,i,0);
            
       
            
        }
        
        for(int i=0;i<n;i++){
            
            cout<<a[i].start<<" "<<a[i].end<<endl;
            
        }
        
    }
    
    
    int main(){
        
        scanf("%d",&n);
        
        timing a[n];
        
        for(int i=0;i<n;i++){
            
            cin>>a[i].start>>a[i].end;
            
        }
        
        sort(a);
        
    }
    