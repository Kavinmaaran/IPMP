#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortArrayByFrequency(vector<int> &a) {
        vector<int,int> mp;
        for(int i=0; i<a.size(); i++){
            mp[i]++;
        }
        sort(mp.begin(),mp.end());

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
        cout<<"Continuous Sum Array Sum"<<endl;
	    sol.longestSumArray(a);
	}
	return 0;
}