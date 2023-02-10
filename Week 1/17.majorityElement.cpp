#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &a) {
        int count = 1;
        int ele = a[0];
        for(int i=1; i<a.size(); i++){
            if(a[i]==ele)
                count++;
            else{
                count --;
            }
            if(count == 0){
                ele = a[i];
                count =1;
            }
        }
        return ele;
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
	    cout<<sol.majorityElement(a)<<endl;
	}
	return 0;
}