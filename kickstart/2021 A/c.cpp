/*
	Author :- Tanay Kulkarni
	Date   :- 23-4-2021
	Time   :- 15:17:51.565614
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
vector<int>pre(1);
int sz = 1;
const int mx = 1e18;
int search(int target){
		int r = sz-1;
		int l = 0;
		int ans = -1;
		while(l<=r){
			int mid = l+(r-l)/2;
			if(pre[mid]*pre[mid] <= target){
				ans = mid;
				l = mid+1;
			}
			else{
				r = mid-1;
			}
		}
		return ans;
}
void testcase(){
	long long n;
	long long ans = 0;
	cin>>n;
	for(int i = 0;i+1<sz;i++){
		if((pre[i]*pre[i+1])>n)
			break;
		ans = pre[i]*pre[i+1];
	}
	cout<<ans;
	puts("");
}
int main(){
pre[0] = 2;
for(int i = 3;i<=32000;i++){
	bool ok = 1;
	for(int j = 2;j<i;j++){
		if(i%j == 0){
			ok = 0;
			break;
		}
	}
	if(ok){
		pre.push_back(i);
		sz++;
	}
				
}
int t;
cin>>t;

for(int i = 1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
