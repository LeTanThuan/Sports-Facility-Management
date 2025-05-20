#include "HeThongSanTheThao.h"
#include "QLyHeThongSanTheThao.h"
#include "SanBongBayNguoi.h"
#include "SanBongNamNguoi.h"
#include "SanCauLong.h"
#include "SanPickleBall.h"
using namespace std;
int main()
{
    QLyHeThongSanTheThao quanLySan;
    int luaChon;
    
    do {
        cout <<"\n===== MENU QUAN LY SAN =====";
        cout <<"\n1. Nhap danh sach san";
        cout <<"\n2. Them san moi";
        cout <<"\n3. Hien thi danh sach san";
        cout <<"\n4. Hien thi san theo ma san";
        cout <<"\n5. Sap xep theo so gio choi";
        cout <<"\n6. Sap xep theo gia thue";
        cout <<"\n7. Tinh tong doanh thu";
        cout <<"\n8. Xoa san theo ma san";
        cout <<"\n9. Luu danh sach vao file";
        cout <<"\n10. Cap nhat gia thue theo ma san";
        cout <<"\n11. Hien thi san theo loai";
        cout <<"\n12. Thong ke doanh thu theo loai";
        cout <<"\n13. Thong ke so luong theo loai";
        cout <<"\n14. Thong ke theo khoang gia";
        cout <<"\n15. Tra cuu thoi gian hoat dong cua tung san";
        cout <<"\n16. Thoat";
        cout <<"\nNhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
            case 1:
                quanLySan.input();
                break;
            case 2:
                quanLySan.themSan();
                break;
            case 3:
                quanLySan.hienthi_TatCaSan();
                break;
            case 4:
                quanLySan.hienthi_SanTheoMaSan();
            case 5:
                quanLySan.sapxep_TheoGio();
                break;
            case 6:
                quanLySan.sapxep_TheoTien();
                break;
            case 7:
                cout <<"Tong doanh thu: " << quanLySan.tinhTongTienThuDuoc() << "K\n";
                break;
            case 8:
                quanLySan.xoasan_TheoMa();
                break;
            case 9:
                quanLySan.luu_DanhSachRaFile();
                break;
            case 10:
                quanLySan.capNhatGiaThue();
                break;
            case 11:
                quanLySan.hienThiTheoLoai();
                break;

            case 12:
                quanLySan.thongke_DoanhThuTheoLoai();
                break;
            case 13:
                quanLySan.thongke_SoLuongTheoLoai();
                break;
            case 14:
                quanLySan.thongke_TheoKhoangGia();
                break;
            case 15:
                quanLySan.traCuuThoiGianHoatDong();
            case 16:
                cout <<"Thoat chuong trinh!";
                break;
            default:
                cout <<"Lua chon khong hop le, vui long chon lai!";
        }
    } while (luaChon != 16);
    return 0;
}