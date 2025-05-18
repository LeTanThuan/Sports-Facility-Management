#ifndef QLYHETHONGSANTHEThAO_H
#define QLYHETHONGSANTHEThAO_H

#include "HeThongSanTheThao.h"
#include "SanBongBayNguoi.h"
#include "SanBongNamNguoi.h"
#include "SanCauLong.h"
#include "SanPickleBall.h"

#include <iostream>
using namespace std;

class QLyHeThongSanTheThao
{
    private:
    HeThongSanTheThao* list[100];
    int n;
    int choose;

    public:
    ~QLyHeThongSanTheThao();
    QLyHeThongSanTheThao();
    QLyHeThongSanTheThao(int n);
    
    void input();
    void themSan();
    void hienthi_TatCaSan();
    void sapxep_TheoGio();
    void sapxep_TheoTien();
    float tinhTongTienThuDuoc();
    void xoasan_TheoMa();
    //void capnhat_GiaThue();
    void luu_DanhSachRaFile();
    void capNhatGiaThue();
    void demSoSanTheoLoai(string loai);
    void hienThiTheoLoai();
    //void thongke_SoLuongTheoLoai();
    void thongke_DoanhThuTheoLoai();
    void thongke_TheoKhoangGia();
};

#endif
