#include <iostream>
using namespace std;

string convertToWords(int num) {
    string angka[] = { "nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", 
                       "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", 
                       "tujuh belas", "delapan belas", "sembilan belas" };
    string puluhan[] = { "", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", 
                         "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh" };

    if (num < 20)
        return angka[num];
    else if (num <= 99) {
        int tens = num / 10;
        int ones = num % 10;
        return puluhan[tens] + (ones != 0 ? " " + angka[ones] : "");
    } else if (num == 100)
        return "seratus";

    return "";
}

int main() {
    int num;

    // Input bilangan bulat dari 0 hingga 100
    cout << "Masukkan bilangan bulat (0 - 100): ";
    cin >> num;

    if (num < 0 || num > 100) {
        cout << "Masukkan angka dalam rentang 0 s.d. 100!" << endl;
    } else {
        // Konversi angka ke teks
        cout << "Angka " << num << " dalam bentuk tulisan: " << convertToWords(num) << endl;
    }

    return 0;
}
