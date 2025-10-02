// #include <iostream>
// using namespace std;

// int main()
// {
//     int nums[] = {5, 12, 15, 16, 17, 20};
//     int size = 6;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     int smallestindex = -1;
//     int largestindex = -1;

//     // for (int i = 0; i < size; i++)
//     // {
//     //         smallest = min(nums[i], smallest);
//     //         largest = max(nums[i], largest);



//     //     // if (nums[i] < smallest)
//     //     // {
//     //     //     // smallest = nums[i];
//     //     //     // other way to write for loop
//     //     // }
//     // }

//     for (int i = 0; i < size; i++) {
//         if(nums[i] < smallest) {
//             smallest = nums[i];
//             smallestindex = i;
//         }
//         if(nums[i] > largest) {
//             largest = nums[i];
//             largestindex = i;
//         }
//     }

//     cout << "smallest = " << smallest << " with index of this " << smallestindex << endl;
//     cout << "largest = " << largest << " with index of this " << largestindex << endl;
//     return 0;
// }

// PASS BY Reference

// #include <iostream>
// using namespace std;

// void changeArr(int arr[], int size) {
//     cout << "in function\n";
//     for(int i=0; i<size; i++) {
//         arr[i] = 2* arr[i];
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3};
    
//     changeArr(arr, 3);

//     cout << "in main\n";
//     for(int i=0; i<3; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// LINERA SERACH (is alograthem)

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int sz, int target) {
//     for(int i=0; i<sz; i++) {
//         if(arr[i] == target) {
//             return i;
//         }
//     }

//     return -1;
// }

// int main() {

//     int arr[] = {1, 5, 6, 4, 8, 9};
//     int sz = 6;
//     int target = 8;

//     cout << linearSearch(arr, sz, target) << endl;

//     return 0;
// }

// REVERSE AN ARRAY

#include <iostream>
using namespace std;

int main() {


    return 0;
}