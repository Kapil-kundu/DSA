#include<bits/stdc++.h>
using namespace std;

class ThirdLargest {
	private: 
		int n, l = -1, sl = -1, tl = -1; // n = size of array given, l = largest, sl = second largest, tl = third largest
		int arr[100];
	public:
		void getInput() {
			cin >> n;
			for(int i = 0; i < n; i++) {	
				cin >> arr[i];
			}
		}
		
		void find() {
			for(int i = 0; i < n; i++) {
				if(arr[i] > l) {
					sl = l;
					l = arr[i];
				} else if(arr[i] > sl && arr[i] < l) {
					tl = sl;
					sl = arr[i];
				} else if( arr[i] > tl) {
					tl = arr[i];
				}
			}
			cout << "Third largest element is : " << tl << endl;
		}
};

int main() {
	ThirdLargest obj;
	obj.getInput();
	obj.find();
	return 0;
}
