#pragma once

#ifndef SQLE_MACROS_ENCODE_HPP
#define SQLE_MACROS_ENCODE_HPP

#if defined _UNICODE || defined UNICODE
#define SQLE_ENCODE_UNICODE
#else
#define SQLE_ENCODE_ANSI
#endif

#if defined SQLE_ENCODE_UNICODE
#define SQLE_ENCODE_UNICODE_OR_ANSI(is_unicode, is_ansi) is_unicode
#elif defined SQLE_ENCODE_ANSI
#define SQLE_ENCODE_UNICODE_OR_ANSI(is_unicode, is_ansi) is_ansi
#endif

#endif //SQLE_MACROS_ENCODE_HPP