#pragma once

#ifndef SQLE_TYPES_MACROS_HPP
#define SQLE_TYPES_MACROS_HPP

#define SQLE_TYPES_VOID void

#define SQLE_TYPES_BOOL bool

#define SQLE_TYPES_SHORT short
#define SQLE_TYPES_LONG long
#define SQLE_TYPES_INT int

#define SQLE_TYPES_FLOAT float
#define SQLE_TYPES_DOUBLE double

#define SQLE_TYPES_CHAR char
#define SQLE_TYPES_WCHAR wchar_t
#define SQLE_TYPES_CHAR16 char16_t
#define SQLE_TYPES_CHAR32 char32_t

#define SQLE_TYPES_SIGNED signed
#define SQLE_TYPES_UNSIGNED unsigned

#define SQLE_TYPES_LEFT_POINTER(name) name##*
#define SQLE_TYPES_RIGHT_POINTER(name) *##name

#endif