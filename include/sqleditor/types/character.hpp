#pragma once

#ifndef SQLE_TYPES_CHARACTER_HPP
#define SQLE_TYPES_CHARACTER_HPP

#include <sqleditor/macros/encode.hpp>

namespace SQLEditor {
	namespace Types {
		using Char = char;
		using Char8 = char;
		using Char16 = char16_t;
		using Char32 = char32_t;
		using WChar = wchar_t;

		using UChar = unsigned char;
		using UChar8 = unsigned char;
		using UChar16 = char16_t;
		using UChar32 = char32_t;
		using UWChar = wchar_t;

		using TChar = SQLE_ENCODE_UNICODE_OR_ANSI(SQLEditor::Types::WChar, SQLEditor::Types::Char);
		using TUChar = SQLE_ENCODE_UNICODE_OR_ANSI(SQLEditor::Types::UWChar, SQLEditor::Types::UChar);
	}
}

#endif //SQLE_TYPES_CHARACTER_HPP