#include"cTamGiac.h"

int main() {
    TamGiac tg;
    tg.Nhap();
    tg.Xuat();

    cout << "Tinh tien tam giac theo vector (2, 3):" << endl;
    tg.TinhTien(2, 3);
    tg.Xuat();

    cout << "Phong to tam giac voi ti le 2.0:" << endl;
    tg.PhongTo(2.0);
    tg.Xuat();

    cout << "Thu nho tam giac voi ti le 0.5:" << endl;
    tg.ThuNho(0.5);
    tg.Xuat();

    cout << "Quay tam giac quanh goc toa do voi goc 90 do:" << endl;
    tg.Quay(90);
    tg.Xuat();


	return 0;
}