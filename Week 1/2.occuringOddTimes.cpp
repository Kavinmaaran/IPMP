#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int occuringOddTimes(vector<int> &a) {
        int ans=0;
        for(int &i:a){
            ans=ans^i;
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
        cout<<"Occuring Odd number of times :";
	    cout<<sol.occuringOddTimes(a)<<endl;
	}
	return 0;
}