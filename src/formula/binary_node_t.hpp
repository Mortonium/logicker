#pragma once

#include "statement_t.hpp"

namespace {

	using namespace std;

	class binary_operation_statement_t : public statement_t {

	public:
		binary_operation_statement_t(statement_t* left, statement_t* right);

		statement* left() { return left_; }
		const statement_t* left() const { return left_; }
		statement_t* right() { return right_; }
		const statement_t* right() const { return right_; }

		void set_left(statement_t* val) { left_ = val; }
		void set_right(statement_t* val) { right_ = val; }

	private:
		statement_t* left_;
		statement_t* right_;

	};

}

