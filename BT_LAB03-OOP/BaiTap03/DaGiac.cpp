#include "DaGiac.h"
#include <iostream>
using namespace std;

DaGiac::DaGiac(int soDinh) : n(soDinh) {
    Dinh = new Diem[n];
}

DaGiac::~DaGiac() {
    delete[] Dinh;
}

void DaGiac::Nhap() {
    for (int i = 0; i < n; i++) {
        float x, y;
        cout << "Nhap toa do dinh thu " << i + 1 << "(Hoanh do, Tung do): ";
        cin >> x >> y;
        Dinh[i] = Diem(x, y);
    }
}

void DaGiac::Xuat() const {
    for (int i = 0; i < n; i++) {
        cout << "Dinh thu " << i + 1 << ": ";
        Dinh[i].Xuat();
    }
}

void DaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < n; i++) {
        Dinh[i].TinhTien(dx, dy);
    }
}

void DaGiac::PhongTo(float x) {
    for (int i = 0; i < n; i++) {
        Dinh[i].PhongToThuNho(x);
    }
}

void DaGiac::ThuNho(float x) {
    if (x != 0) {
        PhongTo((float)(1.0/ x));
    }
    else {
        cout << "Ti le thu nho khong hop le." << endl;
    }
}

void DaGiac::Quay(float goc) {
    for (int i = 0; i < n; i++) {
        Dinh[i].Quay(goc);
    }
}
