#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNUmber(vector<int> &a) {
        int ans=0;
        for(int i=1; i<=a.size()+1; i++){
            ans=ans^i;
        }
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

	    for(int i = 0;i<n-1;i++){
	       cin >> c;
           a.push_back(c);
        }

	    Solution sol;
        cout<<"Missing Number :";
	    cout<<sol.missingNUmber(a)<<endl;
	}
	return 0;
}