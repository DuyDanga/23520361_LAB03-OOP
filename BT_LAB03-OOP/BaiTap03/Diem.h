#pragma once
#include <iostream>
using namespace std;

class Diem {
private:
    float fHoanh;
    float fTung;
public:
    Diem();
    Diem(float Hoanh, float  Tung);
    Diem(const Diem& x);

    void Xuat() const;

    void TinhTien(float dx, float dy);
    void PhongToThuNho(float x);
    void Quay(float goc);
};
