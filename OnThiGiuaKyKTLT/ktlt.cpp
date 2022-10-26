#include <iostream>
using namespace std;
const int MAX = 50;
struct ARRAY {
	int list[MAX];
	int n;
};
void nhapDs(ARRAY& a) {
	cout << "\n Nhap So Phan Tu: "; cin >> a.n;
	for (int i = 0; i < a.n; i++) {
		cout << "\n a[" << i << "]=";
		cin >> a.list[i];
	}
}
void xuatDs(ARRAY a) {
	for (int i = 0; i < a.n; i++) {
		cout << " " << a.list[i];
	}

}

bool ktMangChinhPhuong(ARRAY a) {
	for (int i = 0; i < a.n; i++) {
		int sqr = sqrt(a.list[i]);
		if (sqr * sqr == a.list[i])
			return true;
	}
	return false;
}

int timBoi117Cuoi(ARRAY a) {
	for (int i = a.n - 1; i >= 0; i--) {
		if (a.list[i] % 11 == 0 || a.list[i] % 7 == 0)
			return i;
	}
	return -1;
}

ARRAY timBoi(ARRAY a) {
	int dem = 0;
	for (int i = 0; i < a.n; i++) {
		if (a.list[i + 1] % a.list[i] == 0) {
			dem++;
			cout << "\n " << a.list[i + 1];
		}
		else {
			return a;
		}
		cout << " \n" << dem;
	}
	return a;
}

bool ktMangTang(ARRAY a) {
	for (int i = 0; i < a.n - 1; i++) {
		if (a.list[i] > a.list[i + 1])
		{
			return false;
		}
	}
	return true;
}

int main() {
	ARRAY a;
	nhapDs(a);
	xuatDs(a);
	/*timBoi(a);*/
	if (ktMangTang(a) == true) {
		cout << " Mang Tang " << ktMangTang(a);
	}
	else {
		cout << "\n Kh Tang " << ktMangTang(a);
	}


}

//#include <iostream>
//using namespace std;
//const int DAT = 50;
//struct MATRAN
//{
//	int list[DAT][DAT];
//	int n;
//	int m;
//};
//void Nhap_MaTran(MATRAN& a)
//{
//	cout << "\n Nhap So Dong: "; cin >> a.n;
//	cout << "\n Nhap So Cot: "; cin >> a.m;
//	for (int i = 0; i < a.n; i++)
//		for (int j = 0; j < a.m; j++)
//		{
//			cout << "\n a[" << i << "]" << "[" << j << "]=";
//			cin >> a.list[i][j];
//		}
//}
//void Xuat_MaTran(MATRAN a)
//{
//	for (int i = 0; i < a.n; i++)
//	{
//		cout << endl;
//		for (int j = 0; j < a.m; j++)
//			cout << " " << a.list[i][j];
//	}
//}
//
//
//
//
//int timNhieuBoi37(MATRAN a) 
//{
//	int max = 0, hang = 0;
//	for (int i = 0; i < a.n; i++)
//	{
//		int dem = 0;
//		for (int j = 0; j < a.m; j++)
//			if (a.list[i][j]<0)
//			{
//				dem++;
//			}
//		if (dem >= max)
//		{
//			max = dem;
//			hang = i;
//		}
//	}
//	if (max == 0)
//	{
//		return -1;
//	}
//	return hang;
//}
//
//int main() {
//	MATRAN a;
//	Nhap_MaTran(a);
//	Xuat_MaTran(a);
//	cout << "\n Dong Co Boi Cua 3 Va 7 Nhieu Nhat: " << timNhieuBoi37(a);
//	
//	return 0;
//}