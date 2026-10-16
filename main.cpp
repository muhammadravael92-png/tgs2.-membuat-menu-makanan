#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pilihan, jumlah, total = 0, bayar, kembalian;
    char lanjut;

    cout << "=================================\n";
    cout << "      PROGRAM MINI KASIR         \n";
    cout << "=================================\n";

    do {
        cout << "\nDaftar Menu Makanan:\n";
        cout << "1. Soto  - Rp 15.000\n";
        cout << "2. Rawon - Rp 20.000\n";
        cout << "Pilih menu (1/2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan jumlah porsi Soto: ";
            cin >> jumlah;
            total += jumlah * 15000;
        } else if (pilihan == 2) {
            cout << "Masukkan jumlah porsi Rawon: ";
            cin >> jumlah;
            total += jumlah * 20000;
        } else {
            cout << "Pilihan tidak valid!\n";
        }

        cout << "Tambah pesanan lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "\n---------------------------------\n";
    cout << "Total Belanja       : Rp " << total << endl;
    cout << "Masukkan Uang Bayar : Rp ";
    cin >> bayar;

    if (bayar >= total) {
        kembalian = bayar - total;
        cout << "Kembalian           : Rp " << kembalian << endl;
        cout << "Terima kasih telah berbelanja!\n";
    } else {
        cout << "Uang Anda kurang! Transaksi dibatalkan.\n";
    }
    cout << "=================================\n";

    return 0;
}
