/*
	Author :- Tanay Kulkarni
	Date   :- 14-4-2021
	Time   :- 15:39:13.690091
	Name   :- number_theory.cpp 
*/
#include<bits/stdc++.h>
using namespace std;

void test_case(){
	int n,c;
	cin>>n>>c;
	string s;
	cin>>s;
	int current_score = 0;
	for(int i = 0;i<n/2;i++){
		if(s[i] != s[n-i-1])
			current_score++;
	}
	cout<<abs(current_score-c);
	puts("");
}
int main(){
	int t;
	cin>>t;
	for(int i = 1;i<=t;i++){
			cout<<"Case #"<<i<<": ";
			test_case();
	}
	return 0;
}
// g++ -std=c++17 -Wshadow -Wall -o "%e" "%f" -g  -fsanitize=address  -fsanitize=undefined  -D_GLIBCXX_DEBUG
