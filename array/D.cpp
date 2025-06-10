/*Given an array arr[] consisting of only 0's and 1's, your task is to find the count of a 
  maximum number of consecutive 1's or 0's present in the array.*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int consicutive = 0;
	int c1 = 0;
	int i = 0;
	while(i < n) {
		int val = arr[i];
		c1 = 0;
		while(arr[i] == val && i < n) {
			c1++;
			i++;
		}
		if(consicutive < c1) {
			consicutive = c1;
		}
	}
	cout << consicutive << endl;
	return 0;
}

