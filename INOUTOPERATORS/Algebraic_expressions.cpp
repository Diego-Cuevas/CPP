//Diego Cuevas
//This program solve four algebraic expressions
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    float a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
    float result = 0;

    result = a / b + 1;

    cout << "The result for a / b + 1 is: " << result << endl;

    result = (a + b) / (c + d);

    cout << "The result for (a + b) / (c + d) is: " << result << endl;

    result = (a + b / c) / (d + e / f);

    cout << "The result for (a + b / c) / (d + e / f) is: " << result << endl;

    result = a + (b / (c - d));

    cout << "The result for a + (b / (c - d)) is: " << result << endl;

    return 0;
}

