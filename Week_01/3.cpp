#include <iostream>

using namespace std;

/*
Viết chương trình nhập vào hai phân số. Tính tổng, hiệu, tích, thương giữa chúng
và xuất kết quả.

*/

struct PS{
    int tu, mau;
};
void NhapPS(PS &a)
{
    cout << "Nhap lan luot tu so va mau so: ";
    cin >> a.tu >> a.mau;
}
void XuatPS(PS a)
{
    cout << a.tu << "/" << a.mau << endl;
}

int UCLN(int a, int b) // thuat toan euclid
{
    if(b == 0)
        return a;
    return UCLN(b, a%b);
}
void RutGon(PS &a)
{
    int ucln = UCLN(a.tu, a.mau);
    a.tu /= ucln;
    a.mau /= ucln;
}
PS operator+(PS a, PS b)
{
    PS kq;
    kq.tu = a.tu*b.mau + a.mau*b.tu;
    kq.mau = a.mau*b.mau;
    RutGon(kq);
    return(kq);
}
PS operator-(PS a, PS b)
{
    PS kq;
    kq.tu = a.tu*b.mau - a.mau*b.tu;
    kq.mau = a.mau*b.mau;
    RutGon(kq);
    return(kq);
}
PS operator*(PS a, PS b)
{
    PS kq;
    kq.tu = a.tu*b.tu;
    kq.mau = a.mau*b.mau;
    RutGon(kq);
    return(kq);
}
PS operator/(PS a, PS b)
{
    PS kq;
    kq.tu = a.tu*b.mau;
    kq.mau = a.mau*b.tu;
    RutGon(kq);
    return(kq);
}



int main()
{
    PS a = {6, 3}, b = {2,3};
    PS tong = a + b;
    PS hieu = a - b;
    PS tich = a * b;
    PS thuong = a / b;
    XuatPS(tong);
    XuatPS(hieu);
    XuatPS(tich);
    XuatPS(thuong);
    return 0;
}
