#include <iostream>
#include <cmath>
#include <iomanip>

std::string gerak_2(double v, double t, double theta) {
    // Mengubah sudut theta dari derajat ke radian
    double theta_rad = 3.14 * theta / 180.0;

    // Menghitung perpindahan horizontal (x) dan vertical (y) menggunakan rumus kinematika
    double x = v * t * cos(theta_rad);
    double y = v * t * sin(theta_rad);

    // Mengembalikan koordinat akhir drone
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << x << ", " << y;
    return oss.str();
}

int main() {
    char input;

    do {
        double v, t, theta;

        // Meminta input dari pengguna
        std::cout << "Masukkan nilai v: ";
        std::cin >> v;

        std::cout << "Masukkan nilai t: ";
        std::cin >> t;

        std::cout << "Masukkan nilai theta: ";
        std::cin >> theta;

        // Memanggil fungsi gerak_2 dan menampilkan hasilnya
        std::string result = gerak_2(v, t, theta);
        std::cout << "Hasil: " << result << std::endl;

        // Meminta pengguna apakah ingin melanjutkan
        std::cout << "Apakah ingin melanjutkan (y/n)? ";
        std::cin >> input;

    } while (input == 'y' || input == 'Y');

    return 0;
}
