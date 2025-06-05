// finding the second largest element with one pass approach 

#include<bits/stdc++.h>
using namespace std;

class SecondLargest {
	private:
		int n, arr[100];
		int largest = -1, secondLargest = -1;
	public:
		SecondLargest() {
			cin >> n;
		}
		
		void take_input() {
			for(int i = 0; i < n; i++) { 
				cin >> arr[i];
			}
		}
		
		
		void get_output() {
			for(int i = 0; i < n; i++) {	
				if(arr[i] > largest) {
					secondLargest = largest;
					largest = arr[i];
				} else if(arr[i] < largest && arr[i] > secondLargest) {
					secondLargest = arr[i];
				}
			}
			cout << secondLargest << endl;
			
		}
		
};
		
		
int main() {
	SecondLargest obj;
	obj.take_input();
	obj.get_output();
	
	
	return 0;
}
