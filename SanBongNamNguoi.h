#ifndef SanBongNamNguoi_H
#define SanBongNamNguoi_H

#include "HeThongSanTheThao.h"
#include <iostream>
using namespace std;
class SanBongNamNguoi:public HeThongSanTheThao
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
    SanBongNamNguoi();

    SanBongNamNguoi(string LoaiCo, string ChieuDaiSan, string ChieuRongSan, string LoaiBong, string CoLuoi,
                    string CoHangRao, string SoLuongPhatGoc, string CoHeThongTuoiNuoc, string CameraGiamSat,
                    string CoPhongNghi, string LichThiDau, string CoWifi, string SoLuongTrongTai, string CoHeThongAmThanh, string MucDoBaoTri);
    
    virtual void input();
    virtual void output();
    virtual bool kiemTraTinhTrang();
};

#endif