#include <stdio.h>

// Fungsi untuk menukar dua elemen
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk membagi array dan mengembalikan indeks pivot
int partition(int array[], int low, int high) {
    int pivot = array[high]; // Pivot sebagai elemen terakhir
    int i = (low - 1); // Indeks elemen terkecil yang lebih besar dari pivot

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil dari pivot
        if (array[j] < pivot) {
            i++; // Pindahkan elemen lebih kecil ke sebelum pivot
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

// Fungsi utama quicksort
void quickSort(int array[], int low, int high) {
    if (low < high) {
        // Partisi indeks
        int pi = partition(array, low, high);

        // Urutkan elemen sebelum dan sesudah partisi
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Fungsi untuk mencetak array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int array[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Array sebelum diurutkan: \n");
    printArray(array, n);

    quickSort(array, 0, n - 1);

    printf("Array setelah diurutkan: \n");
    printArray(array, n);
    return 0;
}
