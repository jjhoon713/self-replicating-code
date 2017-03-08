#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string a = R"(int main(int argc, char *argv[]) {
	if (argc == 2) {
		ofstream myfile;
		myfile.open(argv[1]);
		myfile << "#include <iostream>\n#include <string>\n#include <fstream>\nusing namespace std;\nstring a = R" << (char)34 << (char)40 << a << (char)41 << (char)34 << (char)59 << endl << a;
		myfile.close();
		return 0;
	}
	return 0;
}
//Jihoon Chung 20311792
)";
int main(int argc, char *argv[]) {
	if (argc == 2) {
		ofstream myfile;
		myfile.open(argv[1]);
		myfile << "#include <iostream>\n#include <string>\n#include <fstream>\nusing namespace std;\nstring a = R" << (char)34 << (char)40 << a << (char)41 << (char)34 << (char)59 << endl << a;
		myfile.close();
		return 0;
	}
	return 0;
}
//Jihoon Chung 20311792
