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
    //ham input
    void input();
    //ham them san moi
    void themSan();
    //ham hien thi tat ca cac san
    void hienthi_TatCaSan();
    //ham sap xep san theo gio
    void sapxep_TheoGio();
    //ham sap xep san theo gia tien
    void sapxep_TheoTien();
    //ham tinh tong tien thu duoc
    float tinhTongTienThuDuoc();
    //ham xoa san theo ma
    void xoasan_TheoMa();
    //void capnhat_GiaThue();
    //ham luu danh sach ra file
    void luu_DanhSachRaFile();
    // Cập nhật giá thuê sân theo ID
    void capNhatGiaThue();
    // Hiển thị danh sách sân theo loại (Bóng đá, cầu lông...)
    void hienThiTheoLoai();
    // Đếm số lượng sân theo loại (Bóng đá, cầu lông, pickleball...)
    int demSoSanTheoLoai(string loai);
    // Thống kê số lượng sân theo từng loại
    void thongke_SoLuongTheoLoai();
    // Thống kê doanh thu theo loại sân
    void thongke_DoanhThuTheoLoai();
    // Thống kê sân theo khoảng giá
    void thongke_TheoKhoangGia();
    //Tra Cuu Thoi Gian Hoat Dong
    void traCuuThoiGianHoatDong();

};

#endif
