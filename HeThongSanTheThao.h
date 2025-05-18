#ifndef HETHONGSANTHETHAO_H
#define HETHONGSANTHETHAO_H

#include <string>
using namespace std;

class HeThongSanTheThao 
{
protected:
    string maSan;
    string tenSan;
    string loaiSan;
    string diaChi;
    string dienTich;
    string tinhTrang;
    float  giathue_TheoGio; 
    int soNguoiToiDa;
    string thoigian_MoCua;
    string thoigian_DongCua;
    string coPhongThayDo;
    string coHeThongDen;
    string coBaoHiem;
    string nguoiQuanLy;
    string sodienthoai_LienHe;
    float SoGioChoi;
    float GiaThue;

    static int counter_SBBN; 
    static int counter_SBNN;
    static int counter_SCL;
    static int counter_SPB; 

public:
//contructor
HeThongSanTheThao();

//contructor
HeThongSanTheThao(string maSan, string tenSan, string loaiSan, string diaChi, string dienTich, string tinhTrang,
                float giathue_TheoGio, string thoigian_MoCua, string thoigian_DongCua,
                string coPhongThayDo, string coHeThongDen, string coBaoHiem, string nguoiQuanLy, string sodienthoai_LienHe, float SoGioChoi,float GiaThue);

//set va get

void setMaSan(string masan);
string getMaSan();
void setTenSan(string tenSan);
string getTenSan();
void setLoaiSan(string loaiSan);
string getLoaiSan();
void setDiaChi(string maSan);
string getDiaChi();
void setDienTich(string dienTich);
string getDienTich();
void setTinhTrang(string tinhTrang);
string getTinhTrang();
void setMaSan(float giathue_TheoGio);
void setGiaThue_TheoGio(float giathue_TheoGio);
float getGiaThue_TheoGio();
void setSoNguoiToiDa(int soNguoiToiDa);
int getSoNguoiToiDa();
void setThoiGian_MoCua(string thoigian_MoCua);
string getThoiGian_MoCua();
void setThoiGian_DongCua(string thoigian_DongCua);
string getThoiGian_DongCua();
void setCoPhongThayDo(string coPhongThayDo);
string getCoPhongThayDo();
void setCoHeThongDen(string coHeThongDen);
string getCoHeThongDen();
void setCoBaoHim(string coBaoHiem);
string getCoBaoHiem();
void setNguoiQuanLy(string nguoiQuanLy);
string getNguoiQuanLy();
void setSoDienThoai_LienHe(string sodienthoai_LienHe);
string getSoDienThoai_LienHe();
void setSoGioChoi(float SoGioChoi);
float getSoGioChoi();
void setGiaThue();
float getGiaThue();

virtual void input();

virtual void output();

virtual ~HeThongSanTheThao();
};

#endif