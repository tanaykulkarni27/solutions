/*
	Author :- Tanay Kulkarni
	Date   :- 26-4-2021
	Time   :- 13:58:03.727072
	Name   :- a.cpp
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include <vector> 
#include<string>
using namespace std;
#define FOR(start,end) for(int i=start;i<end;i++)
#define lli long long int 
#define read(a) cin>>a;
#define readr(b,n) for(lli i=0;i<n;i++){cin>>b[i];}
#define printarr(arr,n) FOR(0,n){cout<<arr[i]<<" "; }cout<<endl;
const int MOD = 1000000007;
lli gcd(lli a,lli b){
	if(b == 0)return a;
	return gcd(b,a%b);
}
lli dj_sum(lli n){
	lli k = 0;
	string s = to_string(n);
	for(auto i : s)
		k+=(lli)(i)-(lli)'0';
 
	return k;
}
void solve(){
	lli n;
	read(n)
	lli k = 0,ans = 0;
	lli temp = gcd(n,dj_sum(n));
	while(temp>1 == false){
		n++;
		temp = gcd(n,dj_sum(n));
	}
	cout<<n<<endl;
}
// End Area to write solution
int main(){
	lli t;
	read(t)
	for (int i = 0; i < t; ++i)
		solve();
 
	return 0;
}
