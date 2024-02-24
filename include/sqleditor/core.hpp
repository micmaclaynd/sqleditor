#pragma once

#ifndef SQLE_CORE_HPP
#define SQLE_CORE_HPP

#include <string>
#include <vector>

namespace SQLEditor {
	struct ICore {
		virtual std::string Version() = 0;
		virtual std::vector<>
		virtual std::vector<SQLEditor::ILibrary> Libraries() = 0;
	};
}

#endif