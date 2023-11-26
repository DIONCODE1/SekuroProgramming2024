#include <iostream>

class LinearLine {
private:
    float x1, y1, x2, y2;

public:
    LinearLine(float x1, float y1, float x2, float y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    float gradient() {
        return (y2 - y1) / (x2 - x1);
    }

    float y_intercept() {
        return y1 - gradient() * x1;
    }

    void operator+(float a) {
        // Menggeser garis linear sejauh a pada sumbu x
        x1 += a;
        x2 += a;
    }

    void printEquation() {
        std::cout << "y = " << gradient() << "x + " << y_intercept() << std::endl;
    }

    // Getter untuk nilai x1, y1, x2, dan y2
    float getX1() const { return x1; }
    float getY1() const { return y1; }
    float getX2() const { return x2; }
    float getY2() const { return y2; }
};

int main() {
    LinearLine line(1.0f, 8.0f, 2.0f, 3.0f);

    // Print nilai member data
    std::cout << "(x1, y1) = (" << line.getX1() << ", " << line.getY1() << ")" << std::endl;
    std::cout << "(x2, y2) = (" << line.getX2() << ", " << line.getY2() << ")" << std::endl;

    // Hitung dan print gradient dan y_intercept
    std::cout << "gradient = " << line.gradient() << std::endl;
    std::cout << "y_intercept = " << line.y_intercept() << std::endl;

    // Print persamaan garis
    line.printEquation();

    int a = 3;
    // Geser garis sejauh a
    line + a;

    // Print persamaan garis setelah digeser
    std::cout << "Setelah digeser sejauh " << a << ", didapatkan persamaan baru:" << std::endl;
    line.printEquation();

    return 0;
}
