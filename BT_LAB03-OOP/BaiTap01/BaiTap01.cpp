#include"cDiem.h"

int main() {
    Diem d1; 
    Diem d2(3, 4);
    Diem d3(d2); 

    cout << "d1: "; d1.Xuat();
    cout << "d2: "; d2.Xuat();
    cout << "d3: "; d3.Xuat();

    cout << "Hoanh do cua d2: " << d2.GetHoanhDo() << endl;
    cout << "Tung do cua d2: " << d2.GetTungDo() << endl;

    d1.SetHoanhDo(5);
    d1.SetTungDo(6);
    cout << "d1 sau khi set hoanh do va tung do: "; d1.Xuat();

    d2.TinhTien(2, 3);
    cout << "d2 sau khi tinh tien (2, 3): "; d2.Xuat();
	return 0;
}
