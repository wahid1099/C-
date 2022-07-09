// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row=4,col=4;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
 
cout<<"---------------------Matrix is ----"<<endl;
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }


 
 
  return 0;
}