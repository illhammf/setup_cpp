#include <iostream>
#include <string>

#define PI 3.14159
#define DEBUG

using namespace std;

int main() {
    cout << "Nilai PI: " << PI << endl;

    #ifdef DEBUG
    cout << "Debug mode aktif" << endl;
    #endif

    #ifndef RELEASE
    cout << "Release mode tidak aktif" << endl;
    #endif

    return 0;
}