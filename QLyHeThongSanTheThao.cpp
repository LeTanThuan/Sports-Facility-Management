#include "QLyHeThongSanTheThao.h"
#include <fstream>

using namespace std;

QLyHeThongSanTheThao::QLyHeThongSanTheThao()
{
    this->n = 0;
}

QLyHeThongSanTheThao::QLyHeThongSanTheThao(int n) 
{
    n = 0;
}

void QLyHeThongSanTheThao::input()
{
    choose = 0;
    while(1)
    {
        cout <<"\nBan Muon Dat San Gi!";
        cout <<"\n1. San Bong Bay Nguoi.";
        cout <<"\n2. San Bong Nam Nguoi.";
        cout <<"\n3. San Cau Long.";
        cout <<"\n4. San PickleBall.";
        cout <<"\n5. Thoat Khong Nhap Nua!";
        cout <<"\nMoi Nhap Su Lua Chon: ";
        cin>> choose;
        if (choose == 5)
            break;
        else if (choose == 1)
        {
            list[n] = new SanBongBayNguoi;
            list[n]->input();
            n++;
        }
        else if (choose == 2)
        {
            list[n] = new SanBongNamNguoi;
            list[n]->input();
            n++;
        }
        else if(choose == 3)
        {
            list[n] = new SanCauLong;
            list[n]->input();
            n++;
        }
        else if(choose == 4)
        {
            list[n] = new SanPickleBall;
            list[n]->input();
            n++;
        }
    }
}


// Destructor 
QLyHeThongSanTheThao::~QLyHeThongSanTheThao() {
    for (int i = 0; i < n; i++) {
        delete list[i];
    }
}

// Thêm sân mới
void QLyHeThongSanTheThao::themSan() {
    int choose=0;
    if (n < 100) {
        cout <<"\nBan muon them san gi";
        cout <<"\n1. San Bong Nam Nguoi";
        cout <<"\n3. San Cau Long";
        cout <<"\n4. San PickleBall";
        cout <<"\n5. De huy khong them san!";
        cout <<"\nMoi nhap su lua chon(1 - 5): ";
        cin>>choose;
        if (choose == 5)
            cout<<"Ban da huy khong them san!";
        else if (choose == 1)
        {
            list[n] = new SanBongBayNguoi;
            list[n]->input();
            n++;
        }
        else if (choose == 2)
        {
            list[n] = new SanBongNamNguoi;
            list[n]->input();
            n++;
        }
        else if(choose == 3)
        {
            list[n] = new SanCauLong;
            list[n]->input();
            n++;
        }
        else if(choose == 4)
        {
            list[n] = new SanPickleBall;
            list[n]->input();
            n++;
        }
    } else {
        cout <<"Khong the them san moi, danh sach da day!" << endl;
    }
}

// Hiển thị danh sách sân
void QLyHeThongSanTheThao::hienthi_TatCaSan() {
    cout <<"\nDanh sach tat ca cac san:\n";
    for (int i = 0; i < n; i++) {
        list[i]->output();
    }
}

void QLyHeThongSanTheThao::sapxep_TheoGio() {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (list[j]->getSoGioChoi() < list[minIndex]->getSoGioChoi()) {
                minIndex = j;
            }
        }       
        HeThongSanTheThao* temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }

    cout <<"\nDanh sach san da duoc xap xep theo gio hoat dong!\n";
}

void QLyHeThongSanTheThao::sapxep_TheoTien()
{
    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (list[j]->getGiaThue() < list[minIndex]->getGiaThue()) 
            {
                minIndex = j;
            }
        }
        
        HeThongSanTheThao* temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }

    cout <<"\nDanh sach san da duoc sap xep theo gia thue!\n";
}
float QLyHeThongSanTheThao::tinhTongTienThuDuoc() 
{
    float totalRevenue = 0;
    for (int i = 0; i < n; i++) 
    {
        if (list[i] != nullptr)
        { 
            totalRevenue += list[i]->getGiaThue() * list[i]->getSoGioChoi();
        }
    }
    return totalRevenue;
}
//ham xoa san theo ma
void QLyHeThongSanTheThao::xoasan_TheoMa() 
{
    string idToDelete;
    cin.ignore();
    cout << "Nhap ID san muon xoa: ";
    getline(cin,idToDelete);
    bool found = false;
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getMaSan() == idToDelete) 
        {
            found = true;
            delete list[i]; 
            for (int j = i; j < n - 1; j++) 
            {
                list[j] = list[j + 1];
            }
            list[n - 1] = nullptr; 
            n--; 
            cout <<"\nSan co ID " << idToDelete << " da duoc xoa thanh cong!\n";
            break;
        }
    }

    if (!found)
    {
        cout <<"\nKhong tim thay san co  ID " << idToDelete << endl;
    }
}
//ham luu danh sach ra file
void QLyHeThongSanTheThao::luu_DanhSachRaFile() 
{
    ofstream outFile("DanhSachSan.txt");

    if (!outFile) 
    {
        cout <<"Loi: Khong the mo file DanhSachSan.txt để ghi du lieu!" << endl;
        return;
    }

    for (int i = 0; i < n; i++) 
    {
        outFile << list[i]->getMaSan() << " "
                << list[i]->getTenSan() << " "
                << list[i]->getLoaiSan() << " "
                << list[i]->getSoGioChoi() << " "
                << list[i]->getGiaThue_TheoGio()<<" "
                << list[i]->getGiaThue() << endl;

    }

    outFile.close();
    cout << "\nDanh sach san da duoc luu vao file DanhSachSan.txt`!\n";
}


// Cập nhật giá thuê sân theo ID
void QLyHeThongSanTheThao::capNhatGiaThue() 
{
    string id;
    float newPrice;
    cout<<"Nhap ID can thay the gia: ";
    getline(cin,id);
    cout<<"Nhap gia thue san moi: ";
    cin>>newPrice;
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getMaSan() == id) 
        {
            list[i]->setGiaThue_TheoGio(newPrice);
            cout <<"Gia thue san ID "<< id <<" da duoc cap nhat thanh " << newPrice << "K/h\n";
            return;
        }
    }
    cout <<"Khong tim thay san ID " << id << endl;
}

// Hiển thị danh sách sân theo loại (Bóng đá, cầu lông...)
void QLyHeThongSanTheThao::hienThiTheoLoai() 
{
    string loai;
    cin.ignore();
    cout<<"Nhap loai san can hien thi(SanBongbayNguoi / SanBongNamNguoi / SanCauLong / SanPickleBall): ";
    getline(cin,loai);
    cout << "\nDanh sach san loai: " << loai << endl;
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getLoaiSan() == loai) 
        {
            list[i]->output();
        }
    }
}

// Đếm số lượng sân theo loại (Bóng đá, cầu lông, pickleball...)
int QLyHeThongSanTheThao::demSoSanTheoLoai(string loai) 
{
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getLoaiSan() == loai) 
        {
            count++;
        }
    }
    return count;
}

// Thống kê số lượng sân theo từng loại
void QLyHeThongSanTheThao::thongke_SoLuongTheoLoai() 
{
    cout << "\nThong ke so luong san theo tung loai:\n";
    cout << "San bong nam nguoi: " << demSoSanTheoLoai("SanBongNamNguoi") << " san\n";
    cout << "San bong bay nguoi: " << demSoSanTheoLoai("SanBongBayNguoi") << " san\n";
    cout << "San cau long: " << demSoSanTheoLoai("SanCauLong") << " san\n";
    cout << "San PickleBall: " << demSoSanTheoLoai("SanPickleBall") << " san\n";
}

// Thống kê doanh thu theo loại sân
void QLyHeThongSanTheThao::thongke_DoanhThuTheoLoai() 
{
    float doanhThuBong5 = 0, doanhThuBong7 = 0, doanhThuCauLong = 0, doanhthuPickleBall = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getLoaiSan() == "SanBongNamNguoi") 
        {
            doanhThuBong5 += list[i]->getGiaThue_TheoGio() * list[i]->getSoGioChoi();
        } else if (list[i]->getLoaiSan() == "SanBongBayNguoi") 
        {
            doanhThuBong7 += list[i]->getGiaThue_TheoGio() * list[i]->getSoGioChoi();
        } else if (list[i]->getLoaiSan() == "SanCauLong") 
        {
            doanhThuCauLong += list[i]->getGiaThue_TheoGio() * list[i]->getSoGioChoi();
        }else if (list[i]->getLoaiSan() == "SanPickleBall") 
        {
            doanhthuPickleBall += list[i]->getGiaThue_TheoGio() * list[i]->getSoGioChoi();
        }
    }

    cout << "\nThong Ke Doanh Thu Theo Loai:\n";
    cout << "Doanh Thu Bong Da Bay Nguoi: " << doanhThuBong5 << "K\n";
    cout << "Doanh Thu Bong Da Nam Nguoi: " << doanhThuBong7 << "K\n";
    cout << "Doanh thu Cau Long: " << doanhThuCauLong << "K\n";
    cout << "Doanh thu PickleBall: " << doanhthuPickleBall << "K\n";
}

// Thống kê sân theo khoảng giá
void QLyHeThongSanTheThao::thongke_TheoKhoangGia() 
{
    float min, max;
    cout<<"Nhap Gia Min va Max: ";
    cin>>min;
    cin>>max;
    cout << "\nDanh Sach Co Gia Thue Tu " << min << "K Den " << max << "K:\n";
    for (int i = 0; i < n; i++) {
        if (list[i]->getGiaThue() >= min && list[i]->getGiaThue() <= max) 
        {
            list[i]->output();
        }
    }
}
//Tra Cuu Thoi Gian Hoat Dong
void QLyHeThongSanTheThao::traCuuThoiGianHoatDong() {
    string idSan;
    cin.ignore();
    cout << "Nhap ma san muon tra cuu: ";
    getline(cin, idSan);
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (list[i]->getMaSan() == idSan ) {
            cout << "\nSan " << list[i]->getMaSan() << " mo cua tu "<< list[i]->getThoiGian_MoCua() << " den " << list[i]->getThoiGian_DongCua() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "\nKhong tim thay san voi ma san da nhap!" << idSan << endl;
    }
}