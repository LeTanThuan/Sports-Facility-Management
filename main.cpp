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
        cout <<"\n4. Sap xep theo so gio choi";
        cout <<"\n5. Sap xep theo gia thue";
        cout <<"\n6. Tinh tong doanh thu";
        cout <<"\n7. Xoa san theo ID";
        cout <<"\n8. Luu danh sach vao file";
        cout <<"\n9. Cap nhat gia thue theo ID";
        cout <<"\n10. Hien thi san theo loai";
        cout <<"\n11. Thong ke doanh thu theo loai";
        cout <<"\n12. Thoat";
        cout <<"\n================================";
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
                quanLySan.sapxep_TheoGio();
                break;
            case 5:
                quanLySan.sapxep_TheoTien();
                break;
            case 6:
                cout <<"Tong doanh thu: " << quanLySan.tinhTongTienThuDuoc() << "K\n";
                break;
            case 7:
                quanLySan.xoasan_TheoMa();
                break;
            case 8:
                quanLySan.luu_DanhSachRaFile();
                break;
            case 9:
                quanLySan.capNhatGiaThue();
                break;
            case 10:
                quanLySan.hienThiTheoLoai();
                break;
            case 11:
                quanLySan.thongke_DoanhThuTheoLoai();
                break;
            case 12:
                cout <<"Thoat chuong trinh!";
                break;
            default:
                cout <<"Lua chon khong hop le, vui long chon lai!";
        }
    } while (luaChon != 12);
    return 0;
}