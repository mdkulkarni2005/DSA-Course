#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int * ptr = &a;


    // cout << &a << endl;  // here & is showing addressin memory
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // return 0;

    // POINTER TO POINTER

    // int ** ptr2 = &ptr;

    // cout << &ptr << endl;
    // cout << ptr2 << endl;
    // cout << &ptr2 << endl;


    // Dereferencing operator (Value at addres)

    // int ** parPtr = &ptr;

    // cout << *(&a) << endl;
    // cout << **(parPtr) << endl;
    // cout << *(ptr) << endl;

    // NULL POINTER ( A pointer that does't point to any location )




}

// Pointers special variables that "store address" of other variables
// running code command g++ code.cpp && ./a.out