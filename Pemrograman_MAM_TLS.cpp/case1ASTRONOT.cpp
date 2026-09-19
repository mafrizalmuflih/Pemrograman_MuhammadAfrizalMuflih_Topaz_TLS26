#include <iostream>
using namespace std;

int main() {
    int N, K;
    cout << "Masukkan jumlah astronot (N): ";
    cin >> N;
    cout << "Masukkan nilai awal K: ";
    cin >> K;

    int ada[100];
    for (int i = 1; i <= N; i++) {
        ada[i] = 1;
    }

    int posisi = 1;
    int sisa = N;

    cout << "Urutan eliminasi: ";

    while (sisa > 1) {
        int hitung = 0;

        while (hitung < K) {
            if (ada[posisi] == 1) {
                hitung++;
            }
            if (hitung < K) {
                posisi++;
                if (posisi > N) posisi = 1;
            }
        }

        ada[posisi] = 0;
        cout << posisi << " ";
        sisa--;

        // Ganti nilai K sesuai aturan
        if (posisi % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1; 
        }
        if (K < 2) K = 2;

        if (sisa > 1) {
            do {
                posisi++;
                if (posisi > N) posisi = 1;
            } while (ada[posisi] == 0);
        }
    }

    // Cari 1 astronot yang tersisa
    for (int i = 1; i <= N; i++) {
        if (ada[i] == 1) {
            cout << "\nTerakhir bertahan: " << i << endl;
        }
    }

    return 0;
}