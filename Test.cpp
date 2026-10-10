#include <iostream>
#include <iomanip> // Thu vien de dinh dang so thap phan
using namespace std;

// Ham tinh tong 2 so nguyen
int tinhTong(int a, int b) {
    return a + b;
}

// Ham tinh hieu 2 so nguyen
int tinhHieu(int a, int b) {
    return a - b;
}

// Ham tinh tich 2 so nguyen
long long tinhTich(int a, int b) {
    return (long long)a * b; // Dung long long de tranh tran so khi nhan 2 so lon
}

// Ham tinh thuong (tra ve so thuc, kiem tra chia cho 0)
double tinhThuong(int a, int b) {
    if (b == 0) {
        cout << "Loi: Khong the chia cho 0! ";
        return 0;
    }
    return (double)a / b;
}

int main() {
    int x, y;
    cout << "Nhap so nguyen thu nhat: ";
    cin >> x;
    cout << "Nhap so nguyen thu hai: ";
    cin >> y;

    cout << "\n--- KET QUA PHEP TINH ---" << endl;
    cout << "Tong:   " << x << " + " << y << " = " << tinhTong(x, y) << endl;
    cout << "Hieu:   " << x << " - " << y << " = " << tinhHieu(x, y) << endl;
    cout << "Tich:   " << x << " * " << y << " = " << tinhTich(x, y) << endl;
    
    if (y != 0) {
        cout << fixed << setprecision(2); // Lay 2 chu so sau dau phay
        cout << "Thuong: " << x << " / " << y << " = " << tinhThuong(x, y) << endl;
    } else {
        tinhThuong(x, y);
        cout << endl;
    }

    return 0;
}