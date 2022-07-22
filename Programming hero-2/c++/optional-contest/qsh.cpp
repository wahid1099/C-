// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int count[26]={0};
char ch[101];
cin>>ch;
for(int i=0;i<strlen(ch);i++){
    count[ch[i]-'a']++;
}

for(int i=0;i<26;i++){
    //cout<<count[i]<<endl;
    if (count[i] %2 !=0){
        cout<<"No"<<endl;
        return 0;
        
    }
}

cout<<"Yes"<<endl;
 
 
  return 0;
}