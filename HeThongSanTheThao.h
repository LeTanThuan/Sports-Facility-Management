#ifndef HTSanTheThao_H
#define HTSanTheThao_H

#include <string>
#include "QLyHeThongSanTheThao.h"
using namespace std;

class HeThongSanTheThao 
{
private:
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
//contructor
HeThongSanTheThao();

//contructor
HeThongSanTheThao(string maSan, string tenSan, string loaiSan, string diaChi, string dienTich, string tinhTrang,
                  float giathue_TheoGio, string soNguoiToiDa, string thoigian_MoCua, string thoigian_DongCua,
                  string coPhongThayDo, string coHeThongDen, string coBaoHiem, string nguoiQuanLy, string sodienthoi_LienHe);                          

virtual void input();

virtual void output();

virtual ~HeThongSanTheThao();
};

#endif