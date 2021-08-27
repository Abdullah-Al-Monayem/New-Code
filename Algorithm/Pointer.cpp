
#include<iostream>
using namespace std;

void input(int &y){

 y=12;
}

int main(){
    int x = 10;
    input(x);
    cout << x;

    return 0;
}
