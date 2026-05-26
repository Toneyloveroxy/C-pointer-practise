#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int * p = &a;

    //Under 32 bit, pointer have 4 unit space size no matter the data
    //Under 64 bit, pointer have 8 unit space size type
    cout << "Size of int * = " << sizeof(int *) << endl;
    cout << "Size of int * = " << sizeof(float *) << endl;
    cout << "Size of int * = " << sizeof(double *) << endl;
    cout << "Size of int * = " << sizeof(char *) << endl;
    
    return 0;
}