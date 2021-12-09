#include "../std_lib_facilities.h"

class My_vector {
private:
	long unsigned int sz;
	double* elem;
public:
	My_vector(int s): sz(s), elem{new double[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
	}
	
	My_vector(initializer_list<double> lst): sz{lst.size()}, elem{new double[sz]}
	{
		copy(lst.begin(), lst.end(), elem);
	}

	My_vector(const My_vector& arg): sz{arg.sz}, elem{new double[arg.sz]}
	{
		copy(arg.elem, arg.elem+arg.sz, elem);
	}

	My_vector operator=(const My_vector& arg)
	{
		double *p = new double[arg.sz];
		copy(arg.elem, arg.elem+arg.sz, p);
		delete elem;
		elem = p;
		sz = arg.sz;
		return *this;
	}

	~My_vector() { delete[] elem; } // Destructor: akkor fut le, amikor már ezt az elemet nem használhatjuk

	double get(int n) const { return elem[n]; }
	void set(int n, double val) { elem[n] = val; }

	int size() const { return sz; }
};



int main()
{
	My_vector v2 {12.2, 13.3, 14.4 };

	for (int i = 0; i < v2.size(); ++i)
		cout << v2.get(i) << endl;

	My_vector v3 (v2);

	for (int i = 0; i < v3.size(); ++i)
		cout << v3.get(i) << endl;

	My_vector v4 (10);

	cout << "v4 size before assignment: " << v4.size() << endl;

	v4 = v3;

	for (int i = 0; i < v4.size(); ++i)
		cout << v4.get(i) << endl;

	cout << "v4 size after assignment: " << v4.size() << endl;

	return 0;
}