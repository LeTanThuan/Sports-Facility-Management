#ifndef SanCauLong_H
#define SanCauLong_H

#include "HeThongSanTheThao.h"
#include <iostream>
using namespace std;

class SanCauLong:public HeThongSanTheThao
{
private:
    string loaiSan;
    string soluongCotLuoi;
    string docaoCuaLuoi;
    string matSan;
    string mucChongTham;
    string coThamTruot;
    string soLuongVot;
    string soLuongCau;
    string coPhongKhoiDong;
    string loaivotPhuHop;
    string coPhongNghi;
    string soluong_NguoiToiDa;
    string lichsu_SuDung;
    string mucdo_HuHong;
    string donvi_QuanLy;
    

public:
//contructor
SanCauLong();

//contructor
SanCauLong(string loaiSan,
            string soluongCotLuoi, string docaoCuaLuoi, string matSan, string mucChongTham,
            string coThamTruot, string soLuongVot, string soLuongCau,string coPhongKhoiDong,
            string loaivotPhuHop, string coPhongNghi, string soluong_NguoiToiDa, string lichsu_SuDung,
            string mucdo_HuHong,string donvi_QuanLy);

virtual void  input();

virtual void output();
    
};

#endif