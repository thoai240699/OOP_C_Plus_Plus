#include <iostream>
#include <iomanip>
using namespace std;
/*
5. Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh. Tính điểm
trung bình và xuất kết quả
*/
typedef struct HocSinh{
    char HoTen[50];
    float Toan;
    float Van;
    float TB;
} HS;
void NhapDiem(HS &a)
{
    cout << "Nhap lan Ho ten SV: ";
    cin.getline(a.HoTen, 50);
    cout << "Nhap lan luot diem Toan, diem Van: ";
    cin >> a.Toan >> a.Van;
}
void TinhTB(HS &a)
{
    a.TB = (a.Toan + a.Van)/2;
}
void XuatDiem(HS a)
{
    cout << "Ho Ten: " << a.HoTen << "\nDiem Toan: " << a.Toan << "\nDiem Van: " << a.Van << fixed << setprecision(2) << "\nDiem trung binh: " << a.TB << endl;
}
int main()
{
    HS a;
    NhapDiem(a);
    TinhTB(a);
    XuatDiem(a);

    return 0;
}
