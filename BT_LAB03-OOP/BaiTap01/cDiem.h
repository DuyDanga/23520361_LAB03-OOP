#pragma once
#include<iostream>
using namespace std;

class Diem
{
private:
	int iHoanh, iTung;
public:
	
	Diem():iHoanh(0),iTung(0) {}

	Diem(int Hoanh, int Tung):iHoanh(Hoanh),iTung(Tung) {};

	Diem(const Diem& x):iHoanh(x.iHoanh),iTung(x.iTung) {};

	void Xuat();
	
	int GetTungDo();
	
	int GetHoanhDo();
	
	void SetTungDo(int Tung);
	
	void SetHoanhDo(int Hoanh);
	
	void TinhTien(int dx,int dy);

};

