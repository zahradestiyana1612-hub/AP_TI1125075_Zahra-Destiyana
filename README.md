# AP_TI1125075_Zahra-Destiyana

Nama  : Zahra Destiyana

NIM   : TI1125075

Kelas : TI12D

Cara Kerja Program Kasir Sederhana (C++)

Program ini merupakan aplikasi kasir sederhana yang dibuat menggunakan bahasa pemrograman C++. Program ini menerapkan konsep fungsi dan prosedur untuk membuat program lebih terstruktur, rapi, dan mudah dipahami.

⚙️ Alur Kerja Program Secara Lengkap

1. Program dijalankan
Saat program dijalankan, sistem akan masuk ke fungsi utama (main function) sebagai titik awal eksekusi program. Semua proses akan dimulai dari sini.

2. Menampilkan judul program
Program akan menampilkan judul “PROGRAM KASIR SEDERHANA” di layar sebagai informasi awal kepada pengguna bahwa program sudah berjalan.

3. Input data dari pengguna
Selanjutnya program akan meminta pengguna memasukkan data berupa:
- Nama barang
- Harga barang
- Jumlah barang yang dibeli

Data ini akan disimpan ke dalam variabel dan digunakan untuk proses perhitungan selanjutnya.

4. Proses perhitungan total belanja
Program akan menghitung total belanja dengan cara mengalikan harga barang dengan jumlah barang yang dibeli.

Rumus:
Total = Harga × Jumlah
Contoh:
Harga = 5.000
Jumlah = 3
Total = 15.000

5. Proses pengecekan diskon
Setelah total belanja didapat, program akan melakukan pengecekan kondisi untuk menentukan diskon.

Ketentuan diskon:
- Jika total belanja ≥ 100.000 → mendapatkan diskon 10%
- Jika total belanja < 100.000 → tidak mendapatkan diskon (0%)
  
Diskon dihitung berdasarkan persentase dari total belanja.

6. Menghitung total pembayaran akhir
Setelah diskon dihitung (jika ada), program akan menghitung jumlah yang harus dibayar oleh pengguna.
Rumus:
Total Bayar = Total Belanja - Diskon

Contoh:
Total = 150.000
Diskon = 15.000
Total Bayar = 135.000

7. Menampilkan hasil akhir (struk pembelian)

Setelah semua proses selesai, program akan menampilkan hasil dalam bentuk struk sederhana yang berisi:

- Total belanja
- Besar diskon
- Total yang harus dibayar

Struk ini merupakan output akhir dari program kasir.

🧩 Konsep Pemrograman yang Digunakan

✔ Prosedur
Digunakan untuk menampilkan informasi (judul program). Prosedur tidak mengembalikan nilai, hanya menjalankan perintah.

✔ Fungsi
Digunakan untuk melakukan perhitungan, seperti:
Menghitung total belanja
Menghitung diskon
Fungsi akan mengembalikan nilai hasil perhitungan.

✔ Struktur Program (Main Function)
Main function berfungsi sebagai pengatur alur program, mulai dari input data, proses perhitungan, hingga output hasil.

🔁 Alur Singkat Program
- Program mulai
- Tampilkan judul
- Input data barang
- Hitung total belanja
- Cek diskon
- Hitung total bayar
- Tampilkan struk

🎯 Kesimpulan
Program kasir sederhana ini membantu memahami bagaimana:
- Input data diproses
- Perhitungan dilakukan menggunakan fungsi
- Prosedur digunakan untuk menampilkan informasi

Alur program berjalan dari input → proses → output
Program ini juga melatih pemahaman dasar pemrograman terstruktur agar kode lebih rapi, efisien, dan mudah dikembangkan
