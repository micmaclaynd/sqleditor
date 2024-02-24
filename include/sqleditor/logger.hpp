#pragma once

#ifndef SQLE_LOGGER_HPP
#define SQLE_LOGGER_HPP

#include <sqleditor/types.hpp>

namespace SQLEditor {
	struct ILogger {

	};

	SQLEditor::Types::Pointer<SQLEditor::ILogger> GetLogger();
}

#endif //SQLE_LOGGER_HPP