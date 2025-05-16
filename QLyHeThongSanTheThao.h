#ifndef QLHeThongSanTheThao_H
#define QLHeThongSanTheThao_H

#include "HeThongSanTheThao.h"
#include <iostream>
using namespace std;

class QlyHeThongSanTheThao
{
    //private:
    //HeThongSanTheThao* list[100]; // Danh sách sân (tối đa 100)
    //int totalFields;

    public:
    void themSan();
    void hienthi_TatCaSan();
    void sapxep_TheoGio();
    void sapxep_TheoTien();
    float tinhTongTienThuDuoc();

    void xoasan_TheoMa();
    void capnhat_GiaThue();
    void luu_DanhSachRaFile();
    void hienthi_TheoLoai();
    void thongke_SoLuongTheoLoai();
    void thongke_DoanhThuTheoLoai();
    void thongke_TheoKhoangGia();
};

#endif
