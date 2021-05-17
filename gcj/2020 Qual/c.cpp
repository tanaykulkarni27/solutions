/*
	Author :- Tanay Kulkarni
	Date   :- 17-5-2021
	Time   :- 16:07:02.285347
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
bool ck(pair<int,int>a,pair<int,int>b){
	if(a.second >= b.second)
		return false;
	return true;
//	return abs(a.second-a.first)<=abs(b.second-b.first);
}
bool cc(pair<int,int>a,pair<int,int>b){
	if(a.first>b.first)
		return false;
	else if(a.first == b.first && b.second < a.second)
		return false;
	return true;
}

void testcase(){
	int n;
	cin>>n;
	vector<vector<int>>arr(n,vector<int>(3));
	for(int i = 0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1];
		arr[i][2] = i;
	}
	sort(arr.begin(),arr.end());	
	bool ok = 1;
	string res(n,'.');
	int c = 0;
	int j = 0;
	for(int i = 0;i<n;i++){
		int start,end;
		start = arr[i][0];
		end = arr[i][1];
		if(j <= start ){
			res[arr[i][2]] = 'J';
			j = end;
		}
		else if(c <= start){
			res[arr[i][2]] = 'C';
			c = end;
		}
		
		else{
			ok = 0;
		}
	}
	if(ok)
		cout<<res;
	else
		cout<<"IMPOSSIBLE";
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
