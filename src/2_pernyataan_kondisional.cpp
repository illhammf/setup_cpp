#include <iostream>
using namespace std;
 
// Menghitung nilai Maksimum dari dua angka
int main(){
    int a = 5;
    int b = 10;
    
    int max;
    if (a > b){
        max = a;
    } else {
        max = b;
    }

    cout << "Nilai maksimum adalah " << max << endl;
}