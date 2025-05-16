#include "QLyHeThongSanTheThao.h"
#include <fstream>

using namespace std;
#include "QlyHeThongSanTheThao.h"
#include <fstream>

using namespace std;

/*// Constructor
QlyHeThongSanTheThao::QlyHeThongSanTheThao() {
    totalFields = 0;
}

// Destructor (Giải phóng bộ nhớ)
QlyHeThongSanTheThao::~QlyHeThongSanTheThao() {
    for (int i = 0; i < totalFields; i++) {
        delete list[i];
    }
}

// Thêm sân mới
void QlyHeThongSanTheThao::themSan(HeThongSanTheThao* san) {
    if (totalFields < 100) {
        list[totalFields] = san;
        totalFields++;
    } else {
        cout << "Không thể thêm sân mới, danh sách đã đầy!" << endl;
    }
}

// Hiển thị danh sách sân
void QlyHeThongSanTheThao::hienThiTatCaSan() {
    cout << "\n📢 Danh sách sân thể thao:\n";
    for (int i = 0; i < totalFields; i++) {
        list[i]->output();
    }
}

// Sắp xếp sân theo giờ hoạt động (Selection Sort)
void QlyHeThongSanTheThao::sapXepTheoGio() {
    for (int i = 0; i < totalFields - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < totalFields; j++) {
            if (list[j]->getGioHoatDong() < list[minIndex]->getGioHoatDong()) {
                minIndex = j;
            }
        }
        swap(list[i], list[minIndex]);
    }
}

// Sắp xếp sân theo giá thuê (Selection Sort)
void QlyHeThongSanTheThao::sapXepTheoTien() {
    for (int i = 0; i < totalFields - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < totalFields; j++) {
            if (list[j]->getGiaThue() < list[minIndex]->getGiaThue()) {
                minIndex = j;
            }
        }
        swap(list[i], list[minIndex]);
    }
}

// Tính tổng tiền thu được từ sân
float QlyHeThongSanTheThao::tinhTongTienThuDuoc() {
    float total = 0;
    for (int i = 0; i < totalFields; i++) {
        total += list[i]->GiaThue() * list[i]->SoGioThue();
    }
    return total;
}

// Tìm sân theo tên
HeThongSanTheThao* QlyHeThongSanTheThao::timSanTheoTen(string ten) {
    for (int i = 0; i < totalFields; i++) {
        if (list[i]->getTenSan() == ten) {
            return list[i];
        }
    }
    return nullptr;
}

// Xóa sân theo mã ID
void QlyHeThongSanTheThao::xoaSanTheoMa(int id) {
    for (int i = 0; i < totalFields; i++) {
        if (list[i]->getID() == id) {
            delete list[i];
            for (int j = i; j < totalFields - 1; j++) {
                list[j] = list[j + 1];
            }
// Cập nhật giá thuê sân theo ID
void QlyHeThongSanTheThao::capNhatGiaThue(int id, float newPrice) {
    for (int i = 0; i < totalFields; i++) {
        if (list[i]->getID() == id) {
            list[i]->setGiaThue(newPrice);
            cout << "📢 Giá thuê sân ID " << id << " đã được cập nhật thành " << newPrice << "K/h\n";
            return;
        }
    }
    cout << "Không tìm thấy sân ID " << id << endl;
}

// Đếm số lượng sân theo loại (Bóng đá, cầu lông, pickleball...)
int QlyHeThongSanTheThao::demSoSanTheoLoai(string loai) {
    int count = 0;
    for (int i = 0; i < totalFields; i++) {
        if (list[i]->getLoaiSan() == loai) {
            count++;
        }
    }
    return count;
}

// Ghi toàn bộ danh sách sân vào file .txt
void QlyHeThongSanTheThao::luuDanhSachRaFile() {
    ofstream outFile("SanBong.txt");
    for (int i = 0; i < totalFields; i++) {
        outFile << list[i]->getID() << " " << list[i]->getTenSan() << " "
                << list[i]->getLoaiSan() << " " << list[i]->getGiaThue() << endl;
    }
    outFile.close();
    cout << "📢 Danh sách sân đã được lưu vào file SanBong.txt\n";
}

// Đọc danh sách sân từ file .txt
void QlyHeThongSanTheThao::taiDanhSachTuFile() {
    ifstream inFile("SanBong.txt");
    int id;
    string tenSan, loaiSan;
    float giaThue;
    
    cout << "\n📢 Đọc danh sách sân từ file:\n";
    while (inFile >> id >> tenSan >> loaiSan >> giaThue) {
        cout << "Sân ID: " << id << ", Tên: " << tenSan << ", Loại: " << loaiSan << ", Giá thuê: " << giaThue << "K/h\n";
    }
    inFile.close();
}

// Hiển thị danh sách sân theo loại (Bóng đá, cầu lông...)
void QlyHeThongSanTheThao::hienThiTheoLoai(string loai) {
    cout << "\n📢 Danh sách sân loại: " << loai << endl;
    for (int i = 0; i < totalFields; i++) {
        if (list[i]->getLoaiSan() == loai) {
            list[i]->output();
        }
    }
}

// Thống kê số lượng sân theo từng loại
void QlyHeThongSanTheThao::thongKeSoLuongTheoLoai() {
    cout << "\n📢 Thống kê số lượng sân theo từng loại:\n";
    cout << "Bóng đá 5 người: " << demSoSanTheoLoai("Bóng đá 5") << " sân\n";
    cout << "Bóng đá 7 người: " << demSoSanTheoLoai("Bóng đá 7") << " sân\n";
    cout << "Cầu lông: " << demSoSanTheoLoai("Cầu lông") << " sân\n";
}

// Thống kê doanh thu theo loại sân
void QlyHeThongSanTheThao::thongKeDoanhThuTheoLoai() {
    float doanhThuBong5 = 0, doanhThuBong7 = 0, doanhThuCauLong = 0;
    
    for (int i = 0; i < totalFields; i++) {
        if (list[i]->getLoaiSan() == "Bóng đá 5") {
            doanhThuBong5 += list[i]->getGiaThue() * list[i]->getSoGioThue();
        } else if (list[i]->getLoaiSan() == "Bóng đá 7") {
            doanhThuBong7 += list[i]->getGiaThue() * list[i]->getSoGioThue();
        } else if (list[i]->getLoaiSan() == "Cầu lông") {
            doanhThuCauLong += list[i]->getGiaThue() * list[i]->getSoGioThue();
        }
    }

    cout << "\n📢 Thống kê doanh thu theo loại sân:\n";
    cout << "Doanh thu Bóng đá 5 người: " << doanhThuBong5 << "K\n";
    cout << "Doanh thu Bóng đá 7 người: " << doanhThuBong7 << "K\n";
    cout << "Doanh thu Cầu lông: " << doanhThuCauLong << "K\n";
}

// Thống kê sân theo khoảng giá
void QlyHeThongSanTheThao::thongKeTheoKhoangGia(float min, float max) {
    cout << "\n📢 Danh sách sân có giá thuê từ " << min << "K đến " << max << "K:\n";
    for (int i = 0; i < totalFields; i++) {
        if (list[i]->getGiaThue() >= min && list[i]->getGiaThue() <= max) {
            list[i]->output();
        }
    }
}*/