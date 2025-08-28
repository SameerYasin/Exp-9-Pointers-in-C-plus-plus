// Sameer Yasin
// PRN: 24070123098
// ENTC B1 - Experiment 9

#include <iostream>
using namespace std;

int main() {
    int a = 9;
    int b = 5;
    int *a1;
    a1 = &a;
    int *b1;
    b1 = &b;

    int sum, diff;
    sum = *a1 + *b1;
    diff = *a1 - *b1;

    cout << "Sum is: " << sum << endl;
    cout << "Difference is: " << diff << endl;

    return 0;
}

/*
Output:
Sum is: 14
Difference is: 4
*/
