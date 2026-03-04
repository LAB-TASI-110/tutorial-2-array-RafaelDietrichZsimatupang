#include <stdio.h> // Diperlukan untuk fungsi input/output seperti printf dan scanf
#include <limits.h> // Diperlukan untuk INT_MAX dan INT_MIN (untuk inisialisasi min/max)

int main() {
    int n; // Variabel untuk menyimpan jumlah baris masukan berikutnya
    int num; // Variabel untuk menyimpan setiap bilangan bulat yang dibaca
    int min_val = INT_MAX; // Inisialisasi nilai minimum dengan nilai integer maksimum yang mungkin
    int max_val = INT_MIN; // Inisialisasi nilai maksimum dengan nilai integer minimum yang mungkin
    int i; // Variabel counter untuk loop
    int first_element = 0; // Untuk menyimpan elemen pertama
    int second_element = 0; // Untuk menyimpan elemen kedua
    float average_first_two; // Untuk menyimpan hasil rata-rata, menggunakan float agar presisi

    // 1. Membaca baris pertama yang merepresentasikan jumlah baris masukan berikutnya (n)
    scanf("%d", &n);

    // 2. Loop sebanyak n kali untuk membaca n baris masukan bilangan bulat
    for (i = 0; i < n; i++) {
        scanf("%d", &num); // Membaca bilangan bulat berikutnya

        // Simpan elemen pertama dan kedua untuk perhitungan rata-rata nanti
        if (i == 0) {
            first_element = num;
        } else if (i == 1) {
            second_element = num;
        }

        // Membandingkan dengan nilai minimum saat ini untuk mencari nilai terkecil
        if (num < min_val) {
            min_val = num;
        }

        // Membandingkan dengan nilai maksimum saat ini untuk mencari nilai terbesar
        if (num > max_val) {
            max_val = num;
        }
    }

    // 3. Menghitung rata-rata dari elemen pertama dan kedua
    // Pastikan n minimal 2 agar elemen pertama dan kedua ada
    if (n >= 2) {
        average_first_two = (float)(first_element + second_element) / 2.0;
    } else {
        // Jika n kurang dari 2, rata-rata tidak bisa dihitung.
        // Berdasarkan contoh output, diasumsikan n akan selalu cukup.
        average_first_two = 0.0;
    }

    // 4. Mencetak hasil sesuai spesifikasi: nilai terkecil, terbesar, dan rata-rata dari elemen pertama dan kedua
    printf("%d\n", min_val);
    printf("%d\n", max_val);
    // Mencetak rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average_first_two);

    return 0; // Mengindikasikan bahwa program berakhir dengan sukses
}
