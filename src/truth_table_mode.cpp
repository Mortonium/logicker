#include "truth_table_mode.hpp"

#include "formula_string_parser_t.hpp"
#include "formula_string_t.hpp"
#include "formula_t.hpp"
#include "truth_table_t.hpp"

void truth_table_mode(int argc, char** argv) {

	formula_string_parser_t parser;
	formula_string_t formula_string = parser(string(argv[0]));
	formula_t formula(formula_string);

	truth_table_t truth_table(formula);
	truth_table.print();

}

