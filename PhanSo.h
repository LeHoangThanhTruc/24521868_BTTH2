#ifndef PHANSO_H
#define PHANSO_H
#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
    public:
        PhanSo();
        PhanSo(double iTu,double iMau);
        virtual ~PhanSo();
        void Nhap();
        void Xuat();
        long long UCLN(long long a, long long b);
        void RutGon();
        PhanSo Tong(PhanSo v);
        PhanSo Hieu(PhanSo v);
        PhanSo Tich(PhanSo v);
        PhanSo Thuong(PhanSo v);
        PhanSo SoSanh(PhanSo b);
    private:
        double iTu, iMau;
};

#endif // PHANSO_H
