#include <iostream>

using namespace std;

int main() {
	
 int number	;
 cout<<"Number: ";
 cin>> number;
 bool isPrimeFlag=true;
 for (int i=2; i<number; i++)
 {
 	if(number%i==0)
    {
    	isPrimeFlag=false;
    	break;
 	}	
 }
	if(isPrimeFlag)	
	  cout<<"prime number"<<endl;
	else
	   cout<<"Not prime number";  
	  
	system("pause>o");
}