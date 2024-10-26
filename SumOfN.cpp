#include <iostream>
using namespace std ;
// Created a function
float CalculateSum ( int n ){
	
	int sum = 0 ;
	
	for ( int i=0 ; i<=n ; i+=1 ){
		sum += i ;
	}
	return sum ;
}
int main () {
	int n ;
	cout << "Enter the  Number :    " ;
	cin  >> n ;
	
	cout << " \n The Sum is : " << CalculateSum (n) << endl ;
	
} 
