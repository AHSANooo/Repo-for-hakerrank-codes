#include <iostream> //swaping 2 arrays

void swapArrays(int arr1[], int size1, int arr2[], int size2) {
    // Find the minimum size between size1 and size2
    int minSize = (size1 < size2) ? size1 : size2;

    // Swap the elements of both arrays up to the minimum size
    for (int i = 0; i < minSize; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    // If size1 is greater than size2, move the remaining elements from arr1 to arr2
    if (size1 > size2) {
        for (int i = minSize; i < size1; i++) {
            arr2[i] = arr1[i];
        }
    }
    // If size2 is greater than size1, move the remaining elements from array 1 to array 2
    else if (size2 > size1) {
        for (int i = minSize; i < size2; i++) {
            arr1[i] = arr2[i];
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3,4};
    int size1 = 4;

    int arr2[] = {5, 6, 7, 8,9};
    int size2 = 5;

    swapArrays(arr1, size1, arr2, size2);

    std::cout << "Swapped arr1: ";
    for (int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }

    std::cout << "\nSwapped arr2: ";
    for (int i = 0; i < size2; i++) {
        std::cout << arr2[i] << " ";
    }

    return 0;
}
