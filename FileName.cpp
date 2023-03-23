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
	cout << "圆心(x,y):";
	cin >> x >> y;
	cout << "半径r：";
	cin >> r;
}

void cr::c(int& x, int& y, int& r)
{
	cout << "圆心：(" << x << "," << y << ")" << "\t" << "半径: " << r << endl;
}

void cr::putC(int& r)
{
	cout << "圆的面积：" << PI * r * r <<endl;
}