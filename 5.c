#include <stdio.h>

void findCommonElements(int A[], int B[], int C[], int panjangA, int panjangB, int panjangC) {
    int i = 0, j = 0, k = 0;

    printf("Elemen yang sama pada ketiga array: ");
    while (i < panjangA && j < panjangB && k < panjangC) {
        // Temukan elemen terkecil dari A[i], B[j], dan C[k]
        if (A[i] == B[j] && B[j] == C[k]) {
            printf("%d ", A[i]);
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
    printf("\n");
}

int main() {
    int A[] = {1, 5, 10, 20, 30, 40, 80};
    int B[] = {6, 7, 20, 30, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int panjangA = sizeof(A) / sizeof(A[0]);
    int panjangB = sizeof(B) / sizeof(B[0]);
    int panjangC = sizeof(C) / sizeof(C[0]);

    findCommonElements(A, B, C, panjangA, panjangB, panjangC);

    return 0;
}
