/*
	Author :- Tanay Kulkarni
	Date   :- 18-4-2021
	Time   :- 09:13:23.962674
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
/// coin change minimum
void testcase(){
	int n,amount;
	cin>>n>>amount;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int minimum_coins[amount+1];
	for(int i = 0;i<=amount;i++){
		minimum_coins[i] = INT_MAX;
	}
	minimum_coins[0] = 0;
	for(int i = 0;i<=amount;i++){
		for(int x : arr){
			if(i-x>=0)
				minimum_coins[i] = min(minimum_coins[i],minimum_coins[i-x]+1);
		}
	}
	cout<<minimum_coins[amount];
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
