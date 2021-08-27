#include <bits/stdc++.h>

using namespace std;

class MyStack
{
    public:
    // Create a stack with capacity of 100 elements
    int ara[100];
    int size;

// Initially stack is empty
    int top;

public:

    MyStack()
    {
        top = -1;
        size = 0;
    }
    /* Function declaration to perform push and pop on stack */
    void push(int element)
    {
        top++;
        ara[top] = element;
        size++;
    }
    int  pop()
    {
        if(isEmpty()) return -1;
        int element = ara[top];
        top--;
        size--;
        return element;
    }
    bool isEmpty()
    {
        if(top == -1)
            return  true;
        else
            return false;
    }

};

void printStack(MyStack s){
    cout<<"The stack is: ";
    while(!s.isEmpty()){
        cout<<s.pop()<< " ";
    }
    cout<<endl;
}



int main()
{
    MyStack st1,st2,st3;
     /**
    st1.push(5);
    st1.push(7);
    st1.push(9);
    st1.push(2);
    **/


    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    int h1 = 0, h2 = 0, h3 = 0;


    for(int i = 0; i < n1; i++)
    {    int a;
        cin >> a;
        st1.push(a);
        h1 += st1.ara[i];
    }

    for(int i = 0; i < n2; i++)
    {    int a;
        cin >> a;
        st2.push(a);
        h2 += st3.ara[i];
    }

    for(int i = 0; i < n3; i++)
    {    int a;
        cin >> a;
        st3.push(a);
        h3 += st3.ara[i];
    }
  //  printStack(st1);
  //  printStack(st2);
  //  printStack(st3);

    bool equalHeight = false;
    if(h1 == h2 && h2 == h3)
    {
        equalHeight = true;
    }

     int r1 = 0, r2 = 0, r3 = 0; // Store the indices of which cylinder to remove
    while(!equalHeight)
    {
      //   cout<<"Monayem" <<endl;
        if(h1 >= h2 && h1 >= h3)
        {
            h1 -= st1.ara[r1];
            r1++;
        }
        else if(h2 >= h1 && h2 >= h3)
        {
            h2 -=  st2.ara[r2];;
            r2++;
        }
        else if(h3 >= h1 && h3 >= h2)
        {
            h3 -= st3.ara[r3];
            r3++;
        }
        if((h1 == h2 && h2 == h3) || (h1 == 0 && h2 == 0 && h3 == 0))
        {
            equalHeight = true;
        }
    }
    cout<<h1<<endl;
    cout<<"Monayem" <<endl;
    printStack(st1);
    printStack(st2);
    printStack(st3);
    cout<<h1<<endl;


    return 0;
}


/**

5
3
4
1 1 1 2 3
2 3 4
1 4 1 1
5

***/
