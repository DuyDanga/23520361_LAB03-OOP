#include "ThiSinh.h"

void ThiSinh::Nhap() {
    cout << "Nhap ten: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    getline(cin, MSSV);
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;
    cout << "Nhap diem Toan: ";
    cin >> fToan;
    cout << "Nhap diem Van: ";
    cin >> fVan;
    cout << "Nhap diem Anh: ";
    cin >> fAnh;
    cin.ignore();  
}

void ThiSinh::Xuat() const {
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem Toan: " << fToan << endl;
    cout << "Diem Van: " << fVan << endl;
    cout << "Diem Anh: " << fAnh << endl;
}

float ThiSinh::Tong() const {
    return fToan + fVan + fAnh;
}

string ThiSinh::getMSSV() {
    return MSSV;
}