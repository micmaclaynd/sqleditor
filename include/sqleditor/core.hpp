#pragma once

#ifndef SQLE_CORE_HPP
#define SQLE_CORE_HPP

#include <sqleditor/core/library.hpp>

#include <sqleditor/string.hpp>
#include <sqleditor/vector.hpp>
#include <sqleditor/types.hpp>

namespace SQLEditor {
	struct ICore : public SQLEditor::IUnknown {
		virtual SQLEditor::String Version() = 0;
		virtual SQLEditor::Vector<SQLEditor::Core::ILibrary> Libraries() = 0;
	};
}

#endif //SQLE_CORE_HPP