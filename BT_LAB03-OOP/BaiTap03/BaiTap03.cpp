#include "DaGiac.h"
#include <iostream>
using namespace std;

int main() {
    int soDinh;
    cout << "Nhap so dinh cua da giac: ";
    cin >> soDinh;

    DaGiac daGiac(soDinh);
    daGiac.Nhap();
    daGiac.Xuat();

    cout << "Tinh tien da giac theo vector (2, 3):" << endl;
    daGiac.TinhTien(2, 3);
    daGiac.Xuat();

    cout << "Phong to da giac voi ti le 2.0:" << endl;
    daGiac.PhongTo(2.0);
    daGiac.Xuat();

    cout << "Thu nho da giac voi ti le 0.5:" << endl;
    daGiac.ThuNho(0.5);
    daGiac.Xuat();

    cout << "Quay da giac quanh goc toa do voi goc 90 do:" << endl;
    daGiac.Quay(90);
    daGiac.Xuat();

    return 0;
}
