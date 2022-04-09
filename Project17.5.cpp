
#include <iostream>

using namespace std;

class Vector
{
public:
	Vector() : x(0), y(0), z(0)
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		cout << x << " " << y << " " << z << "\n";
	}
	float ModuleVector()
	{
		L = sqrt(x * x + y * y + z * z);
		cout << L << "\n";
		return L;
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
	double L = 0;
};

int main()
{
	Vector v(13, 9, 21);
	v.Show();
	v.ModuleVector();
}