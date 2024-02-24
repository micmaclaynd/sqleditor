#pragma once

#ifndef SQLE_STRING_HPP
#define SQLE_STRING_HPP

#include <sqleditor/macros/encode.hpp>

#if __has_include(<string>)
#include <string>
#else
#error <string> is required
#endif

namespace SQLEditor {
	using String = std::string;
	using WString = std::wstring;
	using U16String = std::u16string;
	using U32String = std::u32string;

	using TString = SQLE_ENCODE_UNICODE_OR_ANSI(SQLEditor::WString, SQLEditor::String);
}

#endif //SQLE_STRING_HPP