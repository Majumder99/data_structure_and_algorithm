#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,  temp;
    cin >> n;
    int a[n + 1];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // insertionsort
    for (int i = 1 ; i < n ; i++){
        temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}