/*
	Author :- Tanay Kulkarni
	Date   :- 1-5-2021
	Time   :- 09:58:57.964278
	Name   :- a.cpp
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
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b)
		swap(a,b);
	if(a == b){
		cout<<"YES\n";
		return;
	}
	else if(c == 0){
		cout<<"NO\n";
		return;
	}
	if(a == 1 || b == 1){
		if(b-a > c)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		return;
	}
	int tmp = ((b-a)+a-1)/a;
	if(tmp > c)
		cout<<"NO";
	else
		cout<<"YES";
	puts("");
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
//		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
