#include<bits/stdc++.h>
using namespace std;
int main(){
	int i, j; 
        for(i=0; i<5; i++) 
        {  
            for(j=0; j<=i; j++) 
            { 
                // printing stars 
               cout<<"* ";
            } 
  			cout<<endl;
        } 
         cout<<endl;
        int n=5;
        for(i=0; i<n; i++) 
        { 
  
            for(j=2*(n-i); j>=0; j--) 
            { 
                cout<<" ";
            } 
             
           
            for(j=0; j<=i; j++) 
            { 
                
                cout<<"* ";
            } 
              
           cout<<endl; 
        }
        cout<<endl;
        for(i=0; i<n; i++) 
        { 
  
            for(j=(n-i); j>=0; j--) 
            { 
                cout<<" ";
            } 
             
           
            for(j=0; j<=i; j++) 
            { 
                
                cout<<"* ";
            } 
              
           cout<<endl; 
        }
         cout<<endl;
}

