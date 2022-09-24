#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int k, val;
    cin >> k >> val;
    // cout << k << val;
    int x = sizeof(a) / sizeof(int);
    // cout << x;
    for (int i = 0 ; i < x; i++ ){
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = x - 1 ; i >= k; i-- ){
        a[i + 1] = a[i];
    }
    a[k] = val;
     x = sizeof(a) / sizeof(a[0]);
    //  cout << x;
     for (int i = 0 ; i <= x; i++ ){
         cout << a[i] << " ";
     }
    
}