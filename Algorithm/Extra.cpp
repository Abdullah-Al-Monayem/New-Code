#include <bits/stdc++.h>

using namespace std;

class MyStack
{
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



void insertAtBottom(MyStack &st,int item)
{
    if (st.isEmpty())
    {
        st.push(item);
    }
    else
    {
        int top = st.pop();
        insertAtBottom(st,item);
        st.push(top);
    }
}
// function to reverse the order of the stack.
void reverse(MyStack &st)
{
    if (!st.isEmpty())
    {
        int top = st.pop();
        reverse(st);
        insertAtBottom(st,top);
    }
}

void printStack(MyStack s)
{
    cout<<"The stack is: ";
    while(!s.isEmpty())
    {
        cout<<s.pop()<< " ";
    }
    cout<<endl;
}



int main()
{
    MyStack st;

    st.push(5);
    st.push(7);
    st.push(9);
    st.push(2);

    printStack(st);

    reverse(st);

    printStack(st);

    cout<<st.isEmpty()<<endl;

    //  printStack(st);

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    printStack(st);

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

//    st.printStack();
    cout<<st.isEmpty()<<endl;

    return 0;
}


