#include "SanCauLong.h"
#include <iostream>

using namespace std;

SanCauLong::SanCauLong()
{
    this->loaiSan="";
    this->soluongCotLuoi = "";
    this->docaoCuaLuoi = "";
    this->matSan = matSan;
    this->mucChongTham = "";
    this->coThamTruot = "";
    this->soLuongVot = "";
    this->soLuongCau = "";
    this->coPhongKhoiDong = "";
    this->loaivotPhuHop = "";
    this->coPhongNghi = "";
    this->coPhongNghi = "";
    this->soluong_NguoiToiDa = "";
    this->lichsu_SuDung = "";
    this->mucdo_HuHong = "";
    this->donvi_QuanLy = "";

}
SanCauLong::SanCauLong(string loaiSan,
            string soluongCotLuoi, string docaoCuaLuoi, string matSan, string mucChongTham,
            string coThamTruot, string soLuongVot, string soLuongCau,string coPhongKhoiDong,
            string loaivotPhuHop, string coPhongNghi, string soluong_NguoiToiDa, string lichsu_SuDung,
            string mucdo_HuHong,string donvi_QuanLy)
{
    this->loaiSan=loaiSan;
    this->soluongCotLuoi = soluongCotLuoi;
    this->docaoCuaLuoi = docaoCuaLuoi;
    this->matSan = matSan;
    this->mucChongTham = mucChongTham;
    this->coThamTruot = coThamTruot;
    this->soLuongVot = soLuongVot;
    this->soLuongCau = soLuongCau;
    this->coPhongKhoiDong = coPhongKhoiDong;
    this->loaivotPhuHop = loaivotPhuHop;
    this->coPhongNghi = coPhongNghi;
    this->coPhongNghi = coPhongNghi;
    this->soluong_NguoiToiDa = soluong_NguoiToiDa;
    this->lichsu_SuDung = lichsu_SuDung;
    this->mucdo_HuHong = mucdo_HuHong;
    this->donvi_QuanLy = donvi_QuanLy;
}

void SanCauLong::input()
{

}

void SanCauLong::output()
{
    
}