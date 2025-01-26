# Kalkulator dengan Pemrograman Modular

Proyek ini adalah sebuah kalkulator sederhana yang dibuat menggunakan konsep **pemrograman modular** dalam C++. Tujuan dari proyek ini adalah untuk mempelajari cara memisahkan kode menjadi modul-modul yang independen, seperti file header (`.h`) dan file sumber (`.cpp`), serta memahami cara mengorganisir kode dengan baik.

---

## Fitur
- **Operasi Aritmatika Dasar**:
  - Penjumlahan (`+`)
  - Pengurangan (`-`)
  - Perkalian (`*`)
  - Pembagian (`/`)
- **Input Pengguna**: Pengguna dapat memasukkan dua angka untuk dioperasikan.
- **Output Hasil**: Hasil operasi ditampilkan ke layar.

---

## Struktur Direktori
Berikut adalah struktur direktori proyek ini:

```bash
Calculator-dengan-Pemrograman-Modular/
├── include/
│ ├── input.h
│ ├── operation.h
│ └── output.h
├── src/
│ ├── calculator.cpp
│ ├── input.cpp
│ ├── operations.cpp
│ └── output.cpp
├── .gitignore
├── makefile
└── README.md
```


### Penjelasan Struktur Direktori
- **`include/`**: Berisi file header (`.h`) yang mendeklarasikan fungsi dan kelas.
  - `input.h`: Deklarasi fungsi untuk mengambil input dari pengguna.
  - `operation.h`: Deklarasi fungsi untuk operasi aritmatika.
  - `output.h`: Deklarasi fungsi untuk menampilkan hasil.
- **`src/`**: Berisi file sumber (`.cpp`) yang mengimplementasikan fungsi yang dideklarasikan di file header.
  - `calculator.cpp`: File utama yang menjalankan program.
  - `input.cpp`: Implementasi fungsi input.
  - `operations.cpp`: Implementasi fungsi operasi aritmatika.
  - `output.cpp`: Implementasi fungsi output.
- **`.gitignore`**: File untuk mengabaikan file tertentu saat menggunakan Git.
- **`makefile`**: File untuk mengotomatisasi proses kompilasi.
- **`README.md`**: Dokumentasi proyek (file ini).

---

## Cara Mengkompilasi dan Menjalankan Program

### Persyaratan
- Compiler C++ (misalnya, `g++`)
- Terminal atau command prompt

### Langkah-langkah
1. **Clone repositori** (jika menggunakan Git):
   ```bash
   git clone https://github.com/username/Calculator-dengan-Pemrograman-Modular.git
   cd Calculator-dengan-Pemrograman-Modular
   ``
2. **Compile Program**
    - *Jika menggunakan g++, jalankan perintah berikut:*
    ```bash
    g++ src/calculator.cpp src/input.cpp src/operations.cpp src/output.cpp -o calculator
    ``
3. **Jalankan Program**
    ```bash
    ./calculator
    ```    