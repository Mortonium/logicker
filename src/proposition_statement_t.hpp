#pragma once

#include "statement_t.hpp"
#include "proposition_symbol_t.hpp"

namespace {

	using namespace std;

	class proposition_statement_t : public statement_t {

	public:
		proposition_statement_t(proposition_symbol_t symbol);

	private:
		proposition_symbol_t symbol_;

	};

}

