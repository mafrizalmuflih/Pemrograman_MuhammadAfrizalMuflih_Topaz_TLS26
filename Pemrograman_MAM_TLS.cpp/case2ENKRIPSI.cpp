#include <iostream>
using namespace std;

int main() {
    char pesan[100];
    cout << "Masukkan pesan aseli (dalam huruf kapital): ";
    cin >> pesan;

    char hasil[100];

    // Huruf pertama tidak berubah
    hasil[0] = pesan[0];

    int i = 1;
    while (pesan[i] != '\0') {
        int nilai_sekarang = pesan[i] - 'A' + 1;
        int nilai_sebelum = pesan[i - 1] - 'A' + 1;
        int nilai_baru = nilai_sekarang + nilai_sebelum;

        if (nilai_baru > 26) {
            nilai_baru = nilai_baru - 26;
        }

        hasil[i] = nilai_baru - 1 + 'A';

        i++;
    }

    hasil[i] = '\0';

    cout << "Pesan Enkripsi: " << hasil << endl;

    return 0;
}