#include <iostream>

using namespace std;
/*
1. Thiết lập lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu
tử số, mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số, các
hàm thành phần xuất, nhập, định giá trị cho phân số. Viết chương trình cho
phép nhập vào hai phân số, in ra kết quả các phép toán cộng, trừ, nhân, chia hai
phân số kể trên.
*/
class cPhanSo{
    private:
        int tuSo, mauSo; //Neu khong co private: thi mac dinh la private
    public:
 //   cPhanSo(); // Ham tao khong doi
    cPhanSo(int, int);//Ham tao co doi/; Contructor
    ~cPhanSo(); // Ham DeContructor
    void NhapPhanSo();
    void XuatPhanSo();
//Ham tao sao chep
// Tao doi tuong moi tu doi tuong da ton tai
//    cPhanSo(cPhanSo &c) {
//        this->tuSo = c.tuSo;
//        this->mauSo = c.mauSo;
//    }
    cPhanSo cong(cPhanSo a, cPhanSo b);
    cPhanSo cong(cPhanSo x);
    cPhanSo operator+(cPhanSo x);
    cPhanSo operator-(cPhanSo x);
    cPhanSo operator*(cPhanSo x);
    cPhanSo operator/(cPhanSo x);
//    cPhanSo &operator=(cPhanSo &c);
};
// Ham tao khong doi
//    cPhanSo::cPhanSo()
//    {
//        tuSo = 0;
//        mauSo = 1;
//    }
// Ham tao co doi so
cPhanSo::cPhanSo(int t = 0, int m = 1){
        this->tuSo = t;
        this->mauSo = m;
    }

cPhanSo::~cPhanSo()
{
    cout << "Decontructor" << endl;
}



void cPhanSo::NhapPhanSo(){
    cout << "Nhap vao tu so: "; cin >> tuSo;
    cout << "Nhap vao mau so: "; cin >> mauSo;
}
void cPhanSo::XuatPhanSo(){
    cout << this->tuSo << "/" << this->mauSo << endl;
}
//cPhanSo &cPhanSo::operator=(cPhanSo &c) {
//    this->tuSo = c.tuSo;
//    this->mauSo = c.mauSo;
//    return *this;
//}

cPhanSo cPhanSo::cong(cPhanSo a, cPhanSo b){
    cPhanSo temp;
    temp.tuSo = a.tuSo*b.mauSo + a.mauSo*b.tuSo;
    temp.mauSo = a.mauSo*b.mauSo;
    return temp;
};

cPhanSo cPhanSo::cong(cPhanSo b){
    cPhanSo temp;
    temp.tuSo = this->tuSo*b.mauSo + this->mauSo*b.tuSo;
    temp.mauSo = this->mauSo*b.mauSo;
    return temp;
};

cPhanSo cPhanSo::operator+(cPhanSo b){
    cPhanSo temp;
    temp.tuSo = this->tuSo*b.mauSo + this->mauSo*b.tuSo;
    temp.mauSo = this->mauSo*b.mauSo;
    return temp;
}

cPhanSo cPhanSo::operator-(cPhanSo b){
    cPhanSo temp;
    temp.tuSo = this->tuSo*b.mauSo - this->mauSo*b.tuSo;
    temp.mauSo = this->mauSo*b.mauSo;
    return temp;
}

cPhanSo cPhanSo::operator*(cPhanSo b){
    cPhanSo temp;
    temp.tuSo = this->tuSo*b.tuSo;
    temp.mauSo = this->mauSo*b.mauSo;
    return temp;
}

cPhanSo cPhanSo::operator/(cPhanSo b){
    cPhanSo temp;
    temp.tuSo = this->tuSo*b.mauSo;
    temp.mauSo = this->mauSo*b.tuSo;
    return temp;
}
int main()
{
    cPhanSo p1(2,3), p2(1,3), p3, p4(p1);
    cPhanSo p5(p3);
    cout << "Nhap phan so p1:\n";
    p1.NhapPhanSo();
    cout << "Nhap phan so p2:\n";
    p2.NhapPhanSo();
    p3 = p1 + p2;
    p3.XuatPhanSo();
    p3 = p1 - p2;
    p3.XuatPhanSo();
    p3 = p1 * p2;
    p3.XuatPhanSo();
    p3 = p1 / p2;
    p3.XuatPhanSo();
//    p1.XuatPhanSo();
//    p2.XuatPhanSo();
//    p3.XuatPhanSo();
//    p4.XuatPhanSo();
//    cout << "Ham cong co 2 doi so\n";
//    p3 = p3.cong(p1, p2);
//    p3.XuatPhanSo();
//    cout << "Ham cong co 1 doi so\n";
//    p4 = p1.cong(p2);
//    p4.XuatPhanSo();
//    cout << "Ham cong toan tu\n";
//    p5 = p1 + p2;
//    p5.XuatPhanSo();
//    p5 = p1;
//    cout << "Toan tu =\n";
//    p5.XuatPhanSo();


    return 0;
}
