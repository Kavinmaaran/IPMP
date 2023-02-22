#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rotateTheVector(vector<int> &a, int k) {
        for(int i=0; i<k/2; i++){
            swap(a[i],a[k-1-i]);
        }
        for(int i=0; i<(a.size()-k)/2; i++){
            swap(a[i+k], a[a.size()-i-1]);
        }
        for(int i=0; i<a.size()/2; i++){
            swap(a[i], a[a.size()-i-1]);
        }
        return a;
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
        int k;
        cin>>k;
	   
	    for(int i = 0;i<n;i++){
	       cin >> c;
           a.push_back(c);
        }
	       
	    Solution sol;
        cout<<"Rotate the array"<<endl;
	    vector<int> ans = sol.rotateTheVector(a,k);
        for(auto &i: ans)
            cout<<i<<" ";
        cout<<endl;
	}
	return 0;
}