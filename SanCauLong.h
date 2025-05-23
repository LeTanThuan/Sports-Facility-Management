#ifndef SANCAULONG_H
#define SANCAULONG_H

#include "HeThongSanTheThao.h"
#include <iostream>
using namespace std;

class SanCauLong:public HeThongSanTheThao
{
private:
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

//constructor without parameters
SanCauLong();

//constructor with parameters
SanCauLong(
            string soluongCotLuoi, string docaoCuaLuoi, string matSan, string mucChongTham,
            string coThamTruot, string soLuongVot, string soLuongCau,string coPhongKhoiDong,
            string loaivotPhuHop, string coPhongNghi, string soluong_NguoiToiDa, string lichsu_SuDung,
            string mucdo_HuHong,string donvi_QuanLy);

//getter and setter function
void setSoLuongCotLuoi(string soluongCotLuoi);
string getSoLuongCotLuoi();
void setDoCaoCuaLuoi(string docaoCuaLuoi);
string getDoCaoCuaLuoi();
void setMatSan(string matSan);
string getMatSan();
void setMucChongTham(string mucChongTham);
string getMucChongTham();
void setCoThamTruot(string coThamTruot);
string getCoThamTruot();
void setSoLuongVot(string soLuongVot);
string getSoLuongVot();
void setSoLuongCau(string soLuongCau);
string getSoLuongCau();
void setCoPhongKhoiDong(string coPhongKhoiDong);
string getCoPhongKhoiDong();
void setLoaivotPhuHop(string loaivotPhuHop);
string getLoaivotPhuHop();
void setCoPhongNghi(string coPhongNghi);
string getCoPhongNghi();
void setSoLuong_NguoiToiDa(string SoLuong_NguoiToiDa);
string getSoLuong_NguoiToiDa();
void setLichSu_SuDung(string lichsu_SuDung);
string getLichSu_SuDung();
void setMucDo_HuHong(string mucdo_HuHong);
string getMucDo_HuHong();
void setDonVi_QuanLy(string donvi_QuanLy);
string getDonVi_QuanLy();
//input override function
virtual void  input() override;
//output override function
virtual void output()override;

//destructor function
virtual ~SanCauLong();
};

#endif