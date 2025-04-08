#include "GioPhutGiay.h"
#include <bits/stdc++.h>
using namespace std;

GioPhutGiay::GioPhutGiay()
{
    iGio=0;
    iPhut=0;
    iGiay=0;
}
GioPhutGiay::GioPhutGiay(int iGio,int iPhut,int iGiay)
{
    this->iGio = iGio;
    this->iPhut = iPhut;
    this->iGiay = iGiay;
}
void GioPhutGiay::Nhap(){
    //Kiểm tra tính hợp lệ
    while(true){
        iGio = 0;
        iPhut = 0;
        iGiay = 0;
        cout << "Nhap gio : ";cin>>iGio;
        cout << "Nhap phut : ";cin>>iPhut;
        cout << "Nhap giay : ";cin>>iGiay;
        if(iGio<0 || iGio>23 || iPhut < 0 || iPhut >59 || iGiay<0 || iGiay>59){
            cout << "Thoi gian nhap khong hop le ! Moi nhap lai" <<endl;
            continue;
        }
        break;
    }
}
void GioPhutGiay::TinhCongThemMotGiay(){
    if(iGiay==59){
        iGiay=0;
        iPhut += 1;
        if(iPhut>=59){
            iPhut=0;
            if(iGio==23){
               iGio=0;
            }
            else{
               iGio+=1;
            }
        }
    }
    else{
        iGiay += 1;
    }

}
void GioPhutGiay::Xuat(){
    TinhCongThemMotGiay();
    cout << "Thoi gian sau khi cong them 1 giay la ";
    cout << iGio << ":" << iPhut << ":"<<iGiay <<endl;
}
GioPhutGiay::~GioPhutGiay(){}
