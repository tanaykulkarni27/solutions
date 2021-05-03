/*
	Author :- Tanay Kulkarni
	Date   :- 3-5-2021
	Time   :- 18:27:28.466821
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
vector<int>pres(1229);
int seach(int n){
	int l = 0;
	int r = 1228;
	//int ans = -1;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(pres[mid] == n ){
			return mid;
		}
		if(pres[mid]>n)
			r = mid-1;
		else{
			l = mid+1;
		}
	}
return -1;
}
int search(int n){
	int l = 0;
	int r = 1228;
	int ans = -1;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(pres[mid] > n ){
			ans = mid;
			r = mid-1;
			//break;
		}
		else{
			l = mid+1;
		}
	}
return ans;
}
void testcase(){
	int n;
	cin>>n;
	int mat[n][n];
	memset(mat,-1,sizeof(mat));
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-1;j++){
			mat[i][j] = 4;
		}
	}
	int sm = (n-1)*4;
	int gp = -1;
	int xl = -1;
	for(int i = 0;i<1229;i++){
		if(pres[i]>sm && seach(pres[i]-sm) == -1){
			gp = pres[i]-sm;
			break;
		}
	}
	sm = (n-1)*gp;
	xl = -1;
	for(int i = 0;i<1229;i++){
		if(pres[i]>sm && seach(pres[i]-sm) == -1){
			 xl = pres[i]-sm;
			break;
		}
	}
	for(int i = 0;i<n-1;i++){
		mat[n-1][i] = gp;
		mat[i][n-1] = gp;
	}
	mat[n-1][n-1] = xl;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			cout<<mat[i][j]<<" ";
		}
		puts("");
	}
	
}
int main(){
	int pnt = 0;
	for(int i = 2;i<=10000;i++){
		int j = 2;
		bool ok = 1;
		while(j<=(i+2-1)/2){
			if(i%j == 0){
				//pres[pnt] = i;
				ok = 0;
				break;
			}
			j++;
		}
		if(ok){
			if(i == 4511)
				cout<<"YEESADASDASDADA";
			pres[pnt] = i;
			pnt++;
		}
	}
	
	int t;
	cin>>t;
	for(int i = 1;i<=t;i++){
			//cout<<"Case #"<<i<<": ";
			testcase();
	}
	return 0;
}
