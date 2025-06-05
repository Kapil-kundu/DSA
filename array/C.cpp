// In this question we have to find the maximum product of three element from a given array 
// Let's Solve this --> 

#include<bits/stdc++.h>
using namespace std;

class GreatCandidates {
	private: 
		int n, fc, sc, tc, product = 1; // n = size of array, fc = first candidate, sc = second candidate, tc = third candidate
		int arr[100];
	
	public:	
		void getInput() {
			cin >> n;
			for(int i = 0; i < n; i++) {
				cin >> arr[i];
			}
			sort(arr, arr + n);  // array sorted in assending order
		}
		
		void output() {
			for(int i = n - 3; i < n; i++) {
				product = product * arr[i];
			}
			cout << product << endl;
		}
};

int main() {
	GreatCandidates obj;
	obj.getInput();
	obj.output();
	return 0;
}
