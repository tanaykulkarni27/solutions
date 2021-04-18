/*
	Author :- Tanay Kulkarni
	Date   :- 18-4-2021
	Time   :- 09:46:20.896152
	Name   :- solve.cpp 
*/
#include<bits/stdc++.h>
using namespace std;
void debug(string j){
cout<<"| Value : "<<j<<" |\n";
}
void debug(int j){
cout<<"| Value : "<<j<<" |\n";
}
void debug(int i,string j){
cout<<"Iteration "<<i<<": "<<j<<"\n";
}
void debug(int i,int j){
cout<<"Iteration "<<i<<": "<<j<<"\n";
}
void testcase(){
	int n,k;
	cin>>n>>k;
	int dp[n+1];
	memset(dp,10000,sizeof(dp));
	dp[0] = 0;
	for(int i = 0;i<=n;i++){
		for(int j = 1;j<=k;j++){
			if(i-j>=0)
			dp[i] = min(dp[i],dp[i-j]+1);
		}
	}
	cout<<dp[n];
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
