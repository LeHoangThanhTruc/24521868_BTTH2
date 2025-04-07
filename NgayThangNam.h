#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
#include <bits/stdc++.h>
using namespace std;

class NgayThangNam
{
    public:
        NgayThangNam(){};
        NgayThangNam(string date,vector<int> tachDate, int iNgay,int iThang,int iNam);
        virtual ~NgayThangNam();
        void Nhap();
        void Xuat();
        void Tach();
        string formatDate();
        void NgayThangNamTiepTheo();
    private:
        string date;
        vector<int> tachDate;
        int iNgay, iThang, iNam;
};

#endif // NGAYTHANGNAM_H
