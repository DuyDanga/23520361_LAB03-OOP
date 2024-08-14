#include "Diem.h"
#include <cmath>
Diem::Diem() : fHoanh(0), fTung(0) {}
Diem::Diem(float Hoanh, float Tung) : fHoanh(Hoanh), fTung(Tung) {}
Diem::Diem(const Diem& x) : fHoanh(x.fHoanh), fTung(x.fTung) {}

void Diem::Xuat() const {
    cout << "(" << fHoanh << ", " << fTung << ")" << endl;
}

void Diem::TinhTien(float dx, float dy) {
    fHoanh += dx;
    fTung += dy;
}

void Diem::PhongToThuNho(float x) {
    fHoanh *= x;
    fTung *= x;
}

void Diem::Quay(float goc) {
    float rad = (float)(goc * 3.14 / 180.0);
    float xNew = fHoanh * cos(rad) - fTung * sin(rad);
    float yNew = fHoanh * sin(rad) + fHoanh * cos(rad);
    fHoanh = xNew;
    fTung = yNew;
}
