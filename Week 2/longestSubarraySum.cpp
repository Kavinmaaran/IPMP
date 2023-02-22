#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void longestSumArray(vector<int> &a) {
        int sum=0;
        int max=INT_MIN;
        for(int i=0; i<a.size(); i++){
            if(sum<0){
                sum=0;
            }
            sum+=a[i];
            if(sum>max){
                max=sum;
            }
        }
        cout<<max<<endl;
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