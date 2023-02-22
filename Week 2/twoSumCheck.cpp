#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int twoSum(vector<int> &a, int sum) {
        sort(a.begin(), a.end());
        vector<int> ans;
        int l=0;
        int r= a.size()-1;
        while (l<r){
            if(sum-a[l]==a[r]){
                return 1;
            }else if(sum-a[l]<a[r])
                r--;
            else
                l++;
        }
        return 0;
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
	    int ans = sol.twoSum(a,sum);
        if(ans)
            cout<<"TRUE"<<endl;
        else
            cout<<"FALSE"<<endl;
	}
	return 0;
}