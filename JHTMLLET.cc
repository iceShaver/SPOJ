//SPOJ: JHTMLLET
//TIME: 2017-12-27
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	bool convertion_flag = false;
	stringstream input, output;
	string input_string;
	input << cin.rdbuf();
	input_string = input.str();
	for (auto ch : input_string) {
		if (ch == '<')
			convertion_flag = true;
		else if (ch == '>')
			convertion_flag = false;
		if (convertion_flag)
			output << static_cast<char>(toupper(ch));
		else 
			output << ch;
	}
	cout << output.str();
	return 0;
}
