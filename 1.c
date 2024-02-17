#include <stdio.h>

#define MAX_SIZE 100 

int* findThreeLargest(int arr[], int n) {
    static int hasil[3] = {-2147483647, -2147483647, -2147483647}; // Menyimpan tiga nilai terbesar
    int first, second, third;
    first = second = third = -2147483647; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }

    hasil[0] = first;
    hasil[1] = second;
    hasil[2] = third;

    return hasil;
}

int main() {
    int arr[MAX_SIZE] = {15, 3, 4, 7, 11, 86, 9};
    int n = 7;

    int* hasilTerbesar = findThreeLargest(arr, n);

    printf("Tiga elemen terbesar dalam array: %d, %d, %d\n", hasilTerbesar[0], hasilTerbesar[1], hasilTerbesar[2]);

    return 0;
}
