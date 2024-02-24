#pragma once

#ifndef SQLE_TYPES_OTHER_HPP
#define SQLE_TYPES_OTHER_HPP

namespace SQLEditor {
	namespace Types {
		using Void = void;
		using Bool = bool;

		template <class PointerType>
		using Pointer = PointerType*;
	}
}

#endif //SQLE_TYPES_OTHER_HPP