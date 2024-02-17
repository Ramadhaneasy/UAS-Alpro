#include <stdio.h>

// Fungsi binary search untuk mencari posisi data dalam array
int binarySearch(int array[], int n, int x) {
    int kiri = 0, kanan = n - 1, langkah = 0;

    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        // Langkah pencarian
        printf("Langkah %d: Cari di indeks %d\n", ++langkah, tengah);

        // Jika nilai tengah sama dengan nilai yang dicari, kembalikan posisi
        if (array[tengah] == x)
            return tengah;

        // Jika nilai tengah lebih kecil dari nilai yang dicari, cari di sebelah kanan
        if (array[tengah] < x)
            kiri = tengah + 1;
        // Jika nilai tengah lebih besar dari nilai yang dicari, cari di sebelah kiri
        else
            kanan = tengah - 1;
    }

    // Jika data tidak ditemukan, kembalikan -1
    return -1;
}

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int nilai[n];

    printf("Masukkan nilai mahasiswa (urutkan dari yang terkecil): ");
    for (int i = 0; i < n; ++i)
        scanf("%d", &nilai[i]);

    int x;
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &x);

    // Memanggil fungsi binarySearch
    int posisi = binarySearch(nilai, n, x);

    // Menampilkan hasil pencarian
    if (posisi != -1)
        printf("Nilai %d ditemukan di posisi %d.\n", x, posisi);
    else
        printf("Nilai %d tidak ditemukan.\n", x);

    return 0;
}
