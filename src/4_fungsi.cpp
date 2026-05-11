#include <iostream>
using namespace std;

// Fungsi untuk menambahkan dua angka
int tambah(int a, int b){
    return a + b;
}

int main(){
    int hasil = tambah(5, 3);

    cout << "Hasil = " << hasil << endl;
    return 0;
}