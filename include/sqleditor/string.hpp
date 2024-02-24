#pragma once

#ifndef SQLE_STRING_HPP
#define SQLE_STRING_HPP

#include <sqleditor/macros/encode.hpp>

#include <string>

namespace SQLEditor {
	using String = std::string;
	using WString = std::wstring;
	using U16String = std::u16string;
	using U32String = std::u32string;

	using TString = SQLE_UNICODE_OR_ANSI(SQLEditor::WString, SQLEditor::String);
}

#endif