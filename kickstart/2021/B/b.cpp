/*
	Author :- Tanay Kulkarni
	Date   :- 23-4-2021
	Time   :- 14:38:09.606046
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
int get_max(vector<int>& arr,int n){
		int ans = 0;
		for(int i = 1;i<n;){
			int j = i;
			int gap = arr[i]-arr[i-1];
			int index = -1;
			int num = -1;
			int cnt = 0;
			while(j<n && (arr[j]-arr[j-1] == gap || index == -1)){
					if(arr[j]-arr[j-1] != gap){
							index = j;
							num = arr[j];
							arr[j] = arr[j-1]+gap;
						}
					if(arr[j]-arr[j-1] == gap){
						cnt++;
						j++;
					}
					else{
						break;
					}
			}
			ans = max(cnt+1, ans);
			if(index != -1){
				arr[index] = num;
				j = index;
			}
			i = max(i+1,j);
	}
	return ans;
}
void testcase(){
	int n;
	cin>>n;
	vector<int>left(n);
	vector<int>right(n);
	for(int i = 0;i<n;i++){
		cin>>left[i];
		right[i] = left[i];
	}
	reverse(right.begin(),right.end());
	int ans = 1;
	
	ans = max(ans,get_max(left,n));
	ans = max(ans,get_max(right,n));
	cout<<ans;
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
