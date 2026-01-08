#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah;
    char ulang;
    int harga = 50000;
    int total;

    do {
        cout << "\n==== PEMESANAN TIKET BIOSKOP ====" << endl;
        cout << "1. Avengers" << endl;
        cout << "2. Spiderman" << endl;
        cout << "3. Batman" << endl;
        cout << "Pilih film (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Anda memilih Avengers" << endl;
                break;
            case 2:
                cout << "Anda memilih Spiderman" << endl;
                break;
            case 3:
                cout << "Anda memilih Batman" << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia!" << endl;
                continue; // kembali ke menu
        }

        cout << "Masukkan jumlah tiket: ";
        cin >> jumlah;

        total = harga * jumlah;
        cout << "Total pembayaran: Rp " << total << endl;

        cout << "Apakah anda ingin memesan lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih telah membeli tiket bioskop 🎬" << endl;

    return 0;
}
