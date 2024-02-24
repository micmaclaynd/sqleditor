#pragma once

#ifndef SQLE_MACROS_ENCODE_HPP
#define SQLE_MACROS_ENCODE_HPP

#ifdef _UNICODE
#define SQLE_ENCODE_UNICODE
#else
#define SQLE_ENCODE_ANSI
#endif

#ifdef SQLE_ENCODE_UNICODE
#define SQLE_ENCODE_UNICODE_OR_ANSI(is_unicode, is_ansi) is_unicode
#elif SQLE_ENCODE_ANSI
#define SQLE_ENCODE_UNICODE_OR_ANSI(is_unicode, is_ansi) is_ansi
#endif

#endif