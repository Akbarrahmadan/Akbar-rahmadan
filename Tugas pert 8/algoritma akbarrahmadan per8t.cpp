#include <iostream>
#include <iomanip> // untuk manipulasi output (seperti setprecision)
using namespace std;

int main() {
    double harga_barang, total_beli, diskon, total_bayar;
    int jumlah_barang;
    int diskon_persen;

    // Input
    cout << "Masukkan harga barang: ";
    cin >> harga_barang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah_barang;

    // Proses
    total_beli = harga_barang * jumlah_barang;

    if (jumlah_barang > 100) {
        diskon_persen = 15;
    } else {
        diskon_persen = 5;
    }

    diskon = total_beli * diskon_persen / 100;
    total_bayar = total_beli - diskon;

    // Output
    cout << fixed << setprecision(2); // Membuat angka desimal 2 digit
    cout << "\n--- Rincian Pembelian ---" << endl;
    cout << "Total Beli      : Rp " << total_beli << endl;
    cout << "Diskon (" << diskon_persen << "%) : Rp " << diskon << endl;
    cout << "Total Bayar     : Rp " << total_bayar << endl;

    return 0;
}

