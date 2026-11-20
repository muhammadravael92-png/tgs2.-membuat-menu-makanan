#include <iostream>
using namespace std;

int main() {
    int menu, jumlah, total;
    char ulang;

    do {
        cout << "\n=== MINI KASIR ===\n";
        cout << "1. Soto  - Rp15000\n";
        cout << "2. Rawon - Rp20000\n";
        cout << "Pilih menu: ";
        cin >> menu;

        cout << "Jumlah: ";
        cin >> jumlah;

        if (menu == 1)
            total = 15000 * jumlah;
        else if (menu == 2)
            total = 20000 * jumlah;
        else {
            cout << "Menu tidak tersedia!\n";
            continue;
        }

        cout << "Total bayar: Rp" << total << endl;
        cout << "Transaksi lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih!\n";
    return 0;
}
