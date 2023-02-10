#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void separateEvenOdd(vector<int> &a) {
        int s=0;
        int e=a.size()-1;
        while(s<e){
            while(!(a[s]&1)){
                s++;
            }
            while(a[e]&1){
                e--;
            }
            swap(a[e],a[s]);
            s++;
        }
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
        cout<<"Majority Element : ";
	    sol.separateEvenOdd(a);
        for(auto &i: a)
            cout<<i<<" ";
        cout<<endl;
	}
	return 0;
}