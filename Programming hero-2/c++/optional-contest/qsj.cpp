// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x,y,count=0;
    cin >>n;
     

     for(int i=0;i<n;i++)
     {
        cin >>x >> y;
        for(int j=x;j<=y;j++){
            count++;
        }

     }

 cout<<count<<endl;
 
  return 0;
}