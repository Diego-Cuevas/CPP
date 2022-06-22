//Diego Cuevas
/*This program solve the next problem:  Two people between them earn a total
of $3000. If one earns $500 more than the other, how much does each earn?*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int people1 = 0, people2 = 0;

    people1 = (3000 + 500) / 2;
    people2 = (3000 - people1);

    cout << "One of them earn $" << people1 << " and the other earn $" << people2;
    return 0;
}
