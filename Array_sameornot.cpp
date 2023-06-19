#include <iostream>

using namespace std;

int main() {
    int size, i, sum1 = 0, sum2 = 0, size2;

    cin >> size;
    cin >> size2;
//input of the array size
    if (size != size2) {
        cout << "Not Same";
        return 0;
    }
// input of array in var of size
    int arr[size], arr2[size2];

    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }
// ionput of array each has size given above
    for (i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    for (int num : arr) {
        sum1 += num;      
      //   sum1= sum1+num
    }
// we initalize the sum1 is 0 and  sum2 is 0 
//  variable num will iterate over
//  the elements of the array

    for (int num : arr2) {
        sum2 += num;
    }

    if (sum1 == sum2) {
        cout << "Same";
    } else {
        cout << "Not Same";
    }
system("pause>0");
    return 0;
}
