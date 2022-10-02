#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int x, int low, int high){
    if(low > high){
        return false;
    }else{
        int mid = (low + high) / 2;
        if(a[mid] == x){
            return mid;
        }else if(x > a[mid]){
            return binarySearch(a, x, mid + 1, high);
        }else{
            return binarySearch(a, x, low, mid - 1);
        }
    }
}

int main(){
    int k, n;
    cin >> n;
    int a[n + 1];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Give the digit you wanna find" << endl;
    cin >> k;
    int result = binarySearch(a, k, 0, n-1);
    cout << "Index is : " << result << " Value is : " << a[result] << endl;
    return 0;
}