#include "../std_lib_facilities.h"

struct Points {
	double x, y;
};

bool operator==(const Points& p1, const Points& p2)
{
    return p1.x==p2.x && p1.y==p2.y;
}

bool operator!=(const Points& p1, const Points& p2)
{
    return !(p1==p2);
}


int main()
try{
	cout << "Enter 7 pairs coordinates: ";
	vector<Points> original_points;
	double x = 0;
	double y = 0;

	while(cin >> x >> y){
		original_points.push_back(Points{x, y});
		if (!cin) error ("Invalid");
		if (original_points.size() == 7) break;
	}

	for(const auto& r : original_points)
		cout << r.x << ' ' << r.y << endl;

	string oname = "mydata.txt";
	ofstream ost {oname};

	if (!ost) error ("can't open output file ", oname);

	for (const auto& r : original_points)
		ost << r.x << ' ' << r.y << endl;

	ost.close(); // ez automatikusan történik


	string iname = "mydata.txt";

	ifstream ist {iname};

	if (!ist) error ("can't open input file ", iname);

	vector<Points> processed_points;
	while(ist >> x >> y){
		processed_points.push_back(Points{x, y});
	}

	cout << "Elements of processed_points: \n";
	for (const auto& r : processed_points)
		cout << r.x << ' ' << r.y << endl;

	cout << "Elements of original_points: \n";
	for (const auto& r : original_points)
		cout << r.x << ' ' << r.y << endl;

	if (original_points.size() != processed_points.size())
        error("Something's wrong!");
    else cout << "Match" << endl;
    
    for (int i = 0; i<original_points.size(); ++i) {
        if (original_points[i] != processed_points[i])
            error("Something's wrong!");
        else if (original_points[i] == processed_points[i] && i == original_points.size() - 1) cout << "Match" << endl;
       }

	/*bool match = equal(original_points.begin(), original_points.end(), processed_points.begin());

	/*if (match) cout << "Match" << endl;
	else cout << "Something's worng" << endl;*/

	return 0;


} catch (runtime_error& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Some error\n";
	return 2;
}