#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<int> threeSum(vector<int> &a, int sum) {
        sort(a.begin(), a.end());
        vector<int> ans;
        int l,r;
        for(int i=0; i<a.size()-2; i++){
            l=i+1;
            r=a.size()-1;
            while (l<r){
                if(a[i]+a[l]+a[r]==sum){
                    ans.push_back(a[i]);
                    ans.push_back(a[l]);
                    ans.push_back(a[r]);
                    return ans;
                }else if(a[i]+a[l]+a[r]<sum)
                    l++;
                else
                    r--;
            }
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
        cout<<"THREE SUM"<<endl;
	    vector<int> ans = sol.threeSum(a,sum);
        for(auto &i: ans)
            cout<<i<<" ";
        cout<<endl;
	}
	return 0;
}