/*
	Author :- Tanay Kulkarni
	Date   :- 3-5-2021
	Time   :- 17:55:35.567659
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
	int n,x;
	cin>>n>>x;
	long long total = 0;
	vector<int>arr(n);
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		total+=arr[i];
	}
	sort(arr.begin(),arr.end());
	if(total == x){
		cout<<"NO\n";
		return;
	}
	total = 0;
	/*int pnt = n-1;
	int pnt2 = 0;*/
	for(int i = 0;i<n;i++){
		total+=arr[i];
		if(total == x){
			swap(arr[i],arr[i+1]);
		}	
	}
	
	total = 0;
	for(int i = 0;i<n;i++){
		total+=arr[i];
		if(total == x){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	//cout<<"YES\n";
	
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
