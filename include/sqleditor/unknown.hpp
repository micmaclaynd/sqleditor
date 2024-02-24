#pragma once

#ifndef SQLE_UNKNOWN_HPP
#define SQLE_UNKNOWN_HPP

#include <sqleditor/types.hpp>
#include <sqleditor/string.hpp>

namespace SQLEditor {
	struct IUnknown {
		virtual SQLEditor::Types::Void Release() = 0;
	};
}

#endif //SQLE_UNKNOWN_HPP