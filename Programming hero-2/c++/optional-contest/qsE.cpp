// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int n;
cin >> n;
char  ch[n];

cin >> ch;
int max=0,x=0;

for(int i=0;i<n;i++)
{
    if(ch[i]=='I'){
        x++;//2
        if(max<x){
            max=x;
        }
    }else if(ch[i]=='D'){
        x--;//1
    }
}

cout <<max <<endl;
 
 
  return 0;
}