#include "HeThongSanTheThao.h"
#include <iostream>

using namespace std;

HeThongSanTheThao::HeThongSanTheThao() 
{
    this->maSan = "";
    this->tenSan = "";
    this->loaiSan = "";
    this->diaChi = "";
    this->dienTich = "";
    this->tinhTrang = "";
    this->giathue_TheoGio = 0;
    this->soNguoiToiDa = "";
    this->thoigian_MoCua = "";
    this->thoigian_DongCua = "";
    this->coPhongThayDo = "";
    this->coHeThongDen = "";
    this->coBaoHiem = "";
    this->nguoiQuanLy = "";
    this->sodienthoai_LienHe = "";
}

HeThongSanTheThao::HeThongSanTheThao(string maSan, string tenSan, string loaiSan, string diaChi, string dienTich, string tinhTrang,
                                    float giathue_TheoGio, string soNguoiToiDa, string thoigian_MoCua, string thoigian_DongCua,
                                    string coPhongThayDo, string coHeThongDen, string coBaoHiem, string nguoiQuanLy, string sodienthoi_LienHe)
{
    this->maSan = maSan;
    this->tenSan = tenSan;
    this->loaiSan = loaiSan;
    this->diaChi = diaChi;
    this->dienTich = dienTich;
    this->tinhTrang = tinhTrang;
    this->giathue_TheoGio = giathue_TheoGio;
    this->soNguoiToiDa = soNguoiToiDa;
    this->thoigian_MoCua = thoigian_MoCua;
    this->thoigian_DongCua = thoigian_DongCua;
    this->coPhongThayDo = coPhongThayDo;
    this->coHeThongDen = coHeThongDen;
    this->coBaoHiem = coBaoHiem;
    this->nguoiQuanLy = nguoiQuanLy;
    this->sodienthoai_LienHe = sodienthoai_LienHe;
}

void HeThongSanTheThao::input() 
{
    cout<<"EnTer maSan: ";
    cin>>this->maSan;
    cout<<"Enter Ten San: ";
    cin>>this->tenSan;
    cout<<"Enter Loai San: ";
    cin>>this->loaiSan;
    cout<<"Enter Dia Chi: ";
    cin>>this->diaChi;
}

void HeThongSanTheThao::output()
{

}
HeThongSanTheThao:: ~HeThongSanTheThao()
{

}