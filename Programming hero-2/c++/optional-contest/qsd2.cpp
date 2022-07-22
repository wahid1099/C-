#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i <s.length(); i++){
        if(s[i] == 'A'){
            break;
        }
        cnt++;
    }
    for(int j=s.length()-1; j >= 0; j--){
        if(s[j] == 'Z'){
            break;
        }
        else{
            cnt++;
        }
    }
    cout << s.size() -  cnt << endl;
}
