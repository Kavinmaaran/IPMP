#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    bool static valueSort(int i, int j){
        return abs(i)<abs(j);
    }
    void closestSumTo0(vector<int>& nums) {
        sort(nums.begin(), nums.end(), valueSort);
        int temp=INT_MAX;
        vector<int> ans{-1, -1};
        for(int i=1; i<nums.size(); i++){
            if(abs(nums[i]+nums[i-1])<temp){
                temp=abs(nums[i]+nums[i-1]);
                ans[0]=nums[i];
                ans[1]=nums[i-1];
            }
        }
        cout<<ans[0]<<" "<<ans[1]<<endl;
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
        cout<<"ClosestSumToZero"<<endl;
	    sol.closestSumTo0(a);
	}
	return 0;
}