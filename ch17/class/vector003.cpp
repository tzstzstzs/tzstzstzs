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

My_vector* some_fct()
{
	My_vector* my_vec = new My_vector(10);
	return my_vec;
}

int main()
{
	My_vector* my = some_fct();

	cout << my->size() << endl;

	delete my;

	return 0;
}