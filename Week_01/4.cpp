#include <iostream>

using namespace std;

//4. Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả.

struct NgayThangNam
{
    int ngay, thang, nam;
};

void NhapNgay(NgayThangNam &d)
{
    cout << "Nhap ngay thang nam: ";
    cin >> d.ngay >> d.thang >> d.nam;
}
void XuatNgay(NgayThangNam d)
{
    cout << d.ngay << "/" << d.thang << "/" << d.nam << endl;
}
bool NamNhuan(int nam)
{
    return (nam%4 == 0 && nam%100 != 0) || (nam%400 == 0);
}

int NgayTrongThang(int thang, int nam)
{
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        return 30;
    }
    else if (thang == 2)
    {
        return NamNhuan(nam) ? 29 : 28;
    }
    else
    {
        return 31;
    }
}
NgayThangNam NgayKe(NgayThangNam ngayhientai)
{
    NgayThangNam ngayke = ngayhientai;
    if(ngayke.ngay < NgayTrongThang(ngayke.thang, ngayke.nam))
        ngayke.ngay++;
    else
    {
        ngayke.ngay = 1;
        if(ngayke.thang < 12)
            ngayke.thang++;
        else
        {
            ngayke.thang = 1;
            ngayke.nam++;
        }
    }
     return ngayke;
}


int main()
{
    NgayThangNam ngayhientai = {29, 02, 2024}, ngayke;
    NhapNgay(ngayhientai);
    ngayke = NgayKe(ngayhientai);
    cout << "\nNgay hien tai: ";
    XuatNgay(ngayhientai);
    cout << "\nNgay ke tiep: ";
    XuatNgay(ngayke);

    return 0;
}
