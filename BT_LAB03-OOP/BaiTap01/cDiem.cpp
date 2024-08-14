#include "cDiem.h"

void Diem::Xuat() {
	cout << "( " << iHoanh << "," << iTung << " )\n";
};

int Diem::GetTungDo() {
	return iTung;
}

int Diem::GetHoanhDo() {
	return iHoanh;
}

void Diem::SetTungDo(int x) {
	iTung = x;
}

void Diem::SetHoanhDo(int x) {
	iHoanh = x;
}

void Diem::TinhTien(int x,int y) {
	iTung += y;
	iHoanh += x;
}
