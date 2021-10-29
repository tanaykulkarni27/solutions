/**
 * @author tanay kulkarni
 * @created_on 28-10-2021 11:56:54
**/
#include<bits/stdc++.h>
using namespace std;
#define vtr vector
#define ff(a,x) find(a.begin(),a.end(),x)
#define int long long
#define rep(i,s,e) for(int i = s;i < e;i++)
#define repc(i,s,e,inc) for(int i = s;i < e;i+=inc)
void read(){}
void read(int& a){scanf("%lld",&a);}
void read(double& a){scanf("%lf",&a);}
void read(float& a){scanf("%f",&a);}
void read(string& a){cin>>a;}
template<typename x,typename y>void read(pair<x,y>& a){ read(a.first),read(a.second);}
template<typename x>void read(x& a){for(auto  &i : a) read(i);}
template<typename x,typename... y>void read(x& a,y&... b){read(a);read(b...);}
map<int,int>CNT;
map<int,int>START;
multiset<int>s;
void testcase(int case_number){
	CNT.clear();
	START.clear();
	s.clear();
	int n,m;
	read(n,m);
	n = m;
	vtr<int>a(n);
	read(a);
	for(int i : a){
		CNT[i]++;
		if(s.find(i) == s.end())
			s.insert(i);
	}
	int pos = 0;
	for(int i : s){
		START[i] = pos;
		pos = CNT[i] + pos;
	}
	bool seates[n];
	memset(seates,false,sizeof(seates));
	int res = 0;
	for(int i = 0;i < n;){
		int times = CNT[a[i]];
		int expected = START[a[i]] + times - 1;
		for(int k = 0;k < expected;k++){
			res += seates[k];
		}	
		seates[expected] = 1;
		CNT[a[i]]--;
		i++;
	}
	printf("%lld\n",res);
}
signed main(){
    int tt;
    scanf("%lld",&tt);
    int cc = 1;
    while(tt--){
		testcase(cc);
		cc++;
    }	
}
