#include "formula_string_t.hpp"

#include <cctype>

#include <sstream>

using namespace std;

formula_string_t::formula_string_t() {

}
formula_string_t::formula_string_t(const string& input) {
	stringstream ss(input);
	parse(ss);
}

formula_string_t::formula_string_t(istream& input) {
	parse(input);
}

void formula_string_t::parse(istream& input) {

	formula_string_t formula_string;

	while (true) {

		string token;
		bool end = false;
		while (!(input.eof() || input.fail() || input.bad())) {
			
			char c = input.get();

			if (c == '\n') {
				end = true;
				break;
			}

			if (isspace(c)) {
				break;
			} else {
				token += c;
			}

		}

		if (token == "(") {
			formula_string.push_back(open_parenthesis_symbol());
		} else if (token == ")") {
			formula_string.push_back(close_parenthesis_symbol());
		} else if (token == "and") {
			formula_string.push_back(conjunction_symbol());
		} else if (token == "or") {
			formula_string.push_back(disjunction_symbol());
		} else if (token == "not") {
			formula_string.push_back(negation_symbol());
		} else if (islower(token.front())) {
			formula_string.push_back(proposition_symbol(token));
		}

	}

	return formula_string;

}

