#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec(5, 0);
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    // cout<< vec[0] << endl;

    // vector<int> vec(3,0);

    for(char i : vec) {
        cout << i << endl;
    }

    return 0;
}