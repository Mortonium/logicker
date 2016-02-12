#pragma once

#include <string>
#include <istream>

#include "formula_string_t.hpp"
#include "symbol_set_t.hpp"

namespace {

	using namespace std;

	class formula_string_parser_t {

	public:
		formula_string_parser_t(const symbol_set_t& symbol_set);

		formula_string_t operator()(const string& input);
		formula_string_t operator()(istream& input);

	};

}

