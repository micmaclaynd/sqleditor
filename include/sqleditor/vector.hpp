#pragma once

#ifndef SQLE_VECTOR_HPP
#define SQLE_VECTOR_HPP

#if __has_include(<vector>)
#include <vector>
#else
#error <vector> is required
#endif


namespace SQLEditor {
	template <class ValueType>
	using Vector = std::vector<ValueType>;
}

#endif //SQLE_VECTOR_HPP