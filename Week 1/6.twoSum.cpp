#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<int> twoSum(vector<int> &a, int sum) {
        sort(a.begin(), a.end());
        vector<int> ans;
        int l=0;
        int r= a.size()-1;
        while (l<r){
            if(sum-a[l]==a[r]){
                ans.push_back(a[l]);
                ans.push_back(a[r]);
                return ans;
            }else if(sum-a[l]<a[r])
                r--;
            else
                l++;
        }
        return ans;
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
        int sum;
        cin>>sum;

	    Solution sol;
        cout<<"TWO SUM"<<endl;
	    vector<int> ans = sol.twoSum(a,sum);
        for(auto &i: ans)
            cout<<i<<" ";
        cout<<endl;
	}
	return 0;
}