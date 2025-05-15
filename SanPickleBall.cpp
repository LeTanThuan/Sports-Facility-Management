#include "SanPickleBall.h"
#include <iostream>
using namespace std;
SanPickleBall:: SanPickleBall()
{
    this->maSan = "";
    this->tenSan = "";
    this->loaiSan = "";
    this->diaChi = "";
    this->dienTich = "";
    this->tinhTrang = "";
    this->giathue_TheoGio = 0;
    this->soNguoiToiDa = "";
    this->thoigian_MoCua = "";
    this->thoigian_DongCua = "";
    this->coPhongThayDo = "";
    this->coHeThongDen = "";
    this->coBaoHiem = "";
    this->nguoiQuanLy = "";
    this->sodienthoai_LienHe = "";
}
SanPickleBall::SanPickleBall(string maSan,string tenSan,string loaiSan,string diaChi,string dienTich,string tinhTrang,
                float giathue_TheoGio, string thoigian_MoCua, string thoigian_DongCua,
                string coPhongThayDo, string coHeThongDen, string coBaoHiem, string nguoiQuanLy, string sodienthoi_LienHe)
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
}
    
void SanPickleBall::input()
{
    cout<<"Nhap ma san "; getline(cin, maSan);
    cout<<"Nhap ten san: "; getline(cin, tenSan);
    cout<<"Nhap loai san(): ";getline(cin, loaiSan);
    // San ngoai troi voi trong nha
    cout<<"Nhap dia chi: ";getline(cin,diaChi);
    // Dien tich tieu chuan voi lon
    cout<<"Nhap dien tich: ";getline(cin,dienTich);
    // co dang bao tri hay khong
    cout<<"Nhap tinh trang: ";getline(cin,tinhTrang);
    cout<<"Nhap  gia thue(theo gio): ";cin>>giathue_TheoGio;
    cout<<"So nguoi toi da: ";getline(cin,soNguoiToiDa);
    cout<<"Thoi gian mo cua: ";getline(cin,thoigian_MoCua);
    cout<<"Thoi gian dong cua: ";getline(cin,thoigian_DongCua);
    cout<<"Phong thay do(co/khong): ";getline(cin,coPhongThayDo);
    cout<<"He thong den(co/khong): ";getline(cin,coHeThongDen);
    cout<<"Bao hiem(co/khong): ";getline(cin,coBaoHiem);
    cout<<"Nguoi quan ly: ";getline(cin,nguoiQuanLy);
    cout<<"So dien thoai lien he: ";getline(cin,sodienthoai_LienHe);
}

void SanPickleBall::output()
{
    cout<<"\n------THONG TIN SAN------\n";
    cout<<"Ma san: "<< maSan << endl;
    cout<<"Ten san: "<< tenSan << endl;
    cout<<"Loai san: "<< loaiSan << endl;
    cout<<"Dia chi: "<< diaChi <<endl;
    cout<<"Dien tich: "<< dienTich << endl;
    cout<<"Tinh trang san: "<< tinhTrang << endl;
    cout<<"Gia thue: "<< giathue_TheoGio << endl;
    cout<<"So nguoi: "<< soNguoiToiDa<< endl;
    cout<<"Thoi gian mo cua: "<< thoigian_MoCua << endl;
    cout<<"Thoi gian dong cua: "<< thoigian_DongCua << endl;
    cout<<"Phong thay do: "<< coPhongThayDo << endl;
    cout<<"He thong den: "<< coHeThongDen << endl;
    cout<<"Bao hiem: "<< coBaoHiem << endl;
    cout<<"Nguoi quan ly: "<< nguoiQuanLy << endl;
    cout<<"So dien thoai lien he: "<< sodienthoai_LienHe << endl;
    cout<<"Gia thue: "<<tinhGia()<<endl;
}
// từ 17h chiều đến 20h giá 100k tiền sân 1h
// các khung giờ khác 80k
float tinhGia()
{
    
    return 0;
}

