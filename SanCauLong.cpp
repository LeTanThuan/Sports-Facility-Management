#include "SanCauLong.h"
#include <iostream>

using namespace std;

void SanCauLong :: setSoLuongCotLuoi(string soluongCotLuoi)
{
    this->soluongCotLuoi=soluongCotLuoi;
}
string SanCauLong ::getSoLuongCotLuoi()
{
    return this->soluongCotLuoi;
}
void SanCauLong :: setDoCaoCuaLuoi(string docaoCuaLuoi)
{
    this->soluongCotLuoi=docaoCuaLuoi;
}
string SanCauLong ::getDoCaoCuaLuoi()
{
    return this->docaoCuaLuoi;
}
void SanCauLong :: setMatSan(string matSan)
{
    this->matSan=matSan;
}
string SanCauLong::getMatSan()
{
    return this->matSan;
}
void SanCauLong:: setMucChongTham(string mucChongTham)
{
    this->mucChongTham=mucChongTham;
}
string SanCauLong::getMucChongTham()
{
    return this->mucChongTham;
}
void SanCauLong:: setCoThamTruot(string coThamTruot)
{
    this->coThamTruot=coThamTruot;
}
string SanCauLong::getCoThamTruot()
{
    return this->coThamTruot;
}
void SanCauLong:: setSoLuongVot(string soLuongVot)
{
    this->soLuongVot=soLuongVot;
}
string SanCauLong::getSoLuongVot()
{
    return this->soLuongVot;
}
void SanCauLong:: setSoLuongCau(string soLuongCau)
{
    this->soLuongCau=soLuongCau;
}
string SanCauLong::getSoLuongCau()
{
    return soLuongCau;
}
void SanCauLong:: setCoPhongKhoiDong(string coPhongKhoiDong)
{
    coPhongKhoiDong=coPhongKhoiDong;
}
string SanCauLong::getCoPhongKhoiDong()
{
    return this->coPhongKhoiDong;
}
void SanCauLong:: setLoaivotPhuHop(string loaivotPhuHop)
{
    this->loaivotPhuHop=loaivotPhuHop;
}
string SanCauLong::getLoaivotPhuHop()
{
    return this->loaivotPhuHop;
}
void SanCauLong:: setCoPhongNghi(string coPhongNghi)
{
    this->coPhongNghi=coPhongNghi;
}
string SanCauLong::getCoPhongNghi()
{
    return this->coPhongNghi;
}
void SanCauLong:: setSoLuong_NguoiToiDa(string soluong_NguoiToiDa)
{
    this->soluong_NguoiToiDa=soluong_NguoiToiDa;
}
string SanCauLong::getSoLuong_NguoiToiDa()
{
    return this->soluong_NguoiToiDa;
}
void SanCauLong:: setLichSu_SuDung(string lichsu_SuDung)
{
    this->lichsu_SuDung=lichsu_SuDung;
}
string SanCauLong::getLichSu_SuDung()
{
    return this->lichsu_SuDung;
}
void SanCauLong:: setMucDo_HuHong(string mucdo_HuHong)
{
    this->mucdo_HuHong=mucdo_HuHong;
}
string SanCauLong::getMucDo_HuHong()
{
    return this->mucdo_HuHong;
}
void SanCauLong:: setDonVi_QuanLy(string donvi_QuanLy)
{
    this->donvi_QuanLy=donvi_QuanLy;
}
string SanCauLong::getDonVi_QuanLy()
{
    return this->donvi_QuanLy;
}

SanCauLong::SanCauLong()
{
    this->soluongCotLuoi = "";
    this->docaoCuaLuoi = "";
    this->matSan = "";
    this->mucChongTham = "";
    this->coThamTruot = "";
    this->soLuongVot = "";
    this->soLuongCau = "";
    this->coPhongKhoiDong = "";
    this->loaivotPhuHop = "";
    this->coPhongNghi = "";
    this->soluong_NguoiToiDa = "";
    this->lichsu_SuDung = "";
    this->mucdo_HuHong = "";
    this->donvi_QuanLy = "";
}
SanCauLong::SanCauLong(
            string soluongCotLuoi, string docaoCuaLuoi, string matSan, string mucChongTham,
            string coThamTruot, string soLuongVot, string soLuongCau,string coPhongKhoiDong,
            string loaivotPhuHop, string coPhongNghi, string soluong_NguoiToiDa, string lichsu_SuDung,
            string mucdo_HuHong,string donvi_QuanLy)
{
    this->soluongCotLuoi = soluongCotLuoi;
    this->docaoCuaLuoi = docaoCuaLuoi;
    this->matSan = matSan;
    this->mucChongTham = mucChongTham;
    this->coThamTruot = coThamTruot;
    this->soLuongVot = soLuongVot;
    this->soLuongCau = soLuongCau;
    this->coPhongKhoiDong = coPhongKhoiDong;
    this->loaivotPhuHop = loaivotPhuHop;
    this->coPhongNghi = coPhongNghi;
    this->coPhongNghi = coPhongNghi;
    this->soluong_NguoiToiDa = soluong_NguoiToiDa;
    this->lichsu_SuDung = lichsu_SuDung;
    this->mucdo_HuHong = mucdo_HuHong;
    this->donvi_QuanLy = donvi_QuanLy;
}

void SanCauLong::input()
{
    cout << "\n--- THONG TIN SAN ---\n";
    HeThongSanTheThao::input();
    cout<<"Nhap so luong cot luoi: ";getline(cin,soluongCotLuoi);
    cout<<"Nhap  do cao cua luoi: ";getline(cin,docaoCuaLuoi);
    cout<<"Nhap muc chong tham: ";getline(cin,mucChongTham);
    cout<<"Co tham truot: ";getline(cin,coThamTruot);
    cout<<"Nhap so luong vot: ";getline(cin,soLuongVot);
    cout<<"Nhap so luong cau: ";getline(cin,soLuongCau);
    cout<<"Phong khoi dong(co/khong): ";getline(cin,coPhongKhoiDong);
    cout<<"Loai vot phu hop: ";getline(cin,loaivotPhuHop);
    cout<<"Phong nghi(co/khong): ";getline(cin,coPhongNghi);
    cout<<"So luong nguoi toi da: ";getline(cin,soluong_NguoiToiDa);
    cout<<"Lich su su dung: ";getline(cin,lichsu_SuDung);
    cout<<"Muc do hu hong: ";getline(cin,mucdo_HuHong);
    cout<<"Don vi quan ly: ";getline(cin,donvi_QuanLy);
}

void SanCauLong::output()
{
    cout<<"\n------THONG TIN SAN------\n";
    HeThongSanTheThao::output();
    cout<<"So luong cot luoi: "<< soluongCotLuoi << endl;
    cout<<"Do cao cua luoi: "<< docaoCuaLuoi << endl;
    cout<<"So nguoi: "<< mucChongTham<< endl;
    cout<<"Nhap so luong vot: "<< soLuongVot << endl;
    cout<<"Nhap so luong Cau: "<< soLuongCau << endl;
    cout<<"Phong khoi dong: "<< coPhongKhoiDong << endl;
    cout<<"Loai vot phu hop: "<< loaivotPhuHop<< endl;
    cout<<"Phong nghi: "<< coPhongNghi << endl;
    cout<<"So luong nguoi toi da: "<< soluong_NguoiToiDa<< endl;
    cout<<"Lich su su dung: "<< lichsu_SuDung << endl;
    cout<<"Muc do hu hong: "<< mucdo_HuHong << endl;
    cout<<"Don vi quan ly: "<< donvi_QuanLy << endl; 
}