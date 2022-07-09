// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cout << "Enter row and column You want : ";
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
 int sum=0;
cout<<"---------------------Sum of diagonal is ----"<<endl;
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
             sum+=a[i][j]; 
            }
           // cout<< a[i][j]<<" ";
        }
       // cout<<endl;
    }
 cout<<"sum is "<<sum<<endl;

 
 
  return 0;
}