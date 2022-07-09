// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 
char ch[100000];
int count[26]={0};
cin>>ch;
for(int i=0;i<strlen(ch);i++){
    count[ch[i]-'a']++;
}

    
char s;
 
 for(int i=0;i<26;i++){
    
    if(count[i]==0) {
        
        s=i+'a';
        cout << s<<endl;
        return 0;
    }
 }
    cout<<"None"<<endl;

 
  return 0;
}