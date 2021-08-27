#include <bits/stdc++.h>
using namespace  std;

void sumOfSubset(int* a, int sum, int taken, int position) {
    if (position == 6) {
        if (taken == 3) cout << sum << endl;
        return;
    }
    sumOfSubset(a,sum+a[position],taken+1,position+1);
    sumOfSubset(a,sum,taken,position+1);
}
int main() {
    int a[6];
    for (int i = 0; i < 6; i++) cin >> a[i];
    sumOfSubset(a, 0, 0,0);
}
