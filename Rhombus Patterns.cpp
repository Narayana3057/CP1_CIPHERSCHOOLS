#include<bits/stdc++.h>
using namespace std;
void solidRhombus(int rows) 
{ 
    int i, j; 
    for (i=1; i<=rows; i++) 
    { 
      
        for (j=1; j<=rows - i; j++) 
            cout << " "; 
              
       
        for (j=1; j<=rows; j++) 
            cout << "*"; 
              
       
        cout << "\n"; 
    } 
    
} 
void hollowRhombus(int rows) 
{ 
    int i, j; 
    for (i=1; i<=rows; i++) 
    { 
        
        for (j=1; j<=rows - i; j++) 
            cout << " "; 
        
        if (i==1 || i==rows) 
            for (j=1; j<=rows; j++) 
                cout << "*"; 
                  
      
        else
            for (j=1; j<=rows; j++) 
                if (j==1 || j==rows) 
                    cout << "*";   
                else
                    cout << " "; 
       
        cout << "\n"; 
    } 
} 
void printPattern(int rows) 
{ 
    cout << "\nSolid Rhombus:\n"; 
    solidRhombus(rows); 
      
    cout << "\nHollow Rhombus:\n"; 
    hollowRhombus(rows); 
} 
int main(){
	int rows = 5; 
    printPattern (rows); 
    return 0; 
}
