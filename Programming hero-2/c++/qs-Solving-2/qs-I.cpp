// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    char a[11],b[11],c[11];
    bool isChained = false;

    cin >> a>>b>>c;
    int lenA=strlen(a);
    int lenB=strlen(b);
    //  cout<<a[lenA-1]<<endl;
    //  cout<<b[0]<<endl;
    //  cout<<b[lenB-1]<<endl;
    //  cout<<c[0];
    if(a[lenA-1] == b[0] && b[lenB-1] == c[0]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

 
 

 
 
  return 0;
}