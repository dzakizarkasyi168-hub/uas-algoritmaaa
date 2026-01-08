#include <iostream>
using namespace std;

int main() {
    int pilihan;
    char ulang;
    int kandidatA = 0, kandidatB = 0, kandidatC = 0;

    do {
        cout << "\n==== PEMILIHAN KETUA RT ====" << endl;
        cout << "1. Kandidat A" << endl;
        cout << "2. Kandidat B" << endl;
        cout << "3. Kandidat C" << endl;
        cout << "Masukkan pilihan anda (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                kandidatA++;
                cout << "Anda memilih Kandidat A" << endl;
                break;
            case 2:
                kandidatB++;
                cout << "Anda memilih Kandidat B" << endl;
                break;
            case 3:
                kandidatC++;
                cout << "Anda memilih Kandidat C" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

        cout << "Apakah ingin memilih lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\n==== HASIL PEMILIHAN ====" << endl;
    cout << "Kandidat A: " << kandidatA << " suara" << endl;
    cout << "Kandidat B: " << kandidatB << " suara" << endl;
    cout << "Kandidat C: " << kandidatC << " suara" << endl;

    cout << "\nTerima kasih telah berpartisipasi 🗳️" << endl;

    return 0;
}
