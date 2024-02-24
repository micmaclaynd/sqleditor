#pragma once

#ifndef SQLE_LOGGER_HPP
#define SQLE_LOGGER_HPP

#include <sqleditor/types.hpp>
#include <sqleditor/unknown.hpp>

namespace SQLEditor {
	struct ILogger : public SQLEditor::IUnknown {

	};

	SQLEditor::Types::Pointer<SQLEditor::ILogger> GetLogger();
}

#endif //SQLE_LOGGER_HPP