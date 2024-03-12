#include <iostream>

using namespace std;
/*
2. Xây dựng lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu thực, ảo
và các hàm thành phần xuất, nhập, định giá trị cho số phức, cộng, trừ, nhân,
chia hai số phức. Viết chương trình cho phép nhập vào hai số phức, in ra kết quả
các phép toán cộng, trừ, nhân, chia hai số phức kể trên.
*/
//
//struct SoPhuc{
//    int thuc = 1;
//    int ao = 1;
//};
class SoPhuc{
private:
    float thuc;
    float ao;
public:
    SoPhuc(float x = 1,float y = 1){
        this->thuc = x;
        this->ao = y;
    }
//    SoPhuc(){
//        this->thuc = 1;
//        this->ao = 1;
//    }
    ~SoPhuc(){

    }
    void NhapSP();
    void XuatSP();
    SoPhuc operator+(SoPhuc);
    SoPhuc operator-(SoPhuc);
    SoPhuc operator*(SoPhuc);
    SoPhuc operator/(SoPhuc);

};

void SoPhuc::NhapSP(){
    cout << "Nhap lan luoc phan thuc va phan ao: ";
    cin >> this->thuc >> this->ao;
}
void SoPhuc::XuatSP() {
    cout << "(" << this->thuc << ", " << this->ao << ")" << endl;
}

SoPhuc SoPhuc::operator+(SoPhuc b) {
    SoPhuc x;
    x.thuc = this->thuc + b.thuc;
    x.ao = this->ao + b.ao;
    return x;
}

SoPhuc SoPhuc::operator-(SoPhuc b) {
    SoPhuc x;
    x.thuc = this->thuc - b.thuc;
    x.ao = this->ao - b.ao;
    return x;
}
SoPhuc SoPhuc::operator*(SoPhuc b) {
    SoPhuc x;
    x.thuc = this->thuc*b.thuc - ao*b.ao;
    x.ao = this->thuc*b.ao +  ao*b.thuc;
    return x;
}
SoPhuc SoPhuc::operator/(SoPhuc b) {
    SoPhuc x;
    x.thuc = (this->thuc * b.thuc + this->ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    x.ao = (b.thuc * this->ao - this->thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
    return x;
}

int main(){
    SoPhuc a, b, c;
    cout << "So phuc A: " << endl;
    a.NhapSP();
    cout << "So phuc B: " << endl;
    b.NhapSP();
    cout << "\nTong hai so phuc A va B: ";
    c = a + b;
    c.XuatSP();
    cout << "Hieu hai so phuc A va B: ";
    c = a - b;
    c.XuatSP();
    cout << "Tich hai so phuc A va B: ";
    c = a * b;
    c.XuatSP();
    cout << "Thuong hai so phuc A va B: ";
    c = a / b;
    c.XuatSP();
    return 0;
}
