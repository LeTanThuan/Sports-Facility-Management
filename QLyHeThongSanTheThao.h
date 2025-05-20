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
    //ham khuyen mai
    float tinhKhuyenMai(float giaThue, int soGioChoi);
    //ham tinh tong tien thu duoc
    float tinhTongTienThuDuoc();
    //ham xoa san theo ma
    void xoasan_TheoMa();
    //ham luu danh sach ra file
    void luu_DanhSachRaFile();
    //ham cap nhat gia thue theo id
    void capNhatGiaThue();
    //ham hien thi danh sach san theo loai
    void hienThiTheoLoai();
    //ham dem so luong san theo loai
    int demSoSanTheoLoai(string loai);
    //ham thong ke so luong san theo loai
    void thongke_SoLuongTheoLoai();
    //ham thong ke doanh thu theo loai san
    void thongke_DoanhThuTheoLoai();
    //thong ke theo khoang gia
    void thongke_TheoKhoangGia();
    //Tra Cuu Thoi Gian Hoat Dong
    void traCuuThoiGianHoatDong();

};

#endif
