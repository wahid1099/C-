// #include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	char S[101];
	cin >> S;
	bool istrue=false;
	for(int i =0 ;i<=strlen(S);i++){
		if(isupper(S[i])){
			istrue=true;
		}
		
	}
	if(istrue){
		cout<<"No";
	}else{
		cout<<"Yes";
	}
	
	
	return 0;
}
