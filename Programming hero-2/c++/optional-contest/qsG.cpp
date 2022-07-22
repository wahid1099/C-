#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int a,b,x;
    cin>>a>>b>>x;
    long long int count = 0;

     count = b / x - a / x;
    // cout<<count<<" is the count ";
    if (a % x == 0) count++;
    cout << count << endl;
 
    // if(b<a){
    //     cout<<"0"<<endl;
    // }
    // count = b / x - a / x;
    // if(a % x == 0)
    // {
    //     count++;
    // }
    // cout<<count<<endl;
return 0;
}
