// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],mx;
    for(int i=0;i<3;i++){
      cin >> a[i];
    }
       
    for(int i=0;i<=3;i++){

      for(int j=i+1;j<3;j++){
         if(a[i]>a[j]){
         int temp = a[i];
         a[i] = a[j];
         a[j]=temp;
      }

      }
      
    }
//  for(int i=0;i<3;i++){
//    cout << a[i];
//  }a[0]==0 && a[1]==0 && a[2]==0

    if(a[0]==0 && a[1]==0 && a[2]==0){

      cout<<a[2];
    }else if(a[0]>a[2]-a[1]){
      cout<<"0";

    }
    else{
      cout<<"-1";
      }
       
 
  return 0;
}