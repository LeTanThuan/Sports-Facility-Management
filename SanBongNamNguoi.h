#ifndef SANBONGNAMNGUOI_H
#define SANBONGNAMNGUOI_H

#include "HeThongSanTheThao.h"
#include <iostream>
using namespace std;
class SanBongNamNguoi : public HeThongSanTheThao
{
    private:
        string LoaiCo;
        string ChieuDaiSan;
        string ChieuRongSan;
        string LoaiBong;
        string CoLuoi;
        string CoHangRao;
        string SoLuongPhatGoc;
        string CoHeThongTuoiNuoc;
        string CameraGiamSat;
        string CoPhongNghi;
        string LichThiDau;
        string CoWifi;
        string SoLuongTrongTai;
        string CoHeThongAmThanh;
        string MucDoBaoTri;
    public:
    //constructor without parameters
    SanBongNamNguoi();
    //constructor with parameters
    SanBongNamNguoi(string LoaiCo, string ChieuDaiSan, string ChieuRongSan, string LoaiBong, string CoLuoi,
                    string CoHangRao, string SoLuongPhatGoc, string CoHeThongTuoiNuoc, string CameraGiamSat,
                    string CoPhongNghi, string LichThiDau, string CoWifi, string SoLuongTrongTai, string CoHeThongAmThanh, string MucDoBaoTri);
    
    //setter and getter function                
    void setLOAICO(string LoaiCo);
    string getLOAICO();

    void setCHIEUDAISAN(string ChieuDaiSan);
    string getCHIEUDAISAN();

    void setCHIEURONGSAN(string ChieuRongSan);
    string getCHIEURONGSAN();

    void setLOAIBONG(string LoaiBong);
    string getLOAIBONG();

    void setCOLUOI(string CoLuoi);
    string getCOLUOI();

    void setCOHANGRAO(string CoHangRao);
    string getCOHANGRAO();

    void setSOLUONGPHATGOC(string SoLuongPhatGoc);
    string getSOLUONGPHATGOC();

    void setCOHETHONGTUOINUOC(string CoHeThongTuoiNuoc);
    string getCOHETHONGTUOINUOC();

    void setCAMERAGIAMSAT(string CameraGiamSat);
    string getCAMERAGIAMSAT();

    void setCOPHONGNGHI(string CoPhongNghi);
    string getCOPHONGNGHI();

    void setLICHTHIDAU(string LichThiDau);
    string getLICHTHIDAU();

    void setCOWIFI(string CoWifi);
    string getCOWIFI();

    void setSOLUONGTRONGTAI(string SoLuongTrongTai);
    string getSOLUONGTRONGTAI();

    void setCOHETHONGAMTHANH(string CoHeThongAmThanh);
    string getCOHETHONGAMTHANH();

    void setMUCDOBAOTRI(string MucDoBaoTri);
    string getMUCDOBAOTRI();
    //input override function
    virtual void input() override;
    //output override function
    virtual void output() override;
    // destructor function
    virtual ~SanBongNamNguoi();
};

#endif