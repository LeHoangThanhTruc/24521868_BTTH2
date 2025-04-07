#include "SoPhuc.h"
#include <bits/stdc++.h>
using namespace std;
SoPhuc::SoPhuc()
{
    iThuc = 0;
    iAo = 0;
}
SoPhuc::SoPhuc(double iThuc, double iAo){
    this->iThuc = iThuc;
    this->iAo = iAo;
}
void SoPhuc::Nhap(){
    cout << "Nhap phan thuc : "; cin >> iThuc;
    cout << "Nhap phan ao : "; cin >> iAo;
}
SoPhuc SoPhuc::Tong(SoPhuc z){
    SoPhuc sp;
    sp.iThuc= iThuc+z.iThuc;
    sp.iAo= iAo+z.iAo;
    return sp;
}
SoPhuc SoPhuc::Hieu(SoPhuc z){
    SoPhuc sp;
    sp.iThuc= iThuc-z.iThuc;
    sp.iAo= iAo-z.iAo;
    return sp;
}
SoPhuc SoPhuc::Tich(SoPhuc z){
    SoPhuc sp;
    sp.iThuc= iThuc*z.iThuc - iAo*z.iAo;
    sp.iAo= iThuc*z.iAo + iAo*z.iThuc;
    return sp;
}
SoPhuc SoPhuc::Thuong(SoPhuc z){
    SoPhuc sp;
    sp.iThuc= (iThuc*z.iThuc + iAo*z.iAo)/(pow(z.iThuc,2)*pow(z.iAo,2));
    sp.iAo= (iAo*z.iThuc - iThuc*z.iAo)/(pow(z.iThuc,2)*pow(z.iAo,2));
    return sp;
}
void SoPhuc::Xuat(){
    if(iAo >= 0){
        cout << iThuc<< "+"<<iAo<<"i"<<endl;
    }
    else{
        cout << iThuc<< "-"<<"("<<iAo<<")"<<"i"<<endl;
    }
}

SoPhuc::~SoPhuc(){}
