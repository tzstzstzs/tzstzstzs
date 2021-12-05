#include "../std_lib_facilities.h"

namespace X {
	int var = 0;
	void print();
}

namespace Y {
	int var = 0;
	void print();
}

namespace Z {
	int var = 0;
	void print();
}



int main()
{
	X::var = 7;
	X::print();

	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();

	return 0;
}



namespace X {
	void print(){
		cout << var << endl;
	}
}

namespace Y {
	void print(){
		cout << var << endl;
	}
}

namespace Z {
	void print(){
		cout << var << endl;
	}
}