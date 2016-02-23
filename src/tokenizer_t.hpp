#pragma once

#include <string>
#include <istream>

namespace {

	using namespace std;

	class tokenizer_t  {

	public:
		tokenizer_t(istream& input);

		bool end() const { return end_encountered_; }
		string next();

	private:
		istream& input_;
		bool end_encountered_ = false;

		bool eof() const;
		void chomp_whitespace();

	};

}

