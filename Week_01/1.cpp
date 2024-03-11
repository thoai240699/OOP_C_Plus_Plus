#include <iostream>

using namespace std;

//Viết chương trình nhập vào một phân số, rút gọn phân số và xuất kết quả.

struct PhanSo{
    int Tu;
    int Mau;
};
void NhapPS(PhanSo &a)
{
    cout << "Nhap lan luot tu so va mau so: ";
    cin >> a.Tu >> a.Mau;
}
void XuatPS(PhanSo a)
{
    cout << a.Tu << "/" << a.Mau;
}

int UCLN(int a, int b) // thuat toan euclid
{
    if(b == 0)
        return a;
    return UCLN(b, a%b);
}
void RutGonPS(PhanSo &a)
{
    int ucln = UCLN(a.Tu, a.Mau);
    a.Tu /= ucln;
    a.Mau /= ucln;
}


int main()
{
    PhanSo a;
    NhapPS(a);
    RutGonPS(a);
    XuatPS(a);

    return 0;
}
