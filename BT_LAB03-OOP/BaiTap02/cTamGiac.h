#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class Diem {
private:
	float fHoanh;
	float fTung;
public:
    Diem() : fHoanh(0), fTung(0) {}
    Diem(int Hoanh, int Tung) : fHoanh(Hoanh), fTung(Tung) {}
    Diem(const Diem& x) :fHoanh(x.fHoanh), fTung(x.fTung) {}

    void Xuat() const {
        cout << "(" << fHoanh << ", " << fTung << ")" << endl;
    }

    int GetTungDo() const {
        return fTung;
    }

    int GetHoanhDo() const {
        return fHoanh;
    }

    void SetTungDo(int Tung) {
        fTung = Tung;
    }

    void SetHoanhDo(int Hoanh) {
        fHoanh = Hoanh;
    }

    void TinhTien(int dx, int dy) {
        fHoanh += dx;
        fTung += dy;
    }

    void PhongToThuNho(float x) {
        fHoanh = static_cast<int>(fHoanh * x);
        fTung = static_cast<int>(fTung * x);
    }

    void Quay(float goc) {
        float rad = goc * 3.14 / 180.0;
        int xNew = static_cast<int>(fHoanh * cos(rad) - fTung * sin(rad));
        int yNew = static_cast<int>(fHoanh * sin(rad) + fTung * cos(rad));
        fHoanh = xNew;
        fTung = yNew;
    }
};

class TamGiac
{
private:
	Diem A;
	Diem B;
	Diem C;
public:
	void Nhap();
	void Xuat();
    void TinhTien(float x, float y);
    void PhongTo(float x);
    void ThuNho(float x);
    void Quay(float goc);

};

