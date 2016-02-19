#pragma once

#include "node_t.hpp"

namespace {

	using namespace std;

	class binary_node_t : public node_t {

	public:
		binary_node_t(node_t* left, node_t* right);
		virtual ~binary_node_t();

		node_t* left() { return left_; }
		const node_t* left() const { return left_; }
		node_t* right() { return right_; }
		const node_t* right() const { return right_; }

		void set_left(node_t* val) { left_ = val; }
		void set_right(node_t* val) { right_ = val; }

	private:
		node_t* left_;
		node_t* right_;

	};

}

