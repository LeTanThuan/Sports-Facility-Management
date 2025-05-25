#include "HeThongSanTheThao.h"
#include <iostream>

using namespace std;

int HeThongSanTheThao::counter_SBBN = 1;
int HeThongSanTheThao::counter_SBNN = 1;
int HeThongSanTheThao::counter_SCL = 1;
int HeThongSanTheThao::counter_SPB = 1;

//getter and setter
void HeThongSanTheThao::setSoGioChoi(float SoGioChoi)
{
    this->SoGioChoi= SoGioChoi;
}
float HeThongSanTheThao::getSoGioChoi()
{
    return SoGioChoi;
}
void HeThongSanTheThao::setMaSan(string masan)
{
    if (masan == "SanBongBayNguoi") 
    {
        this->maSan = "SBBN" + to_string(counter_SBBN++);
    } else if (masan == "SanBongNamNguoi") 
    {
        this->maSan = "SBNN" + to_string(counter_SBNN++);
    }else if (masan == "SanCauLong")
    {
        this->maSan = "SCL" + to_string(counter_SCL++);
    }else if (masan == "SanPickleBall")
    {
        this->maSan = "SPB" + to_string(counter_SPB++);
    }
     else 
    {
        this->maSan = "SAN" + to_string(rand() % 1000);
    }

}
string HeThongSanTheThao::getMaSan()
{
    return maSan;
}
void HeThongSanTheThao::setTenSan(string tenSan)
{
    this->tenSan=tenSan;
}
string HeThongSanTheThao::getTenSan()
{
    return tenSan;
}
void HeThongSanTheThao::setLoaiSan(string loaiSan)
{
    this->loaiSan=loaiSan;
}
string HeThongSanTheThao::getLoaiSan()
{
    return loaiSan;
}
void HeThongSanTheThao::setTinhTrang(string tinhTrang)
{
    this->tinhTrang=tinhTrang;
}
string HeThongSanTheThao::getTinhTrang()
{
    return tinhTrang;
}
void HeThongSanTheThao::setGiaThue_TheoGio(float giathue_TheoGio)
{
    this->giathue_TheoGio=giathue_TheoGio;
}
float HeThongSanTheThao::getGiaThue_TheoGio()
{
    return giathue_TheoGio;
}
void HeThongSanTheThao::setSoNguoiToiDa(int soNguoiToiDa)
{
    this->soNguoiToiDa=soNguoiToiDa;
}
int HeThongSanTheThao::getSoNguoiToiDa()
{
    return soNguoiToiDa;
}
void HeThongSanTheThao::setThoiGian_MoCua(string thoigian_MoCua)
{
    this->thoigian_MoCua=thoigian_MoCua;
}
string HeThongSanTheThao::getThoiGian_MoCua()
{
    return thoigian_MoCua;
}
void HeThongSanTheThao::setThoiGian_DongCua(string thoigian_DongCua)
{
    this->thoigian_DongCua=thoigian_DongCua;
}
string HeThongSanTheThao::getThoiGian_DongCua()
{
    return thoigian_DongCua;
}
void HeThongSanTheThao::setCoPhongThayDo(string coPhongThayDo)
{
    this->coPhongThayDo=coPhongThayDo;
}
string HeThongSanTheThao::getCoPhongThayDo()
{
    return coPhongThayDo;
}
void HeThongSanTheThao::setCoHeThongDen(string coHeThongDen)
{
    this->coHeThongDen=coHeThongDen;
}
string HeThongSanTheThao::getCoHeThongDen()
{
    return coHeThongDen;
}
void HeThongSanTheThao::setCoBaoHim(string coBaoHiem)
{
    this->coBaoHiem=coBaoHiem;
}
string HeThongSanTheThao::getCoBaoHiem()
{
    return coBaoHiem;
}
void HeThongSanTheThao::setNguoiQuanLy(string nguoiQuanLy)
{
    this->nguoiQuanLy=nguoiQuanLy;
}
string HeThongSanTheThao::getNguoiQuanLy()
{
    return nguoiQuanLy;
}
void HeThongSanTheThao::setSoDienThoai_LienHe(string sodienthoai_LienHe)
{
    this->sodienthoai_LienHe=sodienthoai_LienHe;
}
string HeThongSanTheThao::getSoDienThoai_LienHe()
{
    return sodienthoai_LienHe;
}
void HeThongSanTheThao::setGiaThue()
{
    this->GiaThue= giathue_TheoGio * SoGioChoi;
}
float HeThongSanTheThao::getGiaThue()
{
    return GiaThue;
}

//constructor without parameters
HeThongSanTheThao::HeThongSanTheThao() 
{
    this->maSan = "Khong Xac Dinh";
    this->tenSan = "Khong Xac Dinh";
    this->loaiSan = "Khong Xac Dinh";
    this->tinhTrang = "Khong Xac Dinh";
    this->giathue_TheoGio = 0;
    this->soNguoiToiDa = -1;
    this->thoigian_MoCua = "Khong Xac Dinh";
    this->thoigian_DongCua = "Khong Xac Dinh";
    this->coPhongThayDo = "Khong";
    this->coHeThongDen = "Khong";
    this->coBaoHiem = "Khong";
    this->nguoiQuanLy = "Khong Xac Dinh";
    this->sodienthoai_LienHe = "xxxxxxxxxx";
    this->SoGioChoi = 0;
    this->GiaThue = 0;
}

//constructor with parameters
HeThongSanTheThao::HeThongSanTheThao(string maSan, string tenSan, string loaiSan, string tinhTrang,
                                    float giathue_TheoGio, string thoigian_MoCua, string thoigian_DongCua,
                                    string coPhongThayDo, string coHeThongDen, string coBaoHiem, string nguoiQuanLy, string sodienthoai_LienHe, float SoGioChoi, float GiaThue)
{
    this->maSan = maSan;
    this->tenSan = tenSan;
    this->loaiSan = loaiSan;
    this->tinhTrang = tinhTrang;
    this->giathue_TheoGio = giathue_TheoGio;
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
// input function 
void HeThongSanTheThao::input() 
{  
    cin.ignore();
    cout<<"Nhap ten san: ";
    getline(cin,tenSan);
    cout<<"Nhap tinh trang san: ";
    getline(cin,tinhTrang);
    cout<<"Nhap gia thue(Theo Gio): ";
    cin>>giathue_TheoGio;
    cin.ignore();
    cout<<"Phong thay do(Co / Khong): ";
    getline(cin,coPhongThayDo);
    if (coPhongThayDo != "Co" && coPhongThayDo != "Khong")
    {
        coPhongThayDo = "Khong";
    }
    cout<<"He thong den(Co / Khong): ";
    getline(cin,coHeThongDen);
    if (coHeThongDen != "Co" && coHeThongDen != "Khong")
    {
        coHeThongDen = "Khong";
    }
    cout<<"Bao hiem(Co / Khong): ";
    getline(cin,coBaoHiem);
    if (coBaoHiem != "Co" && coBaoHiem != "Khong")
    {
        coBaoHiem = "Khong";
    }
    cout<<"Nhap so gio choi: ";
    cin>>SoGioChoi;
    setGiaThue();
}
// output function
void HeThongSanTheThao::output()
{
    cout<<"Ma san: "<<getMaSan()<<endl;
    cout<<"Ten san: "<<getTenSan()<<endl;
    cout<<"Loai san: "<<getLoaiSan()<<endl;
    cout<<"Tinh trang san: "<<tinhTrang<<endl;
    cout<<"Gia thue(theo gio): "<<getGiaThue_TheoGio()<<endl;
    cout<<"Thoi gian mo cua: "<<thoigian_MoCua<<endl;
    cout<<"Thoi gian dong cua:"<<thoigian_DongCua<<endl;
    cout<<"Phong thay do: "<<coPhongThayDo<<endl;
    cout<<"He thong den: "<<coHeThongDen<<endl;
    cout<<"Bao hiem: "<<coBaoHiem<<endl;
    cout<<"Nguoi quan ly: "<<nguoiQuanLy<<endl;
    cout<<"So dien thoai lien he: "<<sodienthoai_LienHe<<endl;
    cout<<"So gio choi: "<<SoGioChoi<<endl;
    cout<<"Gia thue: "<<GiaThue<<endl;
}

// destructor function
HeThongSanTheThao:: ~HeThongSanTheThao()
{
    
}