#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr1[5] = {0,0,0,0,0};
    int x = sizeof(arr)/sizeof(int);
    int k = 0;
    for (int i = x - 1 ; i >= 0; i--){
        arr1[k++] = arr[i];
    }
    // cout << arr1[1];
    for (int i = 0; i < x; i++){
        cout << arr1[i];
    }
}