#pragma once

#ifndef SQLE_TYPES_OTHER_HPP
#define SQLE_TYPES_OTHER_HPP

#include <sqleditor/types/macros.hpp>

namespace SQLEditor {
	namespace Types {
		using Void = SQLE_TYPES_VOID;
		using Bool = SQLE_TYPES_BOOL;

		template <class PointerType>
		using Pointer = SQLE_TYPES_LEFT_POINTER(PointerType);
	}
}

#endif