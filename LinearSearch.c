#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int result = linearSearch(arr, 5, key);
    if (result != -1) printf("Element found at index %d\n", result);
    else printf("Element not found\n");
    return 0;
}
