 // #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
  
 char s[200001];
 cin>>s;
 bool ok = false;
 int count=0;

 for(int i=0;i<strlen(s);i++){
    if(s[i]=='A'){
        ok = true;
    }
    if (ok){
        count++;
        if(s[i]=='Z'){
            ok = false;
        }
    }
 }

  

  cout<<count<<endl;
  
   return 0;
 }