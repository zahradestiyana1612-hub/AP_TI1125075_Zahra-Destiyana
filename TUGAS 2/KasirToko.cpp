#include <iostream>
#include <iomanip>
using namespace std;

// ================== DATA BARANG ==================
string barang[] = {"Sarden","Sabun", "Minyak", "Gula", "Beras"};
int harga[] = {12000, 5000, 24000, 19000, 13000};
int jumlahBarang = 5;

// ================== PROSEDUR TANPA PARAMETER ==================
void tampilMenu (){
    cout << "==== DAFTAR BARANG ====\n";
    for (int i = 0; i<jumlahBarang; i++) {
        cout << i+1 << "."<< barang[i] << " - Rp" << harga [i] << endl;
    }
    cout << "=======================\n";
}

// ================== PROSEDUR DENGAN PARAMETER ==================
void tampilStruk (string nama, int total, int diskon, int pajak, int bayar) {
    cout << "\n===== STRUK PEMBELIAN =====\n";
    cout << "Total Belanja : Rp" << total << endl;
    cout << "Diskon        : Rp" << diskon << endl;
    cout << "Pajak         : Rp" << pajak << endl;
    cout << "TOTAL BAYAR   : RP" << bayar << endl;
    cout << "Terima kasih sudah belanja\n"; 
}

// ================== FUNGSI DENGAN PARAMETER ==================
int hitungTotal (int harga, int jumlah){
    return harga * jumlah;
}

// ================== FUNGSI DENGAN RETURN + PARAMETER ==================
int hitungDiskon (int total){
    if (total >= 50000) {
        return total * 0.10; // diskon 10%
    } else {
        return 0;
    }
}

// ================== FUNGSI PAJAK ==================
int hitungPajak (int total) {
    return total *0.05;// pajak 5%
}

int main () {
    char ulang;

    do {
        string nama;
        int pilihan, jumlahBeli;
        int total = 0;

        cout << "\n===== TOKO SEDERHANA =====\n";
        cout << "Masukkan nama pembeli:";
        cin >> nama;

        tampilMenu (); //prosedur tanpa parameter

        cout << "Pilih barang (1-5):";
        cin >> pilihan;

        //percabangan
        if (pilihan <1 || pilihan >5) {
            cout << "Pilihan tidak valid!\n";
            continue;
        }

        cout << "Jumlah beli:";
        cin >> jumlahBeli;
        
        int subtotal = hitungTotal (harga[pilihan - 1], jumlahBeli);

        total += subtotal;

        int diskon = hitungDiskon (total);
        int pajak = hitungPajak (total);
        int bayar = total - diskon + pajak;

        tampilStruk (nama, total, diskon, pajak, bayar);

        cout << "\n ingin transaksi lagi? (y/n):";
        cin >> ulang;

    } while (ulang=='y'||ulang=='Y');

    cout <<"\n program selesai.\n";
    return 0;
}