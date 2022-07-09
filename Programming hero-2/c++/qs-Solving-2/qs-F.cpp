// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n,k;
cin >> n >> k;

int stick[n];
for (int i=0;i<n;i++){
    cin >> stick[i];

}

for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        if (stick[i]>stick[j]){
           swap(stick[i],stick[j]);
        }
       
    }
}
int sum=0;
for (int i=0;i<k;i++){
    sum += stick[i];

}
 cout<<sum;
 
  return 0;
}