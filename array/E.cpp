/*Given an array of integers arr[], the task is to move all the zeros
 to the end of the array while maintaining the relative order of all non-zero elements.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n), temp;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == 0) {
			count++;
		} else {
			temp.push_back(arr[i]);
		}
	}
	
	for(int i = 0; i < count; i++) {
		temp.push_back(0);
	}
	
	for(int i = 0; i < temp.size(); i++) {
		cout << temp[i] << " " ;
	}
	return 0;
}

