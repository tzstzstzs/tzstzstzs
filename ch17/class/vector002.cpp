#include "../std_lib_facilities.h"

class My_vector {
private:
	int sz;
	double* elem;
public:
	My_vector(int s): sz(s), elem{new double[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
	}
	~My_vector() { delete[] elem; } // Destructor: akkor fut le, amikor már ezt az elemet nem használhatjuk

	double get(int n) const { return elem[n]; }
	void set(int n, double val) { elem[n] = val; }

	int size() const { return sz; }
};

int main()
{
	My_vector v(10);

	v.set(2, 2.2);
	cout << "v[2]: " << v.get(2) << endl;

	cout << "v's size: " << v.size() << endl;

	for (int i = 0; i < 10; ++i)
		cout << v.get(i) << endl;

	return 0;
}