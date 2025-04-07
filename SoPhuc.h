#ifndef SOPHUC_H
#define SOPHUC_H
#include <bits/stdc++.h>
using namespace std;

class SoPhuc
{
    public:
        SoPhuc();
        SoPhuc(double iThuc, double iAo);
        void Nhap();
        void Xuat();
        SoPhuc Tong(SoPhuc z);
        SoPhuc Hieu(SoPhuc z);
        SoPhuc Tich(SoPhuc z);
        SoPhuc Thuong(SoPhuc z);
        virtual ~SoPhuc();

    private:
        double iThuc, iAo;
};

#endif // SOPHUC_H
