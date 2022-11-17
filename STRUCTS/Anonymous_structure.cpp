//Diego Cuevas
//This program creates a anonymous structure.
#include <iostream>
using namespace std;

struct
{
    int minutes, hour;
} time1;


int main(int argc, char const *argv[])
{   
    time1.minutes = 04;
    time1.hour = 16;

    cout << "The time is " << time1.hour << ":" << time1.minutes << endl;
    
    return 0;
}
