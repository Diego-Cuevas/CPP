//Diego Cuevas
//This program show operators priority
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int number1 = 5;
	int number2 = 2;
	int number3 = 7;
	int result = 0;
	
	result = number1 * number2 + number3;
	//The result is 17
	
	cout << "The result is " << result << "." << endl;
	
	result = number1 * (number2 + number3);
	//The result is 45
	
	cout << "The result is " << result << "." << endl;
	
	result = (number1 / number2 + number3) * number3 - number2;
	//The result is 61
	
	cout << "The result is " << result << "." << endl;
	
	return 0;
}

