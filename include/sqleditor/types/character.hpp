#pragma once

#ifndef SQLE_TYPES_CHARACTER_HPP
#define SQLE_TYPES_CHARACTER_HPP

#include <sqleditor/types/macros.hpp>
#include <sqleditor/macros/encode.hpp>

namespace SQLEditor {
	namespace Types {
		using Char = SQLE_TYPES_CHAR;
		using Char8 = SQLE_TYPES_CHAR;
		using Char16 = SQLE_TYPES_CHAR16;
		using Char32 = SQLE_TYPES_CHAR32;
		using WChar = SQLE_TYPES_WCHAR;

		using UChar = SQLE_TYPES_UNSIGNED SQLE_TYPES_CHAR;
		using UChar8 = SQLE_TYPES_UNSIGNED SQLE_TYPES_CHAR;
		using UChar16 = SQLE_TYPES_CHAR16;
		using UChar32 = SQLE_TYPES_CHAR32;
		using UWChar = SQLE_TYPES_WCHAR;

		using TChar = SQLE_ENCODE_UNICODE_OR_ANSI(SQLEditor::Types::WChar, SQLEditor::Types::Char);
		using TUChar = SQLE_ENCODE_UNICODE_OR_ANSI(SQLEditor::Types::UWChar, SQLEditor::Types::UChar);
	}
}

#endif