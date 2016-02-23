#include "tokenizer_t.hpp"

#include <stdexcept>
#include <istream>

#include <cctype>

using namespace std;

tokenizer_t::tokenizer_t(istream& input) : input_(input) {
	chomp_whitespace();
}

string tokenizer_t::next() {

	// Give up if finished
	if (end_encountered_) {
		return "";
	}

	string token;
	bool token_read = false;
	while (!token_read) {

		// Throw exception if cannot continue
		if (eof()) {
			throw runtime_error("Tokenizer cannot read from input stream");
		}

		char next = input_.peek();

		if (token.length()) {
			if (isspace(next) || (next == '(') || (next == ')')) {
				token_read = true;
				break;
			} else {
				token += next;
				input_.get();
			}
		} else {
			token = next;
			input_.get();
			if (token == "(" || token == ")") {
				token_read = true;
			}
		}

	}

	chomp_whitespace();

	return token;

}

bool tokenizer_t::eof() const {
	return input_.eof() || input_.fail() || input_.bad();
}
void tokenizer_t::chomp_whitespace() {

	// Chomp spaces after the token
	while (!eof() && isspace(input_.peek()))
		input_.get();

}

