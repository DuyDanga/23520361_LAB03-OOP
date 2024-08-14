#pragma once
#include <iostream>
#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten;
    string MSSV;
    int iNgay, iThang, iNam;
    float fToan, fVan, fAnh;

public:
    ThiSinh() : Ten(""), MSSV(""), iNgay(1), iThang(1), iNam(2000), fToan(0.0), fVan(0.0), fAnh(0.0) {}
    void Nhap();
    void Xuat() const;
    float Tong() const;
    string getMSSV();
};

