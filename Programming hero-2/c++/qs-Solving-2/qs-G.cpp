// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
 cin >> n;
 int distances[n];
 for (int i = 0; i < n; i++){
    cin >>distances[i];

 }

 int mn,mx;
 mn=distances[0];
 mx=distances[0];

 for (int i = 0;i<n;i++){
    mn =min(mn,distances[i]);
    mx =max(mx,distances[i]);
 }
 cout<<mx-mn;
 
  return 0;
}