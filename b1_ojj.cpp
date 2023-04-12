#include <bits/stdc++.h>
#include <string> 
using namespace std;

void in_thuong(string &s){
	for(int i=0; i<s.size() ; i++)
	   if(s[i]>=65 && s[i]<=90) 
	       s[i] += 32; 
} 

int lama(char c){
	switch(c){
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default: return 0; 
	} 
} 
void doi_so(string s){
	int tong=0;
	for(int i=1; i<=s.size(); i++){
		if(lama(s[i-1])>=lama(s[i]))
		    tong += lama(s[i-1]);
		else
		    tong -= lama(s[i-1]); 
	}
	cout<<tong<<endl; 
}

int main(){
	string s;
	while (getline(cin, s))
	doi_so(s); 
}
