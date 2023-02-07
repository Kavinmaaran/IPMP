#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void longestProductArray(vector<int> &a) {
        int maxi=a[0];
        int mini=a[0];
        int ans = INT_MIN;
        for(int i=1; i<a.size(); i++){
            if(a[i]<0)
                swap(mini,maxi);
            mini=min(a[i],a[i]*mini);
            maxi=max(a[i],a[i]*maxi);
            ans = max(maxi,ans);
        }
        cout<<ans<<endl;
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
        cout<<"Continuous Product Array Sum"<<endl;
	    sol.longestProductArray(a);
	}
	return 0;
}