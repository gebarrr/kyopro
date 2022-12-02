#include <iostream>
#include <string>
using namespace std;
string line;

int main() {
	int b;
	string line;
  cin>>line;
	b= line.rfind("a");
	if (line.rfind("a") == string::npos) {
		cout << -1 << endl;
	}
	else {
		cout << line.rfind("a") + 1 << endl;
}
	return 0;
}