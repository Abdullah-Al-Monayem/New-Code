#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

int n;

struct timing
{

    int start,end;

};

void heapify(timing a[],int n,int i)
{

    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if( left<n  && a[left].end>a[largest].end )
    {

        largest=left;

    }

    if( right<n  && a[right].end>a[largest].end )
    {

        largest=right;

    }

    if(largest!=i)
    {

        timing temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;

        heapify(a,n,largest);

    }

}

void sort(timing a[])
{

    //to bring the smallest element's at the front side of the array

    for(int i=n/2-1; i>=0; i--)
    {

        heapify(a,n,i);

        //min Heap

    }

    for(int i=n-1; i>=0; i--)
    {

        //swap between the first indexed element(the smallest of the array)
        // and the recent last element of the array
        timing temp=a[i];
        a[i]=a[0];
        a[0]=temp;

        //again heapify till 0 to ith index so that we can bring the largest
        //element at the front of the array

        heapify(a,i,0);



    }

    for(int i=0; i<n; i++)
    {

        cout<<a[i].start<<" "<<a[i].end<<endl;

    }

}



void display( timing a[],int n)
{
    printf("Start:");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i].start);
    }
    printf("\nFinish:");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i].end);
    }
    printf("\n");
}


void input( timing a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Start: ");
        scanf("%d",&a[i].start);
        printf("End: ");
        scanf("%d",&a[i].end);
    }
}


void input_1( timing a[],int n)
{
    for(int i=0; i<n; i++)
    {
       /// cin>>a[i].start>>a[i].end;

       a[i].start=rand()%20+1;
       a[i].end=rand()%20+1;
    }
}
/**
int main()
{
    int n;
    printf("Enter total number of activities: ");
    scanf("%d",&n);
    struct timing a[n];
    input(a,n);
    printf("Before sort\n");
    display(a,n);
    printf("\nAfter sorting finish time\n");
    sort_activity(a,n);
    display(a,n);
    int m=0;
    printf("\nActivites are: ");
    printf("%d ",1);
    for(int i=1; i<n; i++)
    {
        if(a[i].start>=a[m].end)
        {
            printf("%d ",i+1);
            m=i;
        }
    }


    return 0;
}


**/


int main()
{


    scanf("%d",&n);

    timing a[n];

    input_1(a,n);
    /**
    for(int i=0; i<n; i++)
    {

        cin>>a[i].start>>a[i].end;

    }


      **/

      display(a,n);
     sort(a);

}

