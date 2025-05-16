#include "SanPickleBall.h"
#include <iostream>
using namespace std;

void SanPickleBall :: setSoLuongCotLuoi(string soluongCotLuoi)
{
    this->soluongCotLuoi=soluongCotLuoi;
}
string SanPickleBall ::getSoLuongCotLuoi()
{
    return this->soluongCotLuoi;
}
void SanPickleBall :: setDoCaoCuaLuoi(string docaoCuaLuoi)
{
    this->soluongCotLuoi=docaoCuaLuoi;
}
string SanPickleBall ::getDoCaoCuaLuoi()
{
    return this->docaoCuaLuoi;
}
void SanPickleBall:: setMatSan(string matSan)
{
    this->matSan=matSan;
}
string SanPickleBall::getMatSan()
{
    return this->matSan;
}


void SanPickleBall:: setMucChongTham(string mucChongTham)
{
    this->mucChongTham=mucChongTham;
}
string SanPickleBall::getMucChongTham()
{
    return this->mucChongTham;
}
void SanPickleBall:: setCoThamTruot(string coThamTruot)
{
    this->coThamTruot=coThamTruot;
}
string SanPickleBall::getCoThamTruot()
{
    return this->coThamTruot;
}
void SanPickleBall:: setSoLuongVot(string soLuongVot)
{
    this->soLuongVot=soLuongVot;
}
string SanPickleBall::getSoLuongVot()
{
    return this->soLuongVot;
}
void SanPickleBall:: setSoLuongBong(string soLuongBong)
{
    this->soLuongBong=soLuongBong;
}
string SanPickleBall::getSoLuongBong()
{
    return soLuongBong;
}
void SanPickleBall:: setCoPhongKhoiDong(string coPhongKhoiDong)
{
    coPhongKhoiDong=coPhongKhoiDong;
}
string SanPickleBall::getCoPhongKhoiDong()
{
    return this->coPhongKhoiDong;
}
void SanPickleBall:: setLoaivotPhuHop(string loaivotPhuHop)
{
    this->loaivotPhuHop=loaivotPhuHop;
}
string SanPickleBall::getLoaivotPhuHop()
{
    return this->loaivotPhuHop;
}
void SanPickleBall:: setCoPhongNghi(string coPhongNghi)
{
    this->coPhongNghi=coPhongNghi;
}
string SanPickleBall::getCoPhongNghi()
{
    return this->coPhongNghi;
}
void SanPickleBall:: setSoLuong_NguoiToiDa(string soluong_NguoiToiDa)
{
    this->soluong_NguoiToiDa=soluong_NguoiToiDa;
}
string SanPickleBall::getSoLuong_NguoiToiDa()
{
    return this->soluong_NguoiToiDa;
}
void SanPickleBall:: setLichSu_SuDung(string lichsu_SuDung)
{
    this->lichsu_SuDung=lichsu_SuDung;
}
string SanPickleBall::getLichSu_SuDung()
{
    return this->lichsu_SuDung;
}
void SanPickleBall:: setMucDo_HuHong(string mucdo_HuHong)
{
    this->mucdo_HuHong=mucdo_HuHong;
}
string SanPickleBall::getMucDo_HuHong()
{
    return this->mucdo_HuHong;
}
void SanPickleBall:: setDonVi_QuanLy(string donvi_QuanLy)
{
    this->donvi_QuanLy=donvi_QuanLy;
}
string SanPickleBall::getDonVi_QuanLy()
{
    return this->donvi_QuanLy;
}

SanPickleBall::SanPickleBall()
{
    this->soluongCotLuoi = "";
    this->docaoCuaLuoi = "";
    this->matSan = "";
    this->mucChongTham = "";
    this->coThamTruot = "";
    this->soLuongVot = "";
    this->soLuongBong = "";
    this->coPhongKhoiDong = "";
    this->loaivotPhuHop = "";
    this->coPhongNghi = "";
    this->soluong_NguoiToiDa = "";
    this->lichsu_SuDung = "";
    this->mucdo_HuHong = "";
    this->donvi_QuanLy = "";
}
SanPickleBall::SanPickleBall(
            string soluongCotLuoi, string docaoCuaLuoi, string matSan, string mucChongTham,
            string coThamTruot, string soLuongVot, string soLuongBong,string coPhongKhoiDong,
            string loaivotPhuHop, string coPhongNghi, string soluong_NguoiToiDa, string lichsu_SuDung,
            string mucdo_HuHong,string donvi_QuanLy)
{
    this->soluongCotLuoi = soluongCotLuoi;
    this->docaoCuaLuoi = docaoCuaLuoi;
    this->matSan = matSan;
    this->mucChongTham = mucChongTham;
    this->coThamTruot = coThamTruot;
    this->soLuongVot = soLuongVot;
    this->soLuongBong = soLuongBong;
    this->coPhongKhoiDong = coPhongKhoiDong;
    this->loaivotPhuHop = loaivotPhuHop;
    this->coPhongNghi = coPhongNghi;
    this->coPhongNghi = coPhongNghi;
    this->soluong_NguoiToiDa = soluong_NguoiToiDa;
    this->lichsu_SuDung = lichsu_SuDung;
    this->mucdo_HuHong = mucdo_HuHong;
    this->donvi_QuanLy = donvi_QuanLy;
}
    
void SanPickleBall::input()
{
    cout << "\n--- THONG TIN SAN ---\n";
    HeThongSanTheThao::input();
    cout<<"Nhap so luong cot luoi: ";getline(cin,soluongCotLuoi);
    cout<<"Nhap  do cao cua luoi: ";getline(cin,docaoCuaLuoi);
    cout<<"Nhap muc chong tham: ";getline(cin,mucChongTham);
    cout<<"Co tham truot: ";getline(cin,coThamTruot);
    cout<<"Nhap so luong vot: ";getline(cin,soLuongVot);
    cout<<"Nhap so luong bong: ";getline(cin,soLuongBong);
    cout<<"Phong khoi dong(co/khong): ";getline(cin,coPhongKhoiDong);
    cout<<"Loai vot phu hop: ";getline(cin,loaivotPhuHop);
    cout<<"Phong nghi(co/khong): ";getline(cin,coPhongNghi);
    cout<<"So luong nguoi toi da: ";getline(cin,soluong_NguoiToiDa);
    cout<<"Lich su su dung: ";getline(cin,lichsu_SuDung);
    cout<<"Muc do hu hong: ";getline(cin,mucdo_HuHong);
    cout<<"Don vi quan ly: ";getline(cin,donvi_QuanLy);

}

void SanPickleBall::output()
{
    cout<<"\n------THONG TIN SAN------\n";
    HeThongSanTheThao::output();
    cout<<"So luong cot luoi: "<< soluongCotLuoi << endl;
    cout<<"Do cao cua luoi: "<< docaoCuaLuoi << endl;
    cout<<"So nguoi: "<< mucChongTham<< endl;
    cout<<"Nhap so luong vot: "<< soLuongVot << endl;
    cout<<"Nhap so luong bong: "<< soLuongBong << endl;
    cout<<"Phong khoi dong: "<< coPhongKhoiDong << endl;
    cout<<"Loai vot phu hop: "<< loaivotPhuHop<< endl;
    cout<<"Phong nghi: "<< coPhongNghi << endl;
    cout<<"So luong nguoi toi da: "<< soluong_NguoiToiDa<< endl;
    cout<<"Lich su su dung: "<< lichsu_SuDung << endl;
    cout<<"Muc do hu hong: "<< mucdo_HuHong << endl;
    cout<<"Don vi quan ly: "<< donvi_QuanLy << endl;   
    
}



