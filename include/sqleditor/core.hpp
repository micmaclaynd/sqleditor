#pragma once

#ifndef SQLE_CORE_HPP
#define SQLE_CORE_HPP

#include <sqleditor/core/library.hpp>
#include <sqleditor/core/object.hpp>
#include <sqleditor/core/variable.hpp>
#include <sqleditor/core/function.hpp>

#include <sqleditor/string.hpp>
#include <sqleditor/vector.hpp>
#include <sqleditor/types.hpp>

namespace SQLEditor {
	struct ICore {
		virtual SQLEditor::String GetVersion() = 0;
		virtual SQLEditor::Vector<SQLEditor::Core::IObject> GetObjects() = 0;
		virtual SQLEditor::Vector<SQLEditor::Core::ILibrary> GetLibraries() = 0;
	};
}

#endif //SQLE_CORE_HPP