#include <iostream>
using namespace std ;
float CalculateFact(int n){
	
	 int factorial = 1 ;
	 // For factorial loop should start from 1 .
	 for (int i=1 ; i<=n ; i+=1){
        factorial *= i ;
	 }
 	  return factorial ;
  }
int main () {
	
	int n ;
	
	cout << "Enter The Number : " ;
	cin  >> n ;
	
	if ( n < 0) {
		cout << " Enter a Vaild Number " ;
  	   }
	 else {
		cout << "The Factorial is : " << CalculateFact(n) ;
	   }   
    }
