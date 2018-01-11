#include <iostream>
#include <string>

using namespace std;

int main() {
	string text = "hello";
	int i = 0;
	int j = text.size() - 1;

	while(j > i) {
		char tmp;
		tmp = text[j];
		text[j] = text[i];
		text[i] = tmp;
		++i;
		--j;
	}
	cout << text << endl;
}
