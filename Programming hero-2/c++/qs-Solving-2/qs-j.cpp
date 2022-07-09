// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char o[51],e[51];
 char n[102];
 cin >> o;
 cin >> e;
  int len=strlen(o)+strlen(e);
  int k=0;


 for(int i=0,j=1; i<len;i+=2,j+=2,k++){
    n[i]=o[k];
    n[j]=e[k];
    
 }
  //n[i] = '\0';
 cout<<n;




  return 0;
}
