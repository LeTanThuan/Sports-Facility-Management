#ifndef SANPICKLEBALL_H
#define SANPICKLEBALL_H

#include "HeThongSanTheThao.h"
#include <iostream>
using namespace std;

class SanPickleBall:public HeThongSanTheThao
{
private:
    string soluongCotLuoi;
    string docaoCuaLuoi;
    string matSan;
    string mucChongTham;
    string coThamTruot;
    string soLuongVot;
    string soLuongBong;
    string coPhongKhoiDong;
    string loaivotPhuHop;
    string coPhongNghi;
    string soluong_NguoiToiDa;
    string lichsu_SuDung;
    string mucdo_HuHong;
    string donvi_QuanLy;
public:

//contructor
SanPickleBall();

//contructor
SanPickleBall(
            string soluongCotLuoi, string docaoCuaLuoi, string matSan, string mucChongTham,
            string coThamTruot, string soLuongVot, string soLuongBong,string coPhongKhoiDong,
            string loaivotPhuHop, string coPhongNghi, string soluong_NguoiToiDa, string lichsu_SuDung,
            string mucdo_HuHong,string donvi_QuanLy);


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
void setSoLuongBong(string soLuongBong);
string getSoLuongBong();
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

virtual void  input()override;

virtual void output() override;
    
};

#endif