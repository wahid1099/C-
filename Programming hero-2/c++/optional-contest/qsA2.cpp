#include <bits/stdc++.h> 
using namespace std; 

#define size(arr) sizeof(arr)/sizeof(arr[0]);


int main(){

    int a[3]
    for(int i = 0; i <3;i++){
        cin >> a[i];
    }
    int n = size(a);
    sort((a), a + n);
    for(int i = 0; i < n; i++){
        cout << a[i]<<endl;
    }


    return 0;

}
