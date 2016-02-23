#include <iostream>
#include <stdexcept>

#include "truth_table_mode.hpp"
#include "tokenizer_t.hpp"

using namespace std;

int main(int argc, char** argv) {

	if (argc == 1) {
		throw runtime_error("Must specify mode as first argument");
	}

	string mode(argv[1]);
	if (mode == "truth-table") {
		truth_table_mode(argc - 2, argv + 2);
	}

	tokenizer_t tokenizer(cin);
	while (tokenizer.end()) {
		cout << "TOKEN: " << tokenizer.next() << endl;
	}

}

