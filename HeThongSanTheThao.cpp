#include "HeThongSanTheThao.h"
#include <iostream>

using namespace std;

HeThongSanTheThao::HeThongSanTheThao() 
{
    this->maSan = "A";
    this->tenSan = "";
    this->loaiSan = "";
    this->diaChi = "";
    this->dienTich = "";
    this->tinhTrang = "";
    this->giathue_TheoGio = 0;
    this->soNguoiToiDa = "";
    this->thoigian_MoCua = "5:00";
    this->thoigian_DongCua = "23:00";
    this->coPhongThayDo = "Khong";
    this->coHeThongDen = "Khong";
    this->coBaoHiem = "Khong";
    this->nguoiQuanLy = "Le Van A";
    this->sodienthoai_LienHe = "xxxxxxxxxx";
    this->SoGioChoi = 0;
    this->GiaThue = 0;
}

HeThongSanTheThao::HeThongSanTheThao(string maSan, string tenSan, string loaiSan, string diaChi, string dienTich, string tinhTrang,
                                    float giathue_TheoGio, string soNguoiToiDa, string thoigian_MoCua, string thoigian_DongCua,
                                    string coPhongThayDo, string coHeThongDen, string coBaoHiem, string nguoiQuanLy, string sodienthoai_LienHe, float SoGioChoi, float GiaThue)
{
    this->maSan = maSan;
    this->tenSan = tenSan;
    this->loaiSan = loaiSan;
    this->diaChi = diaChi;
    this->dienTich = dienTich;
    this->tinhTrang = tinhTrang;
    this->giathue_TheoGio = giathue_TheoGio;
    this->soNguoiToiDa = soNguoiToiDa;
    this->thoigian_MoCua = thoigian_MoCua;
    this->thoigian_DongCua = thoigian_DongCua;
    this->coPhongThayDo = coPhongThayDo;
    this->coHeThongDen = coHeThongDen;
    this->coBaoHiem = coBaoHiem;
    this->nguoiQuanLy = nguoiQuanLy;
    this->sodienthoai_LienHe = sodienthoai_LienHe;
    this->SoGioChoi = SoGioChoi;
    this->GiaThue = GiaThue;
}


//getter and setter
void HeThongSanTheThao::setSoGioChoi(float SoGioChoi)
{
    SoGioChoi= SoGioChoi;
}
float HeThongSanTheThao::getSoGioChoi()
{
    return SoGioChoi;
}
void HeThongSanTheThao::setMaSan(string maSan)
{
    maSan=maSan;
}
string HeThongSanTheThao::getMaSan()
{
    return maSan;
}
void HeThongSanTheThao::setTenSan(string tenSan)
{
    tenSan=tenSan;
}
string HeThongSanTheThao::getTenSan()
{
    return tenSan;
}
void HeThongSanTheThao::setLoaiSan(string loaiSan)
{
    loaiSan=loaiSan;
}
string HeThongSanTheThao::getLoaiSan()
{
    return loaiSan;
}
void HeThongSanTheThao::setDiaChi(string diaChi)
{
    diaChi=diaChi;
}
string HeThongSanTheThao::getDiaChi()
{
    return diaChi;
}
void HeThongSanTheThao::setDienTich(string dienTich)
{
    dienTich=dienTich;
}
string HeThongSanTheThao::getDienTich()
{
    return dienTich;
}
void HeThongSanTheThao::setTinhTrang(string tinhTrang)
{
    tinhTrang=tinhTrang;
}
string HeThongSanTheThao::getTinhTrang()
{
    return tinhTrang;
}
void HeThongSanTheThao::setMaSan(float giathue_TheoGio)
{
    giathue_TheoGio=giathue_TheoGio;
}
float HeThongSanTheThao::getGiaThue_TheoGio()
{
    return giathue_TheoGio;
}
void HeThongSanTheThao::setSoNguoiToiDa(string soNguoiToiDa)
{
    soNguoiToiDa=soNguoiToiDa;
}
string HeThongSanTheThao::getSoNguoiToiDa()
{
    return soNguoiToiDa;
}
void HeThongSanTheThao::setThoiGian_MoCua(string thoigian_MoCua)
{
    thoigian_MoCua=thoigian_MoCua;
}
string HeThongSanTheThao::getThoiGian_MoCua()
{
    return thoigian_MoCua;
}
void HeThongSanTheThao::setThoiGian_DongCua(string thoigian_DongCua)
{
    thoigian_DongCua=thoigian_DongCua;
}
string HeThongSanTheThao::getThoiGian_DongCua()
{
    return thoigian_DongCua;
}
void HeThongSanTheThao::setCoPhongThayDo(string coPhongThayDo)
{
    coPhongThayDo=coPhongThayDo;
}
string HeThongSanTheThao::getCoPhongThayDo()
{
    return coPhongThayDo;
}
void HeThongSanTheThao::setCoHeThongDen(string coHeThongDen)
{
    coHeThongDen=coHeThongDen;
}
string HeThongSanTheThao::getCoHeThongDen()
{
    return coHeThongDen;
}
void HeThongSanTheThao::setCoBaoHim(string coBaoHiem)
{
    coBaoHiem=coBaoHiem;
}
string HeThongSanTheThao::getCoBaoHiem()
{
    return coBaoHiem;
}
void HeThongSanTheThao::setNguoiQuanLy(string nguoiQuanLy)
{
    nguoiQuanLy=nguoiQuanLy;
}
string HeThongSanTheThao::getNguoiQuanLy()
{
    return nguoiQuanLy;
}
void HeThongSanTheThao::setSoDienThoai_LienHe(string sodienthoai_LienHe)
{
    sodienthoai_LienHe=sodienthoai_LienHe;
}
string HeThongSanTheThao::getSoDienThoai_LienHe()
{
    return sodienthoai_LienHe;
}

void HeThongSanTheThao::setGiaThue(float GiaThue)
{
    GiaThue=GiaThue;
}
float HeThongSanTheThao::getGiaThue()
{
    return GiaThue;
}



void HeThongSanTheThao::input() 
{  
    cout<<"Nhap so Gio: ";cin>>SoGioChoi;
    cin.ignore();
    cout<<"Nhap ma san: ";getline(cin,maSan);
    cout<<"Nhap ten san: ";getline(cin,tenSan);
    cout<<"Nhap loai san: ";getline(cin,loaiSan);
    cout<<"Nhap dia chi: ";getline(cin,diaChi);
    cout<<"Nhap dien tich: ";getline(cin,dienTich);
    cout<<"Nhap tinh trang san: ";getline(cin,tinhTrang);
    cout<<"Nhap gia thue(theo gio): ";cin>>giathue_TheoGio;
    cout<<"Nhap so nguoi toi da: ";getline(cin,soNguoiToiDa);
    cout<<"Thoi gian mo cua: ";getline(cin,thoigian_MoCua);
    cout<<"Thoi gian dong cua:";getline(cin,thoigian_DongCua);
    cout<<"Phong thay do(co/khong): ";getline(cin,coPhongThayDo);
    cout<<"He thong den(co/khong): ";getline(cin,coHeThongDen);
    cout<<"Bao hiem(co/khong): ";getline(cin,coBaoHiem);
    cout<<"Nguoi quan ly: ";getline(cin,nguoiQuanLy);
    cout<<"So dien thoai lien he: ";getline(cin,sodienthoai_LienHe);
    cout<<"Gia thue: ";cin>>GiaThue;
    cin.ignore();
    cout<<"Nhap so gio choi: ";cin>>SoGioChoi;

}
void HeThongSanTheThao::output()
{
    cout<<"so Gio: "<<SoGioChoi<<endl;
    cout<<"Ma san: "<<maSan<<endl;
    cout<<"Ten san: "<<tenSan<<endl;
    cout<<"Loai san: "<<loaiSan<<endl;
    cout<<"Dia chi: "<<diaChi<<endl;
    cout<<"Dien tich: "<<dienTich<<endl;
    cout<<"Tinh trang san: "<<tinhTrang<<endl;
    cout<<"Gia thue(theo gio): "<<giathue_TheoGio<<endl;
    cout<<"So nguoi toi da: "<<soNguoiToiDa<<endl;
    cout<<"Thoi gian mo cua: "<<thoigian_MoCua<<endl;
    cout<<"Thoi gian dong cua:"<<thoigian_DongCua<<endl;
    cout<<"Phong thay do(co/khong): "<<coPhongThayDo<<endl;
    cout<<"He thong den(co/khong): "<<coHeThongDen<<endl;
    cout<<"Bao hiem(co/khong): "<<coBaoHiem<<endl;
    cout<<"Nguoi quan ly: "<<nguoiQuanLy<<endl;
    cout<<"So dien thoai lien he: "<<sodienthoai_LienHe<<endl;
    cout<<"So gio choi: "<<SoGioChoi<<endl;
    cout<<"Gia thue: "<<GiaThue<<endl;
    cout<<"Nhap so gio choi: "<<SoGioChoi<<endl;
}

HeThongSanTheThao:: ~HeThongSanTheThao()
{
    
}


