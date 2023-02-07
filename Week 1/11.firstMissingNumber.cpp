#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> a;
        for(int & i: nums){
            if(i>0)
                a.insert(i);
        }
        int c=1;
        for(auto &i:a){
            if(i==c)
                c++;
            else
                return c;
        }
        return c;
    }
};

signed main() {
	
	int t;
	cin >> t;
	
	for(;t--;){
	    
	    int n;
	    cin >> n;
	    vector<int> a;
        int c;

	    for(int i = 0;i<n;i++){
	       cin >> c;
           a.push_back(c);
        }

	    Solution sol;
        cout<<"First missing number"<<endl;
	    cout<<sol.firstMissingPositive(a)<<endl;
	}
	return 0;
}