#ifndef SanBongBayNguoi_H
#define SanBongBayNguoi_H

#include "HeThongSanTheThao.h"
#include <iostream>
using namespace std;
class SanBongBayNguoi:public HeThongSanTheThao
{
    private:
        string LoaiCo;
        string ChieuDaiSan;
        string ChieuRongSan;
        string LoaiBong;
        string CoLuoi;
        string CoHangRao;
        string SoLuongPhatGoc;
        string CoHeThongTuoiNuoc;
        string CameraGiamSat;
        string CoPhongNghi;
        string LichThiDau;
        string CoWifi;
        string SoLuongTrongTai;
        string CoHeThongAmThanh;
        string MucDoBaoTri;
    public:
    SanBongBayNguoi();

    SanBongBayNguoi(string LoaiCo, string ChieuDaiSan, string ChieuRongSan, string LoaiBong, string CoLuoi,
                    string CoHangRao, string SoLuongPhatGoc, string CoHeThongTuoiNuoc, string CameraGiamSat,
                    string CoPhongNghi, string LichThiDau, string CoWifi, string SoLuongTrongTai, string CoHeThongAmThanh, string MucDoBaoTri);
    
    virtual void input();
    virtual void output();
    virtual bool kiemTraTinhTrang();
};

#endif