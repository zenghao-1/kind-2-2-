#include  <iostream>
using namespace std;
const double PI = 3.1314;
class cr
{
private:
	int x = 0, y = 0, r = 0;
public:
	void pr(int& x, int& y, int& r);
	void c(int& x, int& y, int& r);
	void putC(int& r);

};

int main()
{
	cr A;
	int x, y, r;
	A.pr(x,y,r);
	A.c(x, y, r);
	A.putC(r);
}

void cr::pr(int& x, int& y, int& r)
{
	cout << "Բ��(x,y):";
	cin >> x >> y;
	cout << "�뾶r��";
	cin >> r;
}

void cr::c(int& x, int& y, int& r)
{
	cout << "Բ�ģ�(" << x << "," << y << ")" << "\t" << "�뾶: " << r << endl;
}

void cr::putC(int& r)
{
	cout << "Բ�������" << PI * r * r <<endl;
}