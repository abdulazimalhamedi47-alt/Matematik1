#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Degiskenler
    double a_val, b_val, c_val;
    double discriminant, root1, root2;

    cout << "--- Ikinci Dereceden Denklem Cozumu ---" << endl;
    
    // Veri Girisi
    cout << "a katsayisini giriniz: "; cin >> a_val;
    cout << "b katsayisini giriniz: "; cin >> b_val;
    cout << "c katsayisini giriniz: "; cin >> c_val;

    if (a_val == 0) {
        cout << "\nHata: 'a' degeri sifir olamaz!" << endl;
    } else {
        // Delta hesaplama
        discriminant = (b_val * b_val) - (4 * a_val * c_val);
        
        cout << fixed << setprecision(2);
        cout << "\nDiskriminant (Delta): " << discriminant << endl;

        // Koklerin kontrolu
        if (discriminant > 0) {
            root1 = (-b_val + sqrt(discriminant)) / (2 * a_val);
            root2 = (-b_val - sqrt(discriminant)) / (2 * a_val);
            cout << "Sonuc: Iki farkli reel kok vardir." << endl;
            cout << "x1 = " << root1 << endl;
            cout << "x2 = " << root2 << endl;
        } 
        else if (discriminant == 0) {
            root1 = -b_val / (2 * a_val);
            cout << "Sonuc: Bir tane reel kok vardir." << endl;
            cout << "x = " << root1 << endl;
        } 
        else {
            cout << "Sonuc: Reel kok yoktur (Delta < 0)." << endl;
        }
    }

    return 0;
}
