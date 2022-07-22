// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int a, b;
cin >> a >> b;

if(a>b && b!=1 ){
    cout << "Alice";
}
else if(a==b){
    cout << "Draw";

}else if(a<b && a==1){
     cout << "Alice";
}
else{
    cout << "Bob";
}
 
 
  return 0;
}