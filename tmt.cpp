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
	string s;
	cin>>s;
	int t=0,m=0;
	for(int i = 0;i<n;i++){
		if(s[i] == 'T')
			t++;
		if(s[i] == 'M'){
			m++;
			if(t < m){
				cout<<"NO\n";
				return;
			}
		}
	}
	t = 0,m=0;
	for(int i = n-1;i>=0;i--){
		if(s[i] == 'T')
			t++;
		if(s[i] == 'M'){
			m++;
			if(t < m){
				cout<<"NO\n";
				return;
			}
		}
	}
	if(t/2 != m)
		cout<<"NO";
	else
		cout<<"YES";
	puts("");
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
