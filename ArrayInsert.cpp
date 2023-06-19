//#Arrays 1D - Array insertion
#include <iostream>

bool checkCompatibility(int arr1[], int size1, int arr2[], int size2) {
    if (size1 != size2) {
        return false;  // Arrays have different sizes, incompatible
    }
    
    for (int i = 0; i < size1; i++) {
        if (arr1[i] < arr2[i]) {
            return false;  // Elements not compatible at index i
        }
    }
    
    return true;  // Arrays are compatible
}

int main() {
    int size1;
    std::cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        std::cin >> arr1[i];
    }
    
    int size2;
    std::cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        std::cin >> arr2[i];
    }
    
    bool compatible = checkCompatibility(arr1, size1, arr2, size2);
    
    if (compatible) {
        std::cout << "Compatible" << std::endl;
    } else {
        std::cout << "Incompatible" << std::endl;
    }
    
    return 0;
}
