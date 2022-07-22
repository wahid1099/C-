#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, l;
    cin>>n>>l;
 
    string s[n];
    for(int i=0; i<n; i++) {
        cin>>s[i];
    }
    // for(int i=0; i<n; i++) {
    //    cout<<"this is "<<s[i]<<endl;
    // }
    sort(s, s+n);
    for(int i=0; i<n; i++) {
        cout<<s[i];
    }
}
