#include "ThiSinh.h"
#include <iostream>
using namespace std;

int main() {
    string MSSV = "23520361";
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore();  

    ThiSinh* danhSach = new ThiSinh[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin thi sinh thu " << i + 1 << ":" << endl;
        danhSach[i].Nhap();
    }

    cout << "\nCac thi sinh co tong diem lon hon 15:" << endl;
    for (int i = 0; i < n; i++) {
        if (danhSach[i].Tong() > 15) {
            danhSach[i].Xuat();
            cout << endl;
        }
    }

    int viTriMax = 0;
    for (int i = 1; i < n; i++) {
        if (danhSach[i].Tong() > danhSach[viTriMax].Tong()) {
            viTriMax = i;
        }
    }
    if (danhSach[viTriMax].getMSSV() != MSSV) {
        cout << "\nKhong co thi sinh nao co MSSV " << MSSV << " va diem cao nhat." << endl;
        cout << "Gia lap thong tin thi sinh co MSSV " << MSSV << " voi tong diem cao nhat:" << endl;
    }
    else {
        cout << "Thi sinh co tong diem cao nhat va MSSV cua ban:" << endl;
        danhSach[viTriMax].Xuat();
    }

    delete[] danhSach;

    return 0;
}
