#pragma once

#ifndef SQLE_CORE_LIBRARY_HPP
#define SQLE_CORE_LIBRARY_HPP

#include <sqleditor/core/function.hpp>
#include <sqleditor/core/variable.hpp>
#include <sqleditor/unknown.hpp>
#include <sqleditor/types.hpp>

namespace SQLEditor {
	namespace Core {
		enum LibraryBuildTypes : SQLEditor::Types::UInt8 {
			Debug, Release
		};

		struct ILibrary : public SQLEditor::IUnknown {
			virtual SQLEditor::String Name() = 0;
			virtual SQLEditor::String Version() = 0;
			virtual SQLEditor::Core::LibraryBuildTypes BuildType() = 0;
		};
	}
}

#endif //SQLE_CORE_LIBRARY_HPP