#ifndef SanCauLong_H
#define SanCauLong_H

#include <HeThongSanTheThao.h>
using namespace std;

class SanPickleBall:public HeThongSanTheThao
{
private:
    float GiaTien;
    string maSan;
    string tenSan;
    string loaiSan;
    string diaChi;
    string dienTich;
    string tinhTrang;
    float  giathue_TheoGio; 
    string soNguoiToiDa;
    string thoigian_MoCua;
    string thoigian_DongCua;
    string coPhongThayDo;
    string coHeThongDen;
    string coBaoHiem;
    string nguoiQuanLy;
    string sodienthoai_LienHe;
public:
SanPickleBall();
SanPickleBall(string maSan,string tenSan,string loaiSan,string diaChi,string dienTich,string tinhTrang,
                float giathue_TheoGio, string thoigian_MoCua, string thoigian_DongCua,
                  string coPhongThayDo, string coHeThongDen, string coBaoHiem, string nguoiQuanLy, string sodienthoi_LienHe);
    

public:
virtual void  input();




virtual void output();
    
};

#endif