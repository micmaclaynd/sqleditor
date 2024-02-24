#pragma once

#ifndef SQLE_TYPES_INTEGER_HPP
#define SQLE_TYPES_INTEGER_HPP

#include <sqleditor/types/macros.hpp>

namespace SQLEditor {
	namespace Types {
		using Int = SQLE_TYPES_INT;
		using Int8 = SQLE_TYPES_CHAR;
		using Int16 = SQLE_TYPES_SHORT;
		using Int32 = SQLE_TYPES_INT;
		using Int64 = SQLE_TYPES_LONG SQLE_TYPES_LONG;

		using UInt = SQLE_TYPES_UNSIGNED SQLE_TYPES_INT;
		using UInt8 = SQLE_TYPES_UNSIGNED SQLE_TYPES_CHAR;
		using UInt16 = SQLE_TYPES_UNSIGNED SQLE_TYPES_SHORT;
		using UInt32 = SQLE_TYPES_UNSIGNED SQLE_TYPES_INT;
		using UInt64 = SQLE_TYPES_UNSIGNED SQLE_TYPES_LONG SQLE_TYPES_LONG;
	}
}

#endif