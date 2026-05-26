//通過指針訪問内存
//可以通過指針來保存一個地址
//變量地址 = 尋找變量 = 指針
//E.g: a = 10 = 0x0000
#include <iostream>
using namespace std;

int main() {
    // 1. Define a pointer
    int a = 10;
    // The syntax of define pointer: Data type * Pointer Varible：
    int * p;
    // Let the pointer varible to record the location of a
    p = &a;
    cout << "The location of a is " << &a << endl;
    cout << "Pointer p equal to " << p << endl;



    // 2. How to use a pointer
    // Can use dereferencing to find the pointer memory
    // Add a * before pointer represent dereferencing, find the pointer memory data
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    return 0;
}