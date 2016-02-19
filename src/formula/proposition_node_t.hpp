#pragma once

#include "node_t.hpp"
#include "proposition_symbol_t.hpp"

namespace {

	using namespace std;

	class proposition_node_t : public node_t {

	public:
		proposition_node_t(proposition_symbol_t symbol);

	private:
		proposition_symbol_t symbol_;

	};

}

