#include "SanCauLong.h"
#include <iostream>

using namespace std;
//ham set va get
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
//contructor khong tham so
SanCauLong::SanCauLong()
{
    this->loaiSan = "SanCauLong";
    this->thoigian_MoCua = "6:00";
    this->thoigian_DongCua = "23:00";
    this->soNguoiToiDa= 8;
    this->soluongCotLuoi = "2";
    this->docaoCuaLuoi = "1m55";
    this->matSan = "Khong Xac Dinh";
    this->mucChongTham = "Khong Xac Dinh";
    this->coThamTruot = "Khong Xac Dinh";
    this->soLuongVot = "8";
    this->soLuongCau = "Khong Xac Dinh";
    this->coPhongKhoiDong = "Khong Xac Dinh";
    this->loaivotPhuHop = "Vot cau long";
    this->coPhongNghi = "Khong Xac Dinh";
    this->soluong_NguoiToiDa = "8";
    this->lichsu_SuDung = "Khong Xac Dinh";
    this->mucdo_HuHong = "Khong Xac Dinh";
    this->donvi_QuanLy = "Khong Xac Dinh";
}
//contructor co tham so
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

//ham input
void SanCauLong::input()
{
    cout << "\n--- THONG TIN SAN CAU LONG---\n";
    setMaSan("SanCauLong"); 
    cout << "Ma San: " << getMaSan() << endl;
    HeThongSanTheThao::input();
    cin.ignore();
    cout<<"Nhap so luong cot luoi: ";
    getline(cin,soluongCotLuoi);
    cout<<"Nhap do cao cua luoi: ";
    getline(cin,docaoCuaLuoi);
    cout<<"Mat San (Tham / Son)";
    getline(cin,matSan);
    if (matSan != "Co" && matSan != "Khong")
    {
        matSan = "Khong xac dinh";
    }
    cout<<"Nhap muc chong tham (Tot / Khong Tot):  ";
    getline(cin,mucChongTham);
    if (mucChongTham != "Co" && mucChongTham != "Khong")
    {
        mucChongTham = "Khong xac dinh";
    }
    cout<<"Co tham truot (Co / Khong): ";
    getline(cin,coThamTruot);
    if (coThamTruot != "Co" && coThamTruot != "Khong")
    {
        coThamTruot = "Khong xac dinh";
    }
    cout<<"Phong khoi dong(Co / Khong): ";
    getline(cin,coPhongKhoiDong);
    if (coPhongKhoiDong != "Co" && coPhongKhoiDong != "Khong")
    {
        coPhongKhoiDong = "Khong";
    }
    cout<<"Phong nghi(Co / Khong): ";
    getline(cin,coPhongNghi);
    if (coPhongNghi != "Co" && coPhongNghi != "Khong")
    {
        coPhongNghi = "Khong";
    }
    cout<<"Muc do hu hong: ";
    getline(cin,mucdo_HuHong);
    cout<<"Don vi quan ly: ";
    getline(cin,donvi_QuanLy);
}
//ham output
void SanCauLong::output()
{
    cout<<"\n------THONG TIN SAN CAU LONG------\n";
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