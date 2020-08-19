// C++ implementation to find the first negative 
// integer in every window of size k 
#include <bits/stdc++.h> 

using namespace std; 


void printFirstNegativeInteger(int arr[], int n, int k) 
{ 
 
	deque<int> Di; 


	int i; 
	for (i = 0; i < k; i++) 
		 
		if (arr[i] < 0) 
			Di.push_back(i); 
	
 
	for ( ; i < n; i++) 
	{ 
	
		if (!Di.empty()) 
			cout << arr[Di.front()] << " "; 
		
		// else the window does not have a 
		// negative integer 
		else
			cout << "0" << " "; 

		// Remove the elements which are out of this window 
		while ( (!Di.empty()) && Di.front() < (i - k + 1)) 
			Di.pop_front(); // Remove from front of queue 

	
		if (arr[i] < 0) 
			Di.push_back(i); 
	} 

	if (!Di.empty()) 
		cout << arr[Di.front()] << " "; 
	else
		cout << "0" << " ";	 
	
} 

int main() 
{ 
	int arr[] = {12, -1, -7, 8, -15, 30, 16, 28}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int k = 3; 
	printFirstNegativeInteger(arr, n, k); 
	return 0; 
} 

