/*
	Author :- Tanay Kulkarni
	Date   :- 23-5-2021
	Time   :- 16:19:49.508093
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
const int mod = 1e9+7;
map<char,int>cnts;
void testcase(){
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;	
	if(n == 1){
		cout<<min(k,cnts[s[0]]);puts("");
		return;
	}
	int mid = (n+1)/2;
	long long res =0;
	string str = s;
	for(int i = 0;i<=n/2;i++){
		int remaining = mid-1-i;
		res +=  cnts[s[i]] * pow(k,remaining);
		if(n-1-i > i)
			str[n-1-i] = s[i];
	}
	if(str < s)
	res++;
	debug(str);
	cout<<res;
	puts("");
}

int main(){
for(int i = 0;i<26;i++){
	cnts[i+'a'] = i;
}
//debug(cnts);
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
