 #include <iostream>
 using namespace std ;

 int SumOfDigits(int num) {
 	
 	   int Digsum = 0 ;
 	                 
 	 while ( num > 0) {
 	 	//First  Loop Line will give remainder 
 		   int LastDig = num % 10 ;
 		  // Second line will replace the number 
 		     num /= 10;
 		
 	      Digsum += LastDig ;
	    }
	 return Digsum;
    }
 int main () {
 	
	cout << "Sum : " <<  SumOfDigits (2356) << endl  ;
	
}
