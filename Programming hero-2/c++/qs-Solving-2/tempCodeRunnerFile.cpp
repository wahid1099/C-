// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
char ch[27];
int count[26]={0};
cin>>ch;
for(int i=0;i<strlen(ch);i++){
    count[ch[i]-'a']++;
}
 bool isRepeat=false;
 for(int i=0;i<strlen(ch);i++){
    //cout<<count[i];
    if(count[i]>1){
        isRepeat=true;
    }
 }
 if(isRepeat){
    cout<<"no";
 }else{
    cout<<"yes";
 }
 
  return 0;
}