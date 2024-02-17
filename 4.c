#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];

    // Memasukkan data dari pengguna
    printf("Masukkan %d data:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    // Menghitung jumlah
    int jumlah = 0;
    for (int i = 0; i < n; ++i) {
        jumlah += data[i];
    }

    // Menghitung rata-rata
    float rata_rata = (float)jumlah / n;

    // Mengurutkan data untuk mencari nilai tengah
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Menentukan nilai tengah
    float median;
    if (n % 2 == 0) {
        median = (float)(data[n / 2 - 1] + data[n / 2]) / 2;
    } else {
        median = data[n / 2];
    }

    // Menampilkan hasil
    printf("Jumlah: %d\n", jumlah);
    printf("Rata-rata: %.2f\n", rata_rata);
    printf("Nilai tengah: %.2f\n", median);

    return 0;
}
