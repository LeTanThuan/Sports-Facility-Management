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
        cout<<"Ban Muon Dat San Gi\n1. San Bong Bay Nguoi.\n2. San Bong Nam N.\n3. San Cau Long.\n4. San PickleBall.\n5. Thoat Khong Nhap nu!";
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
        cout<<"\nBan muon them san gi\n 1. San Bong Nam Nguoi\n 3. San Cau Long\n 4. San PickleBall\n 5. Đe huy khong them san\n";
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
        cout << "Khong the them san moi, danh sach sy!" << endl;
    }
}

// Hiển thị danh sách sân
void QLyHeThongSanTheThao::hienthi_TatCaSan() {
    cout << "\nDanh sach tat ca cac san:\n";
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
        // Hoán đổi phần tử
        HeThongSanTheThao* temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }

    cout << "\n📢 Danh sach san da duoc xap xep theo gio hoat dong!\n";
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
        // Hoán đổi
        HeThongSanTheThao* temp = list[i];
        list[i] = list[minIndex];
        list[minIndex] = temp;
    }

    cout << "\n📢 Danh sach san da duoc sap xep theo gia thue!\n";
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
void QLyHeThongSanTheThao::xoasan_TheoMa() 
{
    string idToDelete;
    cout << "Nhap ID san muon xoa: ";
    getline(cin,idToDelete);
    bool found = false;
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getMaSan() == idToDelete) 
        {
            found = true;
            delete list[i]; // Giải phóng bộ nhớ
            // Dịch chuyển danh sách
            for (int j = i; j < n - 1; j++) 
            {
                list[j] = list[j + 1];
            }
            list[n - 1] = nullptr; // Xóa phần tử cuối cùng sau khi dịch chuyển
            n--; // Giảm số lượng sân
            cout << "\n📢 San co ID " << idToDelete << " đa duoc xoa thanh cong!\n";
            break;
        }
    }

    if (!found)
    {
        cout << "\nKhong tim thay san co  ID " << idToDelete << endl;
    }
}

void QLyHeThongSanTheThao::luu_DanhSachRaFile() 
{
    ofstream outFile("DanhSachSan.txt");

    if (!outFile) 
    {
        cout << " Loi: Khong the mo file DanhSachSan.txt để ghi du lieu!" << endl;
        return;
    }

    for (int i = 0; i < n; i++) 
    {
        outFile << list[i]->getMaSan() << " "
                << list[i]->getTenSan() << " "
                << list[i]->getLoaiSan() << " "
                << list[i]->getGiaThue() << " "
                << list[i]->getSoGioChoi() << endl;
    }

    outFile.close();
    cout << "\n Danh sach san da duoc luu vao file DanhSachSan.txt`!\n";
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
            list[i]->setGiaThue(newPrice);
            cout << " Gia thue san ID " << id << " đa đuoc cap nhat thanh " << newPrice << "K/h\n";
            return;
        }
    }
    cout << "Khong tim thay san ID " << id << endl;
}

// Đếm số lượng sân theo loại (Bóng đá, cầu lông, pickleball...)
void QLyHeThongSanTheThao::demSoSanTheoLoai(string loai) 
{
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getLoaiSan() == loai) 
        {
            count++;
        }
    }
    cout<<"📢Loai San "<<loai<<" Co "<<count<<" San.\n";
}

// Hiển thị danh sách sân theo loại (Bóng đá, cầu lông...)
void QLyHeThongSanTheThao::hienThiTheoLoai() 
{
    string loai;
    cout<<"Nhap loai san can hien thi: ";
    getline(cin,loai);
    cout << "\n Danh sach san loai: " << loai << endl;
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getLoaiSan() == loai) 
        {
            list[i]->output();
        }
    }
}

/*// Thống kê số lượng sân theo từng loại
void QLyHeThongSanTheThao::thongke_SoLuongTheoLoai() 
{
    cout << "\n Thống kê số lượng sân theo từng loại:\n";
    cout << "Bóng đá 5 người: " << demSoSanTheoLoai("SanBongNamNguoi") << " sân\n";
    cout << "Bóng đá 7 người: " << demSoSanTheoLoai("SanBongBayNguoi") << " sân\n";
    cout << "Cầu lông: " << demSoSanTheoLoai("Cau Long") << " sân\n";
    cout << "PickleBall: " << demSoSanTheoLoai("San PickleBall") << " sân\n";
}*/

// Thống kê doanh thu theo loại sân
void QLyHeThongSanTheThao::thongke_DoanhThuTheoLoai() 
{
    float doanhThuBong5 = 0, doanhThuBong7 = 0, doanhThuCauLong = 0, doanhthuPickleBall = 0;
    
    for (int i = 0; i < n; i++) 
    {
        if (list[i]->getLoaiSan() == "Bong da 5") 
        {
            doanhThuBong5 += list[i]->getGiaThue() * list[i]->getSoGioChoi();
        } else if (list[i]->getLoaiSan() == "Bong da 7") 
        {
            doanhThuBong7 += list[i]->getGiaThue() * list[i]->getSoGioChoi();
        } else if (list[i]->getLoaiSan() == "Cau long") 
        {
            doanhThuCauLong += list[i]->getGiaThue() * list[i]->getSoGioChoi();
        }else if (list[i]->getLoaiSan() == "PickleBall") 
        {
            doanhthuPickleBall += list[i]->getGiaThue() * list[i]->getSoGioChoi();
        }
    }

    cout << "\n Thong Ke Doanh Thu Theo Loai:\n";
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
    cout << "\n📢 Danh Sach Co Gia Thue Tu " << min << "K Den " << max << "K:\n";
    for (int i = 0; i < n; i++) {
        if (list[i]->getGiaThue() >= min && list[i]->getGiaThue() <= max) 
        {
            list[i]->output();
        }
    }
}