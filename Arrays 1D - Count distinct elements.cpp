#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    unordered_set<int> distinctElements;
    for (int i = 0; i < size; i++) {
        distinctElements.insert(arr[i]);
    }

    int distinctCount = distinctElements.size();

    cout << "There are " << distinctCount << " distinct element";
    if (distinctCount > 1) {
        cout << "s";
    }
    cout << " in the array.";

    return 0;
}
