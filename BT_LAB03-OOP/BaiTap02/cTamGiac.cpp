#include "cTamGiac.h"
#include<iostream>

void TamGiac::Nhap() {
    int x, y;
    cout << "Nhap toa do dinh A (Hoanh do, Tung do): ";
    cin >> x >> y;
    A = Diem(x, y);

    cout << "Nhap toa do dinh B(Hoanh do, Tung do): ";
    cin >> x >> y;
    B = Diem(x, y);

    cout << "Nhap toa do dinh C(Hoanh do, Tung do): ";
    cin >> x >> y;
    C = Diem(x, y);
}
void TamGiac::Xuat() {
    cout << "Dinh A: "; A.Xuat();
    cout << "Dinh B: "; B.Xuat();
    cout << "Dinh C: "; C.Xuat();
}

void TamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void TamGiac::PhongTo(float x) {
    A.PhongToThuNho(x);
    B.PhongToThuNho(x);
    C.PhongToThuNho(x);
}

void TamGiac::ThuNho(float x) {
    if (x != 0) {
        PhongTo(1.0 / x);
    }
    else {
        cout << "Ti le thu nho khong hop le." << endl;
    }
}

void TamGiac::Quay(float goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}
