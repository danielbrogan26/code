// cvariables.cpp
#include <iostream>
using namespace std;

int main(){
	// Initialize variables
	int i ;   //-integers
	double d; //- floating point numbers
	float f; // - floating point number that a smaller than double
	char c ;  //- stores single characters 'c'
	string s; //  stores text, "Hello World". 
	bool done ; // true or false
	// Assign data to each variable
	i = 47689;
	d = 3.58394579834275908;
	f = 2.13298472913;
	c = 'A';
	s = "This is a string of characters.";
	done = true;
	// Print the variables data
	cout << i << "\n";
	cout << d << "\n";
	cout << f << "\n";
	cout << c << "\n";
	cout << s << "\n";
	cout << done << "\n";
	done = false;
	cout << done<< "\n";
	return 0;
}	
