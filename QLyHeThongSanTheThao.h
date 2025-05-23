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
    // destructor function
    ~QLyHeThongSanTheThao();
    // constructor without parameters
    QLyHeThongSanTheThao();
    // constructor with parameters
    QLyHeThongSanTheThao(int n);
    // input function
    void input();
    // add a new field
    void themSan();
    // function to display all courts
    void hienthi_TatCaSan();
    // function to sort the field by time
    void sapxep_TheoGio();
    // function to sort the field by price
    void sapxep_TheoTien();
    // promotion function
    float tinhKhuyenMai(float giaThue, int soGioChoi);
    // function to calculate the total revenue received
    float tinhTongTienThuDuoc();
    // function to display the field by field code
    void hienthi_SanTheoMaSan();
    // function to delete stadium by code
    void xoasan_TheoMa();
    // function to save the list to a file
    void luu_DanhSachRaFile();
    // function to update rental price by id
    void capNhatGiaThue();
    // function to display the list of courts by type
    void hienThiTheoLoai();
    // function to count the number of courts by type
    int demSoSanTheoLoai(string loai);
    void thongke_SoLuongTheoLoai();
    // revenue statistics function by type of court
    void thongke_DoanhThuTheoLoai();
    // statistical function by price range
    void thongke_TheoKhoangGia();
    // function to lookup active time
    void traCuuThoiGianHoatDong();

};

#endif
