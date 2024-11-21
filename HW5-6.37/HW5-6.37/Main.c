#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(const int* arr, int size) {
    if (size == 1) {
        return arr[0]; 
    }
    int maxOfRest = recursiveMaximum(arr + 1, size - 1); 
    return (arr[0] > maxOfRest) ? arr[0] : maxOfRest;   
}

int main() {
    int arr[] = { 1, 5, 3, 9, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum value: %d\n", recursiveMaximum(arr, size));
    return 0;
}

 