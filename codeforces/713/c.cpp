/*
	Author :- Tanay Kulkarni
	Date   :- 25-4-2021
	Time   :- 16:08:31.093105
	Name   :- solve.cpp
*/
#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
void testcase(){
	int a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	int n = a+b;
	for(int i = 0;i<(n+1)/2;i++){
		if(s[i] == '?' && s[n-1-i] != '?')
			s[i] = s[n-1-i];
		else if(s[i] != '?' && s[n-1-i] == '?'){
			s[n-1-i] = s[i];
		}
	}
	
	int tmp1 = 0,tmp2 = 0;
	for(int i = 0;i<n;i++){
		if(s[i] == '0')
			tmp1++;
		else if(s[i] == '1')
			tmp2++;
	}
	tmp1 = a-tmp1;
	tmp2 = b-tmp2;
	//above code is sorted
	// 
	char tt  = '1';
	if(tmp1%2 == 0)
		tt= '0';
	for(int i = 0;i<=(n+1)/2;i++){
		if(tmp1 == 0)
			tt = '1';
		else if(tmp2 == 0)
				tt = '0';		
		if(s[i] == '?' && s[n-1-i] == '?' && i<n-1-i){
				s[i] = tt;
				s[n-1-i] = tt;
				if(tt == '1')
					tmp2-=2;
				else
					tmp1-=2;
		}
		else if(s[i] == '?'){
			s[i] = tt;
			if(tt == '1')
					tmp2-=1;
				else
					tmp1-=1;
		}
		else if(s[n-1-i] == '?'){
				s[n-1-i] = tt;
				if(tt == '1')
					tmp2-=1;
				else
					tmp1-=1;
		}
	}
	for(int i = 0;i<=(n+1)/2;i++){
		if(s[i] != s[n-1-i] ){
				cout<<-1<<endl;
				return;
		}
	}
	if(tmp1 != 0|| tmp2 != 0)
		cout<<-1;
	else  
		cout<<s;
	puts("");
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		//cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
