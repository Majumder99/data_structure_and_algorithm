#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int a[n + 1];
    for(int i =  0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i =  0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Tell the digit you wanna find" << endl;
    cin >> k;
    for (int i = 0; i < n ; i++){
        if(a[i] == k){
            cout << "Found on " << i << endl;
            return 0;
        }
    }
    cout << "Didn't found at all " << endl;
    return 0;
}