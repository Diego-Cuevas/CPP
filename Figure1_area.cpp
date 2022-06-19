//Diego Cuevas
//This program calculate the area of the Figure1.png
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int ratio = 10, high = 13;
    float pi = 3.1416, area = 0;

    area = (( 2 * ratio * high) / 2 )  + ((2 * ratio * pi) / 2 );

    cout << "The area measure: " << area << endl;

    return 0;
}

