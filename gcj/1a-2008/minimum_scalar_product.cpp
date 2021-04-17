/*
	Author :- Tanay Kulkarni
	Date   :- 17-4-2021
	Time   :- 14:45:30.938977
	Name   :- a.cpp 
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
	int n;
	cin>>n;
	vector<int>v1(n);
	vector<int>v2(n);
	for(int i = 0;i<n;i++){
		cin>>v1[i];
	}
	for(int i = 0;i<n;i++){
		cin>>v2[i];
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	reverse(v2.begin(),v2.end());
	long long ans = 0;
	for(int i = 0;i<n;i++){
		ans+=v1[i]*v2[i];
	}
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
