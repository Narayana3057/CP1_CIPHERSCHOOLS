
#include <bits/stdc++.h> 
using namespace std; 
 
 int order(int x) 
    { 
        int n = 0; 
        while (x != 0) 
        { 
            n++; 
            x = x/10; 
        } 
        return n; 
    } 
  
    bool isArmstrong (int x) 
    { 
        int n = order(x); 
        int temp=x, sum=0; 
        while (temp!=0) 
        { 
            int r = temp%10; 
            sum = sum + pow(r,n); 
            temp = temp/10; 
        } 
        return (sum == x); 
    } 
    int main(){
    	int n=153;
    	if(isArmstrong(n)){
    		cout<<"Yes";
		}
		else
		cout<<"No";
	}
  
