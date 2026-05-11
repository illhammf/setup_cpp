# 🚀 Setup C++ di Visual Studio Code (Windows)
Tutorial lengkap setup bahasa **C++** di **Visual Studio Code**
menggunakan **MSYS2 + MinGW GCC** Compiler pada Windows.

---

## 📥 1. Download MSYS2
Download installer MSYS2 berikut:
```text
https://github.com/msys2/msys2-installer/releases/download/2026-03-22/msys2-x86_64-20260322.exe 
```

Setelah selesai:
- Install seperti biasa
- Klik Next terus sampai selesai

---

## 🖥️ 2. Buka MSYS2 UCRT64
Setelah install selesai, cari dan buka aplikasi:

**MSYS2 UCRT64**

⚠️ Jangan pilih MSYS biasa.

---

## 🔄 3. Update Package Manager

Jalankan command berikut:
```sh
pacman -Syu
```

Jika terminal meminta ditutup:
- tutup terminal
- buka lagi MSYS2 UCRT64

---

## 🛠️ 4. Install Compiler C++
Setelah terminal dibuka kembali, jalankan:
```sh
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

Jika muncul pilihan:
- tekan **Enter**
- lalu ketik:
**Y**

Tunggu proses install selesai.

---

## ⚙️ 5. Tambahkan Compiler ke PATH
Masuk/cari ke folder berikut didalam **File Explorer**:
```text
C:\msys64\ucrt64\bin
```

Copy path tersebut.

### Cara Menambahkan PATH
Buka **Control Panel**, lalu cari:
```text
Edit the system environment variables (Administrator/logo perisai)
```
Lalu:
```text
Environment Variables
```
Pada bagian:
```text
User variables
```
Pilih:
```text
Path
```
Klik:
```text
Edit
```
Lalu:
```text
New
```
Tambahkan:
```sh
C:\msys64\ucrt64\bin
```
Klik:
- OK
- OK
- OK
sampai keluar dari Control Panel

---

## ✅ 6. Cek Compiler
Buka:
- CMD
- PowerShell
- atau Terminal VS Code

Lalu jalankan:
```sh
g++ --version
```
Jika berhasil, akan muncul versi GCC seperti contoh:
```text
g++ (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0
Copyright (C) 2024 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

---

## 💻 7. Install Visual Studio Code

Download Visual Studio Code:
```text
https://code.visualstudio.com/ 
```

Install seperti biasa.

---

## 🧩 8. Install Extension C++
Buka VS Code → **Extensions** (Ctrl + Shift + X)

Install extension berikut:
1. C/C++ by Microsoft
2. Code Runner
3. Better C++ Syntax
4. C/C++ Compile Run
5. C/C++ Extension Pack
6. CodeLLDB
7. Prettier
8. Includeautocomplete

---

## 📂 9. Buat Project C++
Buat folder misalnya:
```text
belajar-cpp
```
Lalu buka folder tersebut di VS Code:

File > Open Folder

**⚠️ Jangan hanya membuka file .cpp saja.**

---

## 📄 10. Buat File C++

Buat file:
```text
main.cpp
```
Isi dengan kode berikut:
```sh
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!, Kamu Sekarang sedang balajar C++!" << endl;
    return 0;
}
```

---

## ▶️ 11. Compile dan Jalankan Program
Buka terminal di VS Code:
```text
Terminal > New Terminal
```

Jalankan:
```sh
g++ main.cpp -o main
```
Lalu:
```sh
main.exe
```
Output:
```sh
Hello World!, Kamu Sekarang sedang balajar C++!
```