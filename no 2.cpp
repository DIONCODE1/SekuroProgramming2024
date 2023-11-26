#include <iostream>
#include <iomanip>
using namespace std;
class Drone {
private:
    double x;
    double y;

public:
    Drone() : x(0), y(0) {}

    void lokasi() { // fungsi lokasi 
        cout << "(" << fixed << setprecision(2) << x << ", " << y << ")" << endl;
    }

    void gerak(double x_2, double y_2) {
        x += x_2;
        y += y_2;
    }
};

int main() {
    Drone drone;
    char continueInput;

    do {
        double x_input, y_input;
        cout << "Koordinat awal : (0,0)" << endl; 
        // Menginput nilai x dan y
        cout << "Masukkan nilai x: ";
        cin >> x_input;

        cout << "Masukkan nilai y: ";
        cin >> y_input;

        // Sistem menggerakkan drone sesuai perintah
        drone.gerak(x_input, y_input);

        // Menampilkan koordinat setelah gerak
        cout << "Koordinat setelah gerak(" << x_input << ", " << y_input << "): ";
        drone.lokasi();

        // Memeriksa apakah pengguna ingin melanjutkan
        cout << "Ketik y jika ingin menggerakkan lagi,ketik karakter lain untuk berhenti): ";
        cin >> continueInput;

    } while (tolower(continueInput) == 'y');

    return 0;
}
