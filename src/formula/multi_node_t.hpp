#pragma once

#include <vector>

#include "operation_node_t.hpp"

namespace formula {

	using namespace std;

	class multi_node_t : public operation_node_t {

	public:
		multi_node_t();
		virtual ~multi_node_t();

		vector<node_t*>& operations() { return operands_; }
		const vector<node_t*>& operations() const { return operands_; }

	private:
		vector<node_t*> operands_;

	};

}

