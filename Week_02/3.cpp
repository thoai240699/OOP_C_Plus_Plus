#include <iostream>
#include <string>
using namespace std;

/*
3. Xây dựng lớp Candidate (Thí sinh) gồm các thuộc tính: mã, tên, ngày tháng năm
sinh, điểm thi Toán, Văn, Anh và các phương thức cần thiết.
Xây dựng lớp TestCandidate để kiểm tra lớp trên:
- Nhập vào n thí sinh (n do người dùng nhập)
- In ra thông tin về các thí sinh có tổng điểm lớn hơn 15
*/
class TestCandidate {
    private:
    string maThiSinh; // dùng string thay int vì không cần tính toán
    string tenThiSinh;
    string ngaySinh; // vì ngày sinh chỉ lưu trữ, không cần thiết dung date tine
    float diemToan, diemVan, diemAnh, diemTong;
    public:
    TestCandidate();// Constructor
    ~TestCandidate(); // Destructor
    void SetCandidate(string m, string t, string ns, float dt, float dv, float da);
    float GetTongDiem();
    void NhapThiSinh();
    void XuatThiSinh();

};
TestCandidate::TestCandidate(){
        maThiSinh = "";
        tenThiSinh = "";
        ngaySinh = "";
        diemToan = 0; diemVan = 0; diemAnh = 0; diemTong = 0;
    }
TestCandidate::~TestCandidate(){
        cout << "Destructor" << endl;
    };
void TestCandidate::NhapThiSinh(){
    cout << "Nhap ma thi sinh: "; cin >> maThiSinh;
    cin.ignore(); // Xoa bo dem
    cout << "Nhap Ho Ten thi sinh: "; getline(cin,tenThiSinh);
    //cin.ignore(); // Xoa bo dem
    cout << "Nhap ngay sinh: ";cin>> ngaySinh;
	//fflush(stdin);
	cout << "Nhap diem toan: "; cin>> diemToan;
	cout << "Nhap diem Van: "; cin>> diemVan;
	cout << "Nhap diem Anh: "; cin>> diemAnh;
	diemTong = diemToan + diemVan + diemAnh;
};
void TestCandidate::XuatThiSinh() {
	cout << "Thi sinh: " << tenThiSinh
         << "\nMa thi Sinh: " << maThiSinh
         << "\Tong diem: " << diemTong << endl;
}
void TestCandidate::SetCandidate(string m, string t, string ns, float dt, float dv, float da)
{
    maThiSinh = m;
    tenThiSinh = t;
    ngaySinh = ns;
    diemToan = dt;
    diemVan = dv;
    diemAnh = da;
    diemTong = dt + dv + da;
}
float TestCandidate::GetTongDiem(){
    return diemTong;
}


int main()
{
    /*
    //TestCandidate ts[10];
	TestCandidate firstStudent;

	//firstStudent.NhapThiSinh();
    firstStudent.SetCandidate("DA-2345"); // Tu nhap gia tri thay vi nhap
	cout << "Thi sinh co Tong diem la: " << firstStudent.GetTongDiem() << endl;
	firstStudent.XuatThiSinh();

    TestCandidate firstStudent, secondStudent;
    int n = 1;
    */

    //Khai bao doi tuong


    TestCandidate ts[10];
//    //set de test
//    ts[0].SetCandidate("D01-0001", "Tran van a", "01/04/1999", 5, 5, 2);
//	ts[1].SetCandidate("D01-0002", "Tran van b", "01/04/1998", 5, 5, 5);
//	ts[2].SetCandidate("D01-0003", "Tran van c", "01/02/1999", 5, 5, 8);
//	int n = 3;



    int n = 0;
    do {
        cout << "Nhap so thi sinh: "; cin >> n;
    } while(n < 1 || n > 10);


    for( int i = 0; i < n; i++)
    {
        ts[i].NhapThiSinh();
    }

    cout << "Xuat danh sach thi sinh co tong diem lon hon 15: " << endl;

    for( int i = 0; i < n; i++)
    {
        if(ts[i].GetTongDiem() > 15)
            ts[i].XuatThiSinh();
    }


    return 0;
}
