#include <iostream>
#include <string>
using namespace std;

int main(){
    // Deklarasi string
    string str = "Saya sedang belajar C++!";

    // Mengakses elemen
    cout << "Karakter pertama: " << str.front() << endl;
    cout << "Karakter kedua: " << str.back() << endl;

    // Menambahkan string
    str = "Hai! " + str;
    cout << "Setelah ditambahkan: " << str << endl;

    // Menyisipkan string
    str.insert(4, "Semangat! ");
    cout << "Setelah disisipkan: " << str << endl;

    // Menghapus substring
    str.erase(0, 4);
    cout << "Setelah dihapus: " << str << endl;

    return 0;
}