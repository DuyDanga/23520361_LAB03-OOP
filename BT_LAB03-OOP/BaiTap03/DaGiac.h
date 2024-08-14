#pragma once
#include "Diem.h"

class DaGiac {
private:
    int n;         
    Diem* Dinh;   
public:
    DaGiac(int soDinh);
    ~DaGiac();

    void Nhap();
    void Xuat() const;
    void TinhTien(float dx, float dy);
    void PhongTo(float x);
    void ThuNho(float x);
    void Quay(float goc);
};
