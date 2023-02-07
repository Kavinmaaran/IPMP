#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    void twoRepeatingELements(vector<int> &a) {
        int Xor=a[0];
        int x=0;
        int y=0;
        for(int i=1; i<a.size(); i++){
            Xor^=a[i];
        }
        for(int i=1; i<=a.size()-2; i++){
            Xor^=i;
        }

        Xor = Xor & ~(Xor-1);

        for(int i=0; i<a.size(); i++){
            if(Xor & a[i])
                x=x^a[i];
            else
                y=y^a[i];
        }
        for(int i=1; i<=a.size()-2; i++){
            if(Xor & i)
                x=x^i;
            else
                y=y^i;
        }     
        cout<<x<<" "<<y<<endl;
    }
};


signed main() {
	
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
        cout<<"2 Repeating Elements"<<endl;
	    sol.twoRepeatingELements(a);
	}
	return 0;
}