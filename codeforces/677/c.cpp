/*
	* Author :- Tanay Kulkarni
	* Date   :- 8-6-2021
	* Time   :- 19:06:20.049228
	* Name   :- solve.cpp
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
	int n;
	cin>>n;
	std::vector<int>arr(n);
	for(int i = 0;i<n;i++)
		cin>>arr[i];
	int max_index = 0;
	for(int i = 0;i<n;i++){
		if(arr[max_index] <= arr[i] && i-1 > -1 && arr[i-1] < arr[i])
			max_index = i;
		else if(arr[max_index] <= arr[i] && i+1 < n && arr[i+1] < arr[i])
			max_index = i;
	}
	int tmp = arr[max_index];
	sort(arr.begin(), arr.end());
	if(arr[0] == tmp){
		cout<<"-1\n";
		return;
	}  
	cout<<max_index+1;
	puts("");
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
