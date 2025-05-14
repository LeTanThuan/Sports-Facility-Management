#ifndef SBBayNguoi_H
#define SanCauLong_H

#include <HeThongSanTheThao.h>
using namespace std;

class SanBongBayNguoi:public HeThongSanTheThao
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
SanBongBayNguoi();
SanBongBayNguoi(string loaiSan,
                string soluongCotLuoi, string docaoCuaLuoi, string matSan, string mucChongTham,
                string coThamTruot, string soLuongVot, string soLuongCau,string coPhongKhoiDong,
                string loaivotPhuHop, string coPhongNghi, string soluong_NguoiToiDa, string lichsu_SuDung, string mucdo_HuHong,string donvi_QuanLy);

virtual void  input();

virtual void output();
    
};

#endif