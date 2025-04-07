#include <bits/stdc++.h>
#include "PhanSo.h"
using namespace std;

int main()
{
    PhanSo p1, p2, result;
    cout<< "Nhap phan so thu 1" << endl;
    p1.Nhap();
    cout<< "Nhap phan so thu 2" << endl;
    p2.Nhap();
    cout << "Tong : ";
    result = p1.Tong(p2);
    result.Xuat();
    cout << "Hieu : ";
    result = p1.Hieu(p2);
    result.Xuat();
    cout << "Tich : ";
    result = p1.Tich(p2);
    result.Xuat();
    cout << "Thuong : ";
    result = p1.Thuong(p2);
    result.Xuat();
    p1.SoSanh(p2);
    return 0;
}
/*Mẫu Input và Output
Nhap phan so thu 1
Nhap phan so dang a/b : 1/2
Nhap phan so thu 2
Nhap phan so dang a/b : 3/0
Mau so khong the bang 0! Moi nhap lai
Nhap phan so dang a/b : 3/4
Tong : 5/4
Hieu : 1/-4
Tich : 3/8
Thuong : 2/3
Phan so lon hon la 3/4
Phan so nho hon la 1/2

Nhap phan so thu 1
Nhap phan so dang a/b : 2.56/3
Nhap phan so thu 2
Nhap phan so dang a/b : 5.4/3.2
Tong : 3049/1200
Hieu : -1001/1200
Tich : 36/25
Thuong : 1024/2025
Phan so lon hon la 5.4/3.2
Phan so nho hon la 2.56/3
*/
