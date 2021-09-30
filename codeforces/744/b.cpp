/**
 * Author :- Tanay Kulkarni
 * Date   :- 28-9-2021
**/
#include<bits/stdc++.h>
using namespace std;
vector<int>a,b;
void testcase(){
	int n;
	cin>>n;
	a = vector<int>(n);
	b = vector<int>(n);
	for(int i = 0;i < n;i++){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b.begin(),b.end());
	vector<vector<int>>res;
	for(int i = 0;i < n - 1;i++){
		if(a[i] == b[i])
			continue;
		int d = 0;
		vector<int>tmp(0);
		int ls = -1;
		for(int j = i;j < n;j++){
			if(a[j] == b[i]){
				ls = j;
				tmp.push_back(a[j]);
				break;
			}
			tmp.push_back(a[j]);
			d++;
		}
		rotate(tmp.begin(),tmp.begin()+d,tmp.end());
		for(int j = 0;j < (int)tmp.size();j++){
			a[j + i] = tmp[j];
		}
		res.push_back(vector<int>{i+1,ls+1,d});
	}
	///dbg(a),ppl(a),ppl();
	cout<<res.size()<<"\n";
	for(auto i : res){
		cout<<i[0]<<" "<<i[1]<<" "<<i[2];
		puts("");
	}
	
}
signed main(){
	std::cout << std::fixed;
    std::cout << std::setprecision(9);
    int tt;
    cin>>tt;
    int cc = 1;
    while(tt--){
        ///printf("Case #%ld:2 ",cc);
        testcase();
        cc++;
    }
}
