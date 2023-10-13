#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int lb, int up){
    int pivot = a[lb];
    int start = lb;
    int end = up;
    while(start < end){
        while(a[start] <= pivot){
            start++;
        }
        while(a[end] > pivot){
            end--;
        }
        if(start < end){
            swap(a[start], a[end]);
        }
    }
    swap(a[lb], a[end]);
    return end;
}

//when we use recustion we will always use pointer array
void quickSort(int *a, int lb, int up){
    if(lb < up){
        int loc = partition(a, lb, up);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1 , up);
    }
}
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
    quickSort(a, 0, n - 1);
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}   
