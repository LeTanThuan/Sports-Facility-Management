#include "SanBongNamNguoi.h"
#include <iostream>
using namespace std;

//getter setter
void SanBongNamNguoi:: setLOAICO(string LoaiCo)
{
    this->LoaiCo = LoaiCo;
}
string SanBongNamNguoi:: getLOAICO()
{
    return LoaiCo;
}
void SanBongNamNguoi::setCHIEUDAISAN(string ChieuDaiSan)
{
    this->ChieuDaiSan = ChieuDaiSan;
}
string SanBongNamNguoi ::getCHIEUDAISAN()
{
    return ChieuDaiSan;
}
void SanBongNamNguoi::setCHIEURONGSAN(string ChieuRongSan)
{
    this->ChieuRongSan = ChieuRongSan;
}
string SanBongNamNguoi::getCHIEURONGSAN()
{
    return ChieuRongSan;
}
void SanBongNamNguoi :: setLOAIBONG(string LoaiBong)
{
    this->LoaiBong = LoaiBong;
}
string SanBongNamNguoi :: getLOAIBONG()
{
    return LoaiBong;
}
void SanBongNamNguoi::setCOLUOI(string CoLuoi)
{
    this->CoLuoi = CoLuoi;
}
string SanBongNamNguoi::getCOLUOI()
{
    return CoLuoi;
}
void SanBongNamNguoi :: setCOHANGRAO(string CoHangRao)
{
    this->CoHangRao = CoHangRao;
}
string SanBongNamNguoi :: getCOHANGRAO()
{
    return CoHangRao;
}
void SanBongNamNguoi :: setSOLUONGPHATGOC(string SoLuongPhatGoc)
{
    this->SoLuongPhatGoc = SoLuongPhatGoc;
}
string SanBongNamNguoi :: getSOLUONGPHATGOC()
{
    return SoLuongPhatGoc;
}
void SanBongNamNguoi :: setCOHETHONGTUOINUOC(string CoHeThongTuoiNuoc)
{
    this->CoHeThongTuoiNuoc = CoHeThongTuoiNuoc;
}
string SanBongNamNguoi :: getCOHETHONGTUOINUOC()
{
    return CoHeThongTuoiNuoc;
}
void SanBongNamNguoi :: setCAMERAGIAMSAT(string CameraGiamSat)
{
    this->CameraGiamSat = CameraGiamSat;
}
string SanBongNamNguoi :: getCAMERAGIAMSAT()
{
    return CameraGiamSat;
}
void SanBongNamNguoi :: setCOPHONGNGHI(string CoPhongNghi)
{
    this->CoPhongNghi = CoPhongNghi;
}
string SanBongNamNguoi :: getCOPHONGNGHI()
{
    return CoPhongNghi;
}
void SanBongNamNguoi :: setLICHTHIDAU(string LichThiDau)
{
    this->LichThiDau = LichThiDau;
}
string SanBongNamNguoi :: getLICHTHIDAU()
{
    return LichThiDau;
}
void SanBongNamNguoi::setCOWIFI(string CoWifi)
{
    this->CoWifi = CoWifi;
}
string SanBongNamNguoi::getCOWIFI()
{
    return CoWifi;
}
void SanBongNamNguoi::setSOLUONGTRONGTAI(string SoLuongTrongTai)
{
    this->SoLuongTrongTai = SoLuongTrongTai;
}
string SanBongNamNguoi::getSOLUONGTRONGTAI()
{
    return SoLuongTrongTai;
}
void SanBongNamNguoi::setCOHETHONGAMTHANH(string CoHeThongAmThanh)
{
    this->CoHeThongAmThanh = CoHeThongAmThanh;
}
string SanBongNamNguoi::getCOHETHONGAMTHANH()
{
    return CoHeThongAmThanh;
}
void SanBongNamNguoi::setMUCDOBAOTRI(string MucDoBaoTri)
{
    this->MucDoBaoTri = MucDoBaoTri;
}
string SanBongNamNguoi::getMUCDOBAOTRI()
{
    return MucDoBaoTri;
}
//contructor khong tham so
SanBongNamNguoi::SanBongNamNguoi()
{
    this->loaiSan = "SanBongNamNguoi";
    this->thoigian_MoCua = "6:00";
    this->thoigian_DongCua = "23:00";
    this->soNguoiToiDa= -1;
    this->LoaiCo = "Khong Xac Dinh";
    this->ChieuDaiSan = "36m";
    this->ChieuRongSan = "27m";
    this->LoaiBong = "Bong 4";
    this->CoLuoi = "Khong Xac Dinh";
    this->CoHangRao = "khong";
    this->SoLuongPhatGoc = "khong";
    this->CoHeThongTuoiNuoc = "0";
    this->CameraGiamSat = "khong";
    this->CoPhongNghi = "khong";
    this->LichThiDau = "khong";
    this->CoWifi = "Chua co";
    this->SoLuongTrongTai = "khong";
    this->CoHeThongAmThanh = "Khong Xac Dinh";
    this->MucDoBaoTri = "khong";  
}

//contructor co tham so
SanBongNamNguoi::SanBongNamNguoi(
                    string LoaiCo, string ChieuDaiSan, string ChieuRongSan, string LoaiBong,
                    string CoLuoi, string coHangRao, string soLuongPhatGoc,
                    string CoHeThongTuoiNuoc, string cameraGiamSat, string CoPhongNghi,
                    string LichThiDau, string CoWifi, string SoLuongTrongTai,
                    string CoHeThongAmThanh, string MucDoBaoTri) 
{
    this->LoaiCo = LoaiCo;
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
//ham input
void SanBongNamNguoi::input() 
{
    cout << "\n--- THONG TIN SAN BONG NAM NGUOI ---\n";
    setMaSan("SanBongNamNguoi"); 
    cout << "Ma San: " << getMaSan() << endl;
    HeThongSanTheThao::input();
    cin.ignore();
    cout << "Nhap loai co (Nhan Tao / Tu Nhien) "; 
    getline(cin, LoaiCo);
    if (LoaiCo != "Co" && LoaiCo != "Khong")
    {
        LoaiCo = "Khong";
    }
    cout << "Co luoi (Co / Khong): "; 
    getline(cin, CoLuoi);
    if (CoLuoi != "Co" && CoLuoi != "Khong")
    {
        CoLuoi = "Khong";
    }
    cout << "Co hang rao (Co / Khong): "; 
    getline(cin, CoHangRao);
    if (CoHangRao != "Co" && CoHangRao != "Khong")
    {
        CoHangRao = "Khong";
    }
    cout << "So Luong Phat Goc: "; 
    getline(cin, SoLuongPhatGoc);
    cout << "He thong tuoi nuoc (Co / Khong): "; 
    getline(cin, CoHeThongTuoiNuoc);
    if (CoHeThongTuoiNuoc != "Co" && CoHeThongTuoiNuoc != "Khong")
    {
        CoHeThongTuoiNuoc = "Khong";
    }
    cout << "Camera giam sat (Co / Khong): "; 
    getline(cin, CameraGiamSat);
    if (CameraGiamSat != "Co" && CameraGiamSat != "Khong")
    {
        CameraGiamSat = "Khong";
    }
    cout << "Phong nghi (Co / Khong): "; 
    getline(cin, CoPhongNghi);
    if (CoPhongNghi != "Co" && CoPhongNghi != "Khong")
    {
        CoPhongNghi = "Khong";
    }
    cout << "Lich thi dau: "; 
    getline(cin, LichThiDau);
    cout << "Co wifi (Co / Khong): "; 
    getline(cin, CoWifi);
    if (CoWifi != "Co" && CoWifi != "Khong")
    {
        CoWifi = "Khong";
    }
    cout << "So luong trong tai: "; 
    getline(cin, SoLuongTrongTai);
    cout << "He thong am thanh (Co / Khong): "; 
    getline(cin, CoHeThongAmThanh);
    if (CoHeThongAmThanh != "Co" && CoHeThongAmThanh != "Khong")
    {
        CoHeThongAmThanh = "Khong";
    }
    cout << "Muc do bao tri (tot/can sua chua): "; 
    getline(cin, MucDoBaoTri);
    if (MucDoBaoTri != "Co" && MucDoBaoTri != "Khong")
    {
        MucDoBaoTri = "Khong xac dinh";
    }
}

//ham output
void SanBongNamNguoi::output() 
{
    cout << "\n--- THONG TIN SAN BONG NAM NGUOI---\n";
    HeThongSanTheThao::output();
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
}