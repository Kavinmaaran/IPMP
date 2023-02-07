#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int nextSmallestPalindrome(int &a) {
        int ans;
        string palindrome = to_string(a);
        int n = palindrome.length()%2==0 ? palindrome.length()/2 :(palindrome.length()+1)/2 ;
        palindrome = palindrome.substr(0,n);
        ans = stoll(palindrome);
        ans++;
        palindrome = to_string(ans);
        string rpalindrome =palindrome; 
        reverse(rpalindrome.begin(),rpalindrome.end());
        palindrome = palindrome+(to_string(a).length()%2==0 ? rpalindrome: rpalindrome.substr(1,rpalindrome.length()));
        ans = stoll(palindrome);
        return ans;
    }
};


signed main() {
	
	int t;
	cin >> t;
	
	for(;t--;){
	    
	    int n;
        cin>>n;

	    Solution sol;
        cout<<"Next Smallest Palindrome"<<endl;
	    int ans = sol.nextSmallestPalindrome(n);
        cout<<ans;
        cout<<endl;
	}
	return 0;
}