//Diego Cuevas
//This program calculate the age of a person will have on a predetermined date
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int age_currently = 21, age_future = 0, date_currently = 2022, date_future = 2045;

    age_future = age_currently + (date_future - date_currently);

    cout << "The age for 2045 will be " << age_future << " years." << endl;

    return 0;
}

