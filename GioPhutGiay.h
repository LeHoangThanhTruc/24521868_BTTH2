#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H
#include <bits/stdc++.h>
using namespace std;

class GioPhutGiay
{
    public:
        GioPhutGiay();
        GioPhutGiay(int iGio,int iPhut,int iGiay);
        void Nhap();
        void Xuat();
        void TinhCongThemMotGiay();
        virtual ~GioPhutGiay();
    private:
       int iGio, iPhut, iGiay;
};

#endif // GIOPHUTGIAY_H
