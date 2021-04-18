/*
	Author :- Tanay Kulkarni
	Date   :- 18-4-2021
	Time   :- 09:21:14.111970
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
	int n,capacity;
	cin>>n>>capacity;
	int weights[n],values[n];
	for(int i = 0;i<n;i++){
		cin>>weights[i]>>values[i];
	}
	int dp[n+1][capacity+1];
	memset(dp,0,sizeof(dp));
	for(int i = 0;i<=n;i++){
		for(int j = 0;j<=capacity;j++){
			if(i == 0 || j == 0)
				dp[i][j] = 0;
			else if(weights[i-1]<=j){
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-weights[i-1]]+values[i-1]);
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout<<dp[n][capacity];
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
// answer is 220
