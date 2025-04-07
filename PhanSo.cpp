#include "PhanSo.h"
#include <bits/stdc++.h>
using namespace std;
PhanSo::PhanSo(){
    iTu=0;
    iMau=1;
}
PhanSo::PhanSo(double iTu,double iMau){
    this->iTu = iTu;
    this->iMau = iMau;
}
void PhanSo::Nhap(){
    while(true){
        char dauxec;
        cout << "Nhap phan so dang a/b : ";
        cin >> iTu >>dauxec>>iMau;
        if(iMau==0){
            cout << "Mau so khong the bang 0! Moi nhap lai" << endl;
            continue;
        }
        break;
    }
}
long long PhanSo::UCLN(long long a, long long b){
    if(b==0) return a;
    return UCLN(b, a%b);
}
void PhanSo::RutGon(){
    //Nếu tử số và mẫu số đều là số thập phân
    //hoặc tử số đã nhập là số thập phân, mẫu số đã nhập là số nguyên
    //hoặc tử số đã nhập là số nguyên, mẫu số đã nhập là số thập phân
    //thì ta cần chuyển tử số và mẫu số thành số nguyên rồi mới rút gọn được
    int ucln;
    long long e = iTu;
    long long f = floor(iMau);
    long long c = ceil(iMau);
    // Dùng cách này ta có thể xử lý trường hợp tử số và mẫu số đã nhập là số nguyên nhưng có giá trị khác nhau
    // và cả trường hợp tử số hoặc mẫu số hoặc cả tử số và mẫu số là số thập phân
    if(e != f, e != c){
        long long ts = iTu*pow(10,6);
        ts = round(ts);
        long long ms = iMau*pow(10,6);
        ms = round(ms);
        ucln = UCLN(ts,ms);
        iTu = ts/ucln;
        iMau = ms/ucln;
    }
    //Trường hợp tử số và mẫu số đã nhập là số nguyên và có giá trị bằng nhau
    else{
       ucln = UCLN(iTu, iMau);
       iTu = iTu/ucln;
       iMau = iMau/ucln;
    }
}
PhanSo PhanSo::Tong(PhanSo v){
    PhanSo res;
    res.iTu = iTu*v.iMau + v.iTu*iMau;
    res.iMau = iMau*v.iMau;
    res.RutGon();
    return res;
}
PhanSo PhanSo::Hieu(PhanSo v){
    PhanSo res;
    res.iTu = iTu*v.iMau - v.iTu*iMau;
    res.iMau= iMau*v.iMau;
    res.RutGon();
    return res;
}
PhanSo PhanSo::Tich(PhanSo v){
    PhanSo res;
    res.iTu=iTu*v.iTu;
    res.iMau=iMau*v.iMau;
    res.RutGon();
    return res;
}
PhanSo PhanSo::Thuong(PhanSo v){
    PhanSo res;
    res.iTu = iTu*v.iMau;
    res.iMau = iMau*v.iTu;
    res.RutGon();
    return res;
}
void PhanSo::Xuat(){
    cout << iTu << "/" << iMau << endl;
}
PhanSo PhanSo::SoSanh(PhanSo b){
    double ps1 = iTu/iMau;
    double ps2 = b.iTu/b.iMau;
    double psMax = (ps1>ps2)?ps1:ps2;
    if(psMax==ps1){
        cout << "Phan so lon hon la "<< iTu << "/" << iMau << endl;
        cout << "Phan so nho hon la "<< b.iTu << "/" << b.iMau << endl;
    }
    else{
        cout << "Phan so lon hon la "<< b.iTu << "/" << b.iMau << endl;
        cout << "Phan so nho hon la "<< iTu << "/" << iMau << endl;
    }
}
PhanSo::~PhanSo(){}
