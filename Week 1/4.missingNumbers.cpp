#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> missingNumber(vector<int> &a) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int &i:a){
            mp[i]++;
        }
        for(auto &i:mp){
            if(i.second<2)
                ans.push_back(i.first);
        }
        return ans;
    }
};


int main() {
	
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
        cout<<"Missing Numbers :";
	    vector<int> ans=sol.missingNumber(a);
        for(auto &i: ans)
            cout<<i<<" ";
        cout<<endl;
	}
	return 0;
}