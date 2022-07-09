// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 char o[51],e[51];
 char n[101];
 
 cin >> o;
 cin >> e;
 int len=strlen(o)+strlen(e);
 int a_idx = 0, b_idx = 0;
 int i=0;
 for(; i<len;i++){
    if(i%2==0){
       // cout << "Hi"<< " " <<i<< endl;
        n[i]=o[a_idx++];
    }else{
        //cout << "Hi2"<< " " <<i<< endl;
        n[i]=e[b_idx++];
    }
 }
 n[i]='\0';
 cout<<n;




  return 0;
}
