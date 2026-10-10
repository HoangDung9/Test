#include <iostream>
using namespace std;

// Ham template: Tu dong nhan dien kieu du lieu (int, float, double...)
template <typename T>
T tinhTong(T a, T b) {
    return a + b;
}

int main() {
    // Tinh tong 2 so nguyen
    cout << "Tong so nguyen: " << tinhTong(5, 7) << endl;

    // Tinh tong 2 so thap phan
    cout << "Tong so thuc:   " << tinhTong(3.5, 4.2) << endl;

    return 0;
}