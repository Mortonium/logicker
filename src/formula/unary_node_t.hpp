#pragma once

#include "statement_t.hpp"

namespace {

	using namespace std;

	class unary_operation_statement_t : public statement_t {

	public:
		unary_operation_statement_t(statement_t* operand);

		statement_t* operand() { return operand_; }
		const statement_t* operand() const { return operand_; }

		void set_operand(statement_t* val) { operand_ = val; }

	private:
		statement_t* operand_;

	};

}

