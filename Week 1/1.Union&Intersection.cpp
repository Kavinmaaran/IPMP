#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> Union(vector<int> &a, vector<int> &b) {
        set<int> c;
        vector<int> ans;
        for(int & i:a){
            c.insert(i);
        }
        for(int &i:b){
            c.insert(i);
        }
        for(auto &i:c){
            ans.push_back(i);
        }
        // int i=0;
        // int j=0;
        // vector<int> ans;
        // while(i<a.size() && j<b.size()){
        //     if(a[i]<b[j]){
        //         ans.push_back(a[i]);
        //         i++;
        //     }else if(b[j]<a[i]){
        //         ans.push_back(b[j]);
        //         j++;
        //     }else{
        //         ans.push_back(a[i]);
        //         i++;
        //         j++;
        //     }
        // }   
        // while(i<a.size()){
        //     ans.push_back(a[i]);
        //     i++;
        // }
        return ans;
    }
    vector<int> intersection(vector<int> &a, vector<int> &b) {
        unordered_map<int,int> c;
        vector<int> ans;
        for(int & i:a)
            c[i]++;
        for(int &i:b)
            c[i]++;
        for(auto &i:c){
            if(i.second>1)
                ans.push_back(i.first);
        }
        return ans;
    }
};


int main() {
	
	int t;
	cin >> t;
	
	for(;t--;){
	    
	    int n, m;
	    cin >> n >> m;
	    vector<int> a;
        vector<int> b;
        int c;
	   
	    for(int i = 0;i<n;i++){
	       cin >> c;
           a.push_back(c);
        }
	       
	    for(int i = 0;i<m;i++){
            cin>>c;
            b.push_back(c);
        }
	    Solution sol;
        cout<<"Union"<<endl;
	    vector<int> ans = sol.Union(a,b);
        for(auto &i: ans)
            cout<<i<<" ";
        cout<<endl;
        cout<<"Intersection"<<endl;
	    ans = sol.intersection(a,b);
        for(auto &i: ans)
            cout<<i<<" ";
        cout<<endl;
	}
	return 0;
}