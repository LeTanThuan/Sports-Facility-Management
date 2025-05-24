#include "QLyHeThongSanTheThao.h"
#include <fstream>

using namespace std;
//constructor without parameters
QLyHeThongSanTheThao::QLyHeThongSanTheThao()
{
    this->n = 0;
}
//constructor with parameters
QLyHeThongSanTheThao::QLyHeThongSanTheThao(int n) 
{
    n = 0;
}
// input function
void QLyHeThongSanTheThao::input()
{
    choose = 0;
    //Polymorphism
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


// Destructor function
QLyHeThongSanTheThao::~QLyHeThongSanTheThao() {
    for (int i = 0; i < n; i++) 
    {
        delete list[i];
    }
}

// add a new field
void QLyHeThongSanTheThao::themSan() {
    int choose=0;
    //Polymorphism
    if (n < 100) 
    {
        cout <<"\nBan muon them san gi";
        cout <<"\n1. San Bong Bay Nguoi";
        cout <<"\n2. San Bong Nam Nguoi";
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

//function to display all courts
void QLyHeThongSanTheThao::hienthi_TatCaSan() 
{
    cout <<"\nDanh sach tat ca cac san:\n";
    for (int i = 0; i < n; i++) 
    {
        list[i]->output();
    }
}

//function to sort the field by time
void QLyHeThongSanTheThao::sapxep_TheoGio() 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (list[j]->getSoGioChoi() < list[minIndex]->getSoGioChoi()) 
            {
                minIndex = j;
            }
        }       
        HeThongSanTheThao* temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }

    cout <<"\nDanh sach san da duoc xap xep theo gio hoat dong!\n";
}

// function to sort the field by price
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

//promotion function
float QLyHeThongSanTheThao::tinhKhuyenMai(float giaThue, int soGioChoi) 
{
    float giamGia = 0;

    if (soGioChoi >= 5) 
    {
        giamGia = giaThue * 0.1; //10% discount
    } else if (soGioChoi >= 10) 
    {
        giamGia = giaThue * 0.2; //20% discount
    }else
    {
        giamGia=0;
    }
    return giaThue - giamGia;
}

//function to calculate the total revenue received
float QLyHeThongSanTheThao::tinhTongTienThuDuoc() 
{
    float totalRevenue = 0;
    for (int i = 0; i < n; i++) 
    {
        if (list[i] != nullptr)
        { 
            totalRevenue += list[i]->getSoGioChoi() * (list[i]->getGiaThue(), list[i]->getSoGioChoi());
        }
    }
    return totalRevenue;
}

//function to display the field by field code
void QLyHeThongSanTheThao::hienthi_SanTheoMaSan() 
{
    bool found = false;
    string id;
    cin.ignore();
    cout<<"\nNhap ma san ban muon hien thi: ";
    getline(cin,id);

    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getMaSan() == id) 
        {
            found = true;
            cout << "San co ma san: " << id << " duoc tim thay:\n";
            list[i]->output();
            break;
        }
    }

    if (!found) 
    {
        cout << "\nKhong tim thay san co ma san: " << id << "!\n";
    }
}

//function to delete stadium by code
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

//function to save the list to a file
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

// function to update rental price by id
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

// function to display the list of courts by type
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

//function to count the number of courts by type
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

//function to count the number of courts by type
void QLyHeThongSanTheThao::thongke_SoLuongTheoLoai() 
{
    cout << "\nThong ke so luong san theo tung loai:\n";
    cout << "San bong nam nguoi: " << demSoSanTheoLoai("SanBongNamNguoi") << " san\n";
    cout << "San bong bay nguoi: " << demSoSanTheoLoai("SanBongBayNguoi") << " san\n";
    cout << "San cau long: " << demSoSanTheoLoai("SanCauLong") << " san\n";
    cout << "San PickleBall: " << demSoSanTheoLoai("SanPickleBall") << " san\n";
}

// revenue statistics function by type of court
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

//statistical function by price range
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
//function to lookup active time
void QLyHeThongSanTheThao::traCuuThoiGianHoatDong() {
    string idSan;
    cin.ignore();
    cout << "Nhap ma san muon tra cuu: ";
    getline(cin, idSan);
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (list[i]->getMaSan() == idSan ) 
        {
            cout << "\nSan " << list[i]->getMaSan() << " mo cua tu "<< list[i]->getThoiGian_MoCua() << " den " << list[i]->getThoiGian_DongCua() << endl;
            found = true;
        }
    }

    if (!found) 
    {
        cout << "\nKhong tim thay san voi ma san da nhap!" << idSan << endl;
    }
}
