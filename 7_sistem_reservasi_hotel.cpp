#include <iostream>
#include <string>
using namespace std;

// Membuat struktur
struct Booking {
    string roomType;
    string startDate;
    string endDate;
};

// Inisialisasi variabel jumlah kamar tunggal yang tersedia
int singleRooms = 10;
// Inisialisasi variabel jumlah kamar ganda yang tersedia
int doubleRooms = 5;

// Fungsi untuk memeriksa ketersediaan kamar berdasarkan jenis kamar
bool checkAvailability(string roomType) {
    if (roomType == "single") {
        return singleRooms > 0;
    } else if (roomType == "double") {
        return doubleRooms > 0;
    }
    return false;
}

// Fungsi untuk mengurangu jumlah kamar yang tersedia ketika kamar dipesan
void bookRoom(string roomType) {
    if (roomType == "single") {
        singleRooms--;
    } else if (roomType == "double") {
        doubleRooms;
    }
}

// Fungsi untuk mensimulasikan pemrosesan pembayaran dengan mencetak pesan
void processPayment(string customerID) {
    cout << "Pembayaran diproses untuk pelanggan: " << customerID << endl;
}

// Fungsi untuk memeriksa ketersediaan kamar, memesan kama jika tersedia, memproses pembayaran, dan mengembalikan pesan reservasi
string makeReservation(string customerID, string roomType, string startDate, string endDate) {
    if (checkAvailability(roomType)) {
        bookRoom(roomType);
        processPayment(customerID);
        return "Reservasi Berhasil";
    } else {
        return "Kamar tidak tersedia";
    }
}

// Fungsi utama
// Memulai program dengann membuat satu dengan satu reservasi dan mencetak hasilnya
int main(){
    // Membuat reservasi
    string result = makeReservation("Ilham Firmansyah", "single", "2025-06-16", "2025-06-28");
    cout << result << endl;

    return 0;
}