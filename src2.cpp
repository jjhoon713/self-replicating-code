#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
	{	
		string a = R"(
		if (argc > 1) {
			ifstream file(argv[1]);
			string line;
			int no = 0;
			while (getline(file, line)) {
				++no;
			}
			ofstream out;
			out.open("temp.txt");

			out << "#include <iostream>"<<endl<<" #include <string>" << endl << " #include <fstream> " << endl << "using namespace std; " << endl;
			ifstream file2(argv[1]);
			for (int i = 0; i < no - 2; i++) {
				getline(file2, line);
				out << line << endl;
			}
			out << "{" << endl << "string a = R" << (char)34 << (char)40 << a << (char)41 << (char)34 << (char)59 << endl << a << "}" << endl;
			while (getline(file2, line))
				out << line << endl;
			out.close();

			ifstream temp("temp.txt");
			ofstream change(argv[1]);
			while (getline(temp, line))
				change << line << endl;
			change.close();
			temp.close();

		}
		//Jihoon Chung 20311792
)";
		if (argc > 1) {
			ifstream file(argv[1]);
			string line;
			int no = 0;
			while (getline(file, line)) {
				++no;
			}
			ofstream out;
			out.open("temp.txt");

			out << "#include <iostream>"<<endl<<" #include <string>" << endl << " #include <fstream> " << endl << "using namespace std; " << endl;
			ifstream file2(argv[1]);
			for (int i = 0; i < no - 2; i++) {
				getline(file2, line);
				out << line << endl;
			}
			out << "{" << endl << "string a = R" << (char)34 << (char)40 << a << (char)41 << (char)34 << (char)59 << endl << a << "}" << endl;
			while (getline(file2, line))
				out << line << endl;
			out.close();

			ifstream temp("temp.txt");
			ofstream change(argv[1]);
			while (getline(temp, line))
				change << line << endl;
			change.close();
			temp.close();

		}
		//Jihoon Chung 20311792
	}
}
