// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    cin >> h >> w;
    int pic[h][w];

    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            cin >>pic[i][j];
        }
    }
 
   for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            cout <<pic[i][j];
        }
    }
 

 
 
  return 0;
}