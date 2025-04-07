#include <bits/stdc++.h>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc sp1, sp2,sp;
    cout << "Nhap so phuc thu 1" << endl;
    sp1.Nhap();
    cout << "Nhap so phuc thu 2" << endl;
    sp2.Nhap();
    cout << "Tong : ";
    sp = sp1.Tong(sp2);
    sp.Xuat();
    cout << "Hieu : ";
    sp = sp1.Hieu(sp2);
    sp.Xuat();
    cout << "Tich : ";
    sp = sp1.Tich(sp2);
    sp.Xuat();
    cout << "Thuong : ";
    sp = sp1.Thuong(sp2);
    sp.Xuat();
    return 0;
}
/*
Nhap so phuc thu 1
Nhap phan thuc : 2
Nhap phan ao : 3
Nhap so phuc thu 2
Nhap phan thuc : 4
Nhap phan ao : 3.5
Tong : 6+6.5i
Hieu : -2-(-0.5)i
Tich : -2.5+19i
Thuong : 0.0943878+0.0255102i
*/
