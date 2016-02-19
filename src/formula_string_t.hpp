#pragma once

#include <string>

namespace {

	using namespace std;

	class formula_string_t : public basic_string<symbol_t> {

	public:
		formula_string_t();
		formula_string_t(const string& input);
		formula_string_t(istream& input);

	private:
		void parse(istream& input);

	};

}

