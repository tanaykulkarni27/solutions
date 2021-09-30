/**
 * Author :- Tanay Kulkarni
 * Date   :- 28-9-2021
**/
#include<bits/stdc++.h>
using namespace std;
#define ff(a,x) find(a.begin(),a.end(),x)
#define int int64_t
void ppl(char i){ cerr<<i<<" , ";}
void ppl(string i){ cerr<<i<<" , ";}
void ppl(float i){ cerr<<i<<" , ";}
void ppl(int i){ cerr<<i<<" , ";}
void ppl(double i){ cerr<<i<<" , ";}
void ppl(){cerr<<"\n";};
template<typename x> void ppl(const x &t){ cerr<<"{ ";for(auto i : t){ ppl(i);}cerr<<" } , ";}
template<typename x,typename y> void ppl(const pair<x,y>&t){cerr<<"{ ";ppl(t.first);cerr<<" , ";ppl(t.second);cerr<<" } , ";}
template<typename x,typename... y> void ppl(x a,y... b){ppl(a);ppl(b...);}
#define dbg(...) cerr<<"DEBUG : "<<#__VA_ARGS__<<" => "
void testcase(){
	string s;
	cin>>s;
	int a_cnt = 0,b_cnt = 0,c_cnt = 0;
	for(char i : s){
		a_cnt += i == 'A';
		b_cnt += i == 'B';
		c_cnt += i == 'C';
	}
	///dbg(a_cnt,b_cnt,c_cnt),ppl(a_cnt,b_cnt,c_cnt),ppl();
	if(min(a_cnt,b_cnt) == a_cnt){
		b_cnt = b_cnt - a_cnt;
		a_cnt = 0;
		
	}else{
		a_cnt = abs(a_cnt - b_cnt);
		b_cnt = 0;
	}
	if(c_cnt and min(c_cnt,b_cnt) == c_cnt){
		b_cnt = abs(c_cnt - b_cnt);
		c_cnt  = 0;
	}else if(c_cnt){
		c_cnt = abs(c_cnt - b_cnt);
		b_cnt  = 0;
	}
	///dbg(a_cnt,b_cnt,c_cnt),ppl(a_cnt,b_cnt,c_cnt),ppl();
	if(a_cnt == b_cnt and b_cnt == c_cnt and b_cnt == 0){
		cout<<"YES";
	}else
		cout<<"NO";
    puts("");
}
signed main(){
	std::cout << std::fixed;
    std::cout << std::setprecision(9);
    int tt;
    cin>>tt;
    int cc = 1;
    while(tt--){
        ///printf("Case #%ld: ",cc);
        testcase();
        cc++;
    }
}
