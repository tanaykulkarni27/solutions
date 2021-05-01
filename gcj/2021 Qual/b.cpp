/*
	Author :- Tanay Kulkarni
	Date   :- 1-5-2021
	Time   :- 17:02:49.732662
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
	int x,y;
	string s;
	cin>>x>>y>>s;
	int n = s.length();
	int st = -1,ed = n;
	while(st<n && s[st+1] == '?')
		st++;
	while(ed>=0 && s[ed-1] == '?')
		ed--;
	
	int cost = 0;
	if(st>-1 && s[st] == '?')
		for(int i = st;i>=0;i--){
			if(s[i+1] == 'J' && s[i] == '?')
				s[i] = 'J';
			else if(s[i] == '?')
				s[i] = 'C';
		}
	if(ed<n && s[ed] == '?')
		for(int i = ed;i<n;i++){
			if(s[i-1] == 'J' && s[i] == '?')
				s[i] = 'J';
			else if(s[i] == '?')
				s[i] = 'C';
		}
	for(int i = 0;i<n;i++){
		if(s[i-1] == 'C'&& s[i] == '?'){
			s[i] = 'C';
		}	
		else if(s[i] == '?')
			s[i] = 'J';
	}
	//debug(s);
	//int ans = 0;
	for(int i =0 ;i+1<n;i++){
		if(s[i] == 'C' && s[i+1] == 'J')
			cost+=x;
		else if(s[i] == 'J' && s[i+1] == 'C')
			cost+=y;
			
	}
	
	cout<<cost;
	puts("");
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
