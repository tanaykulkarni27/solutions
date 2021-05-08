/*
	Author :- Tanay Kulkarni
	Date   :- 8-5-2021
	Time   :- 19:09:15.449939
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
	int n;
	cin>>n;
	vector<vector<int>>mat(n,vector<int>(n));
	int ai = 1;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
				mat[i][j] = ai;
				ai++;
		}
	}
	
	for(int i = 0;i+1<n;i+=2){
		for(int j = 0;j+1<n;j+=2){
			swap(mat[i+1][j],mat[i+1][j+1]);
		}
	}
	for(int i = 0;i<n;i+=2){
		for(int j = 0;j<n;j+=2){
			if(i+1<n)
				swap(mat[i][j],mat[i+1][j]);
			else if(i-1 >= 0)
				swap(mat[i][j],mat[i-1][j]);
		}
	}
	// recheking 
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			bool res1 = j+1<n && abs(mat[i][j]-mat[i][j+1]) == 1;
			bool res2 = i+1<n && abs(mat[i][j]-mat[i+1][j]) == 1;
			if(res1 || res2){
				cout<<-1<<endl;
				return;
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++)
			cout<<mat[i][j]<<" ";
		puts("");
	}
	
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
	//	cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
