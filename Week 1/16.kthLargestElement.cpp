#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void heapify(vector<int> &a, int i){
        int largest = i;
        int left = 2*i +1;
        int right = 2*i +2;
        if(left < a.size() && a[largest]<a[left])
            largest = left;
        if(right < a.size() && a[largest]<a[right])
            largest = right;
        if(i!=largest){
            swap(a[largest], a[i]);
            heapify(a,largest);
        }
    }
  void heapSort(vector<int> &a) {
    for (int i = a.size() / 2 - 1; i >= 0; i--)
      heapify(a, i);
  
    for (int i = a.size() - 1; i >= 0; i--) {
      swap(a[0], a[i]);
  
      heapify(a, 0);
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
        cout<<"Kth Largest Element"<<endl;
	    sol.longestSumArray(a);
	}
	return 0;
}