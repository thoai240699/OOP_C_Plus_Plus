#include <iostream>

using namespace std;

//Viết chương trình nhập vào hai phân số, tìm phân số lớn nhất và xuất kết quả.

struct PhanSo{
    int Tu;
    int Mau;
};
void NhapPS(PhanSo &a)
{
    cout << "Nhap lan luot tu so va mau so: ";
    cin >> a.Tu >> a.Mau;
}
void XuatPS(PhanSo &a)
{
    cout << a.Tu << "/" << a.Mau;
}

PhanSo TimMaxPS(PhanSo a, PhanSo b)
{
    if(a.Tu*b.Mau > b.Tu*a.Mau)
        return a;
    else
        return b;
}


int main()
{
    PhanSo a, b, kq;
    NhapPS(a);
    NhapPS(b);
    kq = TimMaxPS(a, b);
    XuatPS(kq);
    return 0;
}
