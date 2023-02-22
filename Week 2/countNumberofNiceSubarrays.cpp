#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int &i:nums){
            if(i&1)
                i=1;
            else
                i=0;
        }
        unordered_map<int, int> ps;
        int count =0;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            
            if(sum==k)
                count++;
            
            if(ps.count(sum-k)!=0)
                count+=ps[sum-k];
            ps[sum]++;
        }
        return count;
    }
};


int main() {
	
	int t;
	cin >> t;
	
	for(;t--;){
	    
	    int n,m;
	    cin >> n;
        cin>> m;
	    vector<vector<int>> a(n, vector<int> (m, 0));
        int c;
	   
	    for(int i = 0;i<n;i++){
            for(int j=0; j<m; j++){
                cin >> c;
                a[i][j]=c;
            }
        }
	       
	    Solution sol;
        cout<<"Diagonal Matrix : "<<endl;
	    sol.diagonalMatrix(a);
	}
	return 0;
}