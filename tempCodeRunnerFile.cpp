for (int i = x -1 ; i >= k; i-- ){
        a[i + 1] = a[i];
    }
    a[k] = val;
    for (int i = 0 ; i < x; i++ ){
        cout << a[i] << " ";
    }