#include "SanBongNamNguoi.h"
#include <iostream>

SanBongNamNguoi::SanBongNamNguoi()
{
    this->LoaiCo = "chua xac dinh";
    this->ChieuDaiSan = "Chua xac dinh";
    this->ChieuRongSan = "0";
    this->LoaiBong = "0";
    this->CoLuoi = "Chua xac dinh";
    this->CoHangRao = "khong";
    this->SoLuongPhatGoc = "khong";
    this->CoHeThongTuoiNuoc = "0";
    this->CameraGiamSat = "khong";
    this->CoPhongNghi = "khong";
    this->LichThiDau = "khong";
    this->CoWifi = "Chua co";
    this->SoLuongTrongTai = "khong";
    this->CoHeThongAmThanh = "0";
    this->MucDoBaoTri = "khong";  
}

SanBongNamNguoi::SanBongNamNguoi(
                    string loaiCo, string ChieuDaiSan, string ChieuRongSan, string LoaiBong,
                    string CoLuoi, string coHangRao, string soLuongPhatGoc,
                    string CoHeThongTuoiNuoc, string cameraGiamSat, string CoPhongNghi,
                    string LichThiDau, string CoWifi, string SoLuongTrongTai,
                    string CoHeThongAmThanh, string MucDoBaoTri) 
{
    this->LoaiCo = loaiCo;
    this->ChieuDaiSan = ChieuDaiSan;
    this->ChieuRongSan = ChieuRongSan;
    this->LoaiBong = LoaiBong;
    this->CoLuoi = CoLuoi;
    this->CoHangRao = coHangRao;
    this->SoLuongPhatGoc = SoLuongPhatGoc;
    this->CoHeThongTuoiNuoc = CoHeThongTuoiNuoc;
    this->CameraGiamSat = CameraGiamSat;
    this->CoPhongNghi = CoPhongNghi;
    this->LichThiDau = LichThiDau;
    this->CoWifi = CoWifi;
    this->SoLuongTrongTai = SoLuongTrongTai;
    this->CoHeThongAmThanh = CoHeThongAmThanh;
    this->MucDoBaoTri = MucDoBaoTri;
}

void SanBongNamNguoi::input() 
{
    cin.ignore();
    cout << "Nhap loai co: "; 
    getline(cin, LoaiCo);
    cout << "Nhap chieu dai san: "; 
    getline(cin, ChieuDaiSan);
    cout << "Nhap chieu rong san: "; 
    getline(cin, ChieuRongSan);
    cout << "Nhap loai bong: "; 
    getline(cin, LoaiBong);
    cout << "Co luoi (co/khong): "; 
    getline(cin, CoLuoi);
    cout << "Co hang rao (co/khong): "; 
    getline(cin, CoHangRao);
    cout << "So goc phat bong: "; 
    getline(cin, SoLuongPhatGoc);
    cout << "He thong tuoi nuoc (co/khong): "; 
    getline(cin, CoHeThongTuoiNuoc);
    cout << "Camera giam sat (co/khong): "; 
    getline(cin, CameraGiamSat);
    cout << "Phong nghi (co/khong): "; 
    getline(cin, CoPhongNghi);
    cout << "Lich thi dau: "; 
    getline(cin, LichThiDau);
    cout << "Co wifi (co/khong): "; 
    getline(cin, CoWifi);
    cout << "So trong tai: "; 
    getline(cin, SoLuongTrongTai);
    cout << "He thong am thanh (co/khong): "; 
    getline(cin, CoHeThongAmThanh);
    cout << "Muc do bao tri (tot/can sua chua): "; 
    getline(cin, MucDoBaoTri);
}

void SanBongNamNguoi::output() 
{
    cout << "\n--- THONG TIN SAN ---\n";
    cout << "Loai co: " << LoaiCo << endl;
    cout << "Chieu dai san: " << ChieuDaiSan << endl;
    cout << "Chieu rong san: " << ChieuRongSan << endl;
    cout << "Loai bong: " << LoaiBong << endl;
    cout << "Co luoi: " << CoLuoi << endl;
    cout << "Co hang rao: " << CoHangRao << endl;
    cout << "So goc phat bong: " << SoLuongPhatGoc << endl;
    cout << "He thong tuoi nuoc: " << CoHeThongTuoiNuoc << endl;
    cout << "Camera giam sat: " << CameraGiamSat << endl;
    cout << "Phong nghi: " << CoPhongNghi << endl;
    cout << "Lich thi dau: " << LichThiDau << endl;
    cout << "Wifi: " << CoWifi << endl;
    cout << "So trong tai: " << SoLuongTrongTai << endl;
    cout << "He thong am thanh: " << CoHeThongAmThanh << endl;
    cout << "Muc do bao tri: " << MucDoBaoTri << endl;
    //cout << "Gia thue: " << tinhGiaThue() << " VND" << endl;
}

//float tinhGiaThue()  
//{
//float gia = 500000;
//if (CoWifi == "co") gia += 30000;
///if (CoHeThongAmThanh == "co") gia += 50000;
//if (CameraGiamSat == "co") gia += 40000;
//if (LoaiCo == "co nhua") {
//   gia += 20000;
//} else if (LoaiCo == "co thiet") {
//    gia += 30000;
//}
//    return gia;
//}

bool SanBongNamNguoi::kiemTraTinhTrang() 
{
    return MucDoBaoTri == "tot";
}
/*
void xuatLichThiDau() const {
    cout << "Lich thi dau: " << LichThiDau << endl;
}

void baoTriSan() {
    cout << "Dang bao tri san..." << endl;
    MucDoBaoTri = "tot";
}

void hienThiLichSan() const {
    cout << "Lich thi dau cua san: " << LichThiDau << endl;
}

void kiemTraHeThongDien() const {
    cout << "He thong dien hoat dong binh thuong." << endl;
}*/