/*
	Author :- Tanay Kulkarni
	Date   :- 30-5-2021
	Time   :- 15:27:37.312583
	Name   :- solve.cpp
*/
#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __printss(bool x) {cout << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
void testcase(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string s1 = "2020";
	if(s.substr(n-4,4) == s1 || s.substr(0,4) == s1){
		cout<<"YES\n";
		return;
	}
	for(int len = 1;len<=3;len++){
		string fs = s1.substr(0,len);
		string ls = s1.substr(len,4-len);
		if(fs == s.substr(0,len)){
			int tmp = 4-len;
			if(ls == s.substr(n-tmp,tmp)){
				cout<<"YES\n";
				goto done;
			}
		}
		//debug(fs,s);
	}
	cout<<"NO\n";
	//puts("");
	done:;
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		// cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
