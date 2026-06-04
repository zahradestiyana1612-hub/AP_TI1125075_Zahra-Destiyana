#include <iostream>
using namespace std;

// 1. DEKLARASI (Prototipe Fungsi)
int hitungLuas (int panjang, int lebar) ;

int main () {
    int panjang = 10;
    int lebar = 5;

    // 2. PEMANGGILAN FUNGSI
    int hasil = hitungLuas(panjang, lebar);

    cout << "Panjang: " << panjang << endl;
    cout << "Lebar: " << lebar << endl;
    cout << "Luas Persegi Panjang: " << hasil << endl;
    
    return 0;
}

//3. DEFINISI FUNGSI
int hitungLuas (int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas; // Mengembalikan hasil perhitungan
}