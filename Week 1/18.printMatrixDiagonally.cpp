#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void diagonalMatrix(vector<vector<int>> &a) {
        for(int j=0; j<a[0].size(); j++){
            int i=0;
            int k=j;
            while (k>=0){
                cout<<a[i][k]<<" ";
                k--;
                i++;
            }
            cout<<endl;
        }
        for(int i=1; i<a.size(); i++){
            int j = a[0].size()-1;
            int k = i;
            while(j>=i){
                cout<<a[k][j]<<" ";
                j--;
                k++;
            }
            cout<<endl;
        }
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