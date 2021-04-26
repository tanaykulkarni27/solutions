/*
	Author :- Tanay Kulkarni
	Date   :- 26-4-2021
	Time   :- 13:58:03.727072
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
int search(vector<int>& arr,int n,int target){
	int ans = -1;
	int l = 0;
	int r = n-1;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(arr[mid]<=target){
				ans = mid;
				l = mid+1;
		}
		else{
			r= mid-1;
		}
		//debug(mid);
	}
	return ans;
}
void testcase(){
	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int size = n,ans = 0;
	while(size>0){
		int remaining  = k;
		while(remaining-arr[size-1]>=0){
			remaining-=arr[size-1];
			arr.erase(arr.begin()+size-1);
			size--;
		}
		int tmp = search(arr,size,remaining);
		while(size>0 && tmp!=-1 && remaining - arr[tmp] >=0 ){
			remaining-=arr[tmp];
			arr.erase(arr.begin()+tmp);
			size--;
			tmp = search(arr,size,remaining);
		}
		ans++;
		
	}
	cout<<ans;
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



