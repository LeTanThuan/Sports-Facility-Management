#include "SanBongBayNguoi.h"
#include <iostream>
using namespace std;

//getter setter
void SanBongBayNguoi:: setLOAICO(string LoaiCo)
{
    this->LoaiCo = LoaiCo;
}
string SanBongBayNguoi:: getLOAICO()
{
    return LoaiCo;
}
void SanBongBayNguoi::setCHIEUDAISAN(string ChieuDaiSan)
{
    this->ChieuDaiSan = ChieuDaiSan;
}
string SanBongBayNguoi ::getCHIEUDAISAN()
{
    return ChieuDaiSan;
}
void SanBongBayNguoi::setCHIEURONGSAN(string ChieuRongSan)
{
    this->ChieuRongSan = ChieuRongSan;
}
string SanBongBayNguoi::getCHIEURONGSAN()
{
    return ChieuRongSan;
}
void SanBongBayNguoi :: setLOAIBONG(string LoaiBong)
{
    this->LoaiBong = LoaiBong;
}
string SanBongBayNguoi :: getLOAIBONG()
{
    return LoaiBong;
}
void SanBongBayNguoi::setCOLUOI(string CoLuoi)
{
    this->CoLuoi = CoLuoi;
}
string SanBongBayNguoi::getCOLUOI()
{
    return CoLuoi;
}
void SanBongBayNguoi :: setCOHANGRAO(string CoHangRao)
{
    this->CoHangRao = CoHangRao;
}
string SanBongBayNguoi :: getCOHANGRAO()
{
    return CoHangRao;
}
void SanBongBayNguoi :: setSOLUONGPHATGOC(string SoLuongPhatGoc)
{
    this->SoLuongPhatGoc = SoLuongPhatGoc;
}
string SanBongBayNguoi :: getSOLUONGPHATGOC()
{
    return SoLuongPhatGoc;
}
void SanBongBayNguoi :: setCOHETHONGTUOINUOC(string CoHeThongTuoiNuoc)
{
    this->CoHeThongTuoiNuoc = CoHeThongTuoiNuoc;
}
string SanBongBayNguoi :: getCOHETHONGTUOINUOC()
{
    return CoHeThongTuoiNuoc;
}
void SanBongBayNguoi :: setCAMERAGIAMSAT(string CameraGiamSat)
{
    this->CameraGiamSat = CameraGiamSat;
}
string SanBongBayNguoi :: getCAMERAGIAMSAT()
{
    return CameraGiamSat;
}
void SanBongBayNguoi :: setCOGHENGOI(string CoGheNgoi)
{
    this->CoGheNgoi = CoGheNgoi;
}
string SanBongBayNguoi :: getCOGHENGOI()
{
    return CoGheNgoi;
}
void SanBongBayNguoi :: setLICHTHIDAU(string LichThiDau)
{
    this->LichThiDau = LichThiDau;
}
string SanBongBayNguoi :: getLICHTHIDAU()
{
    return LichThiDau;
}
void SanBongBayNguoi::setCOWIFI(string CoWifi)
{
    this->CoWifi = CoWifi;
}
string SanBongBayNguoi::getCOWIFI()
{
    return CoWifi;
}
void SanBongBayNguoi::setSOLUONGTRONGTAI(string SoLuongTrongTai)
{
    this->SoLuongTrongTai = SoLuongTrongTai;
}
string SanBongBayNguoi::getSOLUONGTRONGTAI()
{
    return SoLuongTrongTai;
}
void SanBongBayNguoi::setCOHETHONGAMTHANH(string CoHeThongAmThanh)
{
    this->CoHeThongAmThanh = CoHeThongAmThanh;
}
string SanBongBayNguoi::getCOHETHONGAMTHANH()
{
    return CoHeThongAmThanh;
}
void SanBongBayNguoi::setMUCDOBAOTRI(string MucDoBaoTri)
{
    this->MucDoBaoTri = MucDoBaoTri;
}
string SanBongBayNguoi::getMUCDOBAOTRI()
{
    return MucDoBaoTri;
}

// contructor khong tham so
SanBongBayNguoi::SanBongBayNguoi()
{
    
    this->loaiSan = "SanBongBayNguoi";
    this->thoigian_MoCua = "6:00";
    this->thoigian_DongCua = "23:00";
    this->soNguoiToiDa = -1;
    this->LoaiCo = "chua xac dinh";
    this->ChieuDaiSan = "Chua xac dinh";
    this->ChieuRongSan = "0";
    this->LoaiBong = "0";
    this->CoLuoi = "Khong Xac Dinh";
    this->CoHangRao = "Khong Xac Dinh";
    this->SoLuongPhatGoc = "Khong Xac Dinh";
    this->CoHeThongTuoiNuoc = "0";
    this->CameraGiamSat = "Khong Xac Dinh";
    this->CoGheNgoi = "Khong Xac Dinh";
    this->LichThiDau = "Khong Xac Dinh";
    this->CoWifi = "Chua co";
    this->SoLuongTrongTai = "Khong Xac Dinh";
    this->CoHeThongAmThanh = "0";
    this->MucDoBaoTri = "Khong Xac Dinh";  
}
//contructor co tham so
SanBongBayNguoi::SanBongBayNguoi(
                    string LoaiCo, string ChieuDaiSan, string ChieuRongSan, string LoaiBong,
                    string CoLuoi, string coHangRao, string soLuongPhatGoc,
                    string CoHeThongTuoiNuoc, string cameraGiamSat, string CoGheNgoi,
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
    this->CoGheNgoi = CoGheNgoi;
    this->LichThiDau = LichThiDau;
    this->CoWifi = CoWifi;
    this->SoLuongTrongTai = SoLuongTrongTai;
    this->CoHeThongAmThanh = CoHeThongAmThanh;
    this->MucDoBaoTri = MucDoBaoTri;
}
//ham input
void SanBongBayNguoi::input() 
{
    cout << "\n--- THONG TIN SAN BONG BAY NGUOI ---\n";
    setMaSan("SanBongBayNguoi");
    cout << "Ma San: " << getMaSan() << endl;
    HeThongSanTheThao::input();
    cin.ignore();
    cout << "Nhap loai co(Tu Nhien / Nhan Tao): "; 

    getline(cin, LoaiCo);
    cout << "Nhap chieu dai san: "; 
    getline(cin, ChieuDaiSan);
    cout << "Nhap chieu rong san: "; 
    getline(cin, ChieuRongSan);
    cout << "Nhap loai bong: "; 
    getline(cin, LoaiBong);
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
    cout << "So goc phat bong: "; 
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
    getline(cin, CoGheNgoi);
    if (CoGheNgoi != "Co" && CoGheNgoi != "Khong")
    {
        CoGheNgoi = "Khong";
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
void SanBongBayNguoi::output() 
{
    cout << "\n--- THONG TIN SAN BONG BAY NGUOI---\n";
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
    cout << "Ghe Ngoi: " << CoGheNgoi << endl;
    cout << "Lich thi dau: " << LichThiDau << endl;
    cout << "Wifi: " << CoWifi << endl;
    cout << "So trong tai: " << SoLuongTrongTai << endl;
    cout << "He thong am thanh: " << CoHeThongAmThanh << endl;
    cout << "Muc do bao tri: " << MucDoBaoTri << endl;   
}