//Diego Cuevas
//Program to convert degrees Fahrenheit to degrees Celsius
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Fahrenheit = 86, Celsius = 0;
	
	Celsius = (Fahrenheit - 32) * (5.0 / 9); //Formule to convert
	
	cout << Fahrenheit << " degrees Fahrenheit are equal to " << Celsius << " degrees Celsius." << endl; 
	
	return 0;
}

