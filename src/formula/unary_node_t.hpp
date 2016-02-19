#pragma once

#include "operation_node_t.hpp"

namespace {

	using namespace std;

	class unary_node_t : public operation_node_t {

	public:
		unary_node_t(node_t* operand);
		virtual ~unary_node_t();

		node_t* operand() { return operand_; }
		const node_t* operand() const { return operand_; }

		void set_operand(node_t* val) { operand_ = val; }

	private:
		node_t* operand_;

	};

}

