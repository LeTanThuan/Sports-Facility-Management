#include "HeThongSanTheThao.h"
#include "QLyHeThongSanTheThao.h"
#include "SanBongBayNguoi.h"
#include "SanBongNamNguoi.h"
#include "SanCauLong.h"
#include "SanPickleBall.h"
using namespace std;
int main()
{
    cout<<"Hello Work";
    QLyHeThongSanTheThao QuanLy;
    QuanLy.input();
    QuanLy.themSan();
    QuanLy.hienthi_TatCaSan();
    QuanLy.sapxep_TheoGio();
    QuanLy.sapxep_TheoTien();
    cout <<"Tong tien thu duoc " << QuanLy.tinhTongTienThuDuoc() << "K\n";
    QuanLy.xoasan_TheoMa();
    QuanLy.luu_DanhSachRaFile();
    QuanLy.capNhatGiaThue();
    //QuanLy.thongke_SoLuongTheoLoai();
    QuanLy.thongke_DoanhThuTheoLoai();
    QuanLy.thongke_TheoKhoangGia();
    return 0;
}