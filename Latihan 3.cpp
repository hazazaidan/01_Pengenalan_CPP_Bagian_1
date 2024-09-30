#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input
    cout << "Masukkan angka: ";
    cin >> n;
    
    // Loop untuk mencetak pola
    for (int i = n; i >= 1; i--) {
        // Bagian angka menurun
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Cetak tanda bintang
        cout << "* ";

        // Bagian angka menanjak
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        cout << endl;  // Ganti baris setelah setiap iterasi
    }
    
    // Cetak tanda 'x' di akhir
    cout << "x" << endl;
    
    return 0;
}
