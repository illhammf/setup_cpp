#include <iostream>
using namespace std;
 
// Menjumlahkan angka dari 1 hingga 10
int main(){
    int sum = 0;
    for (int i = 1; i <= 10; i++){
        sum += i;
    }

    cout << "Jumlah dari 1 hingga 10 adalah " << sum << endl;
}