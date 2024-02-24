#pragma once

#ifndef SQLE_MACROS_COMPILER_HPP
#define SQLE_MACROS_COMPILER_HPP

#if defined _MSC_VER
#define SQLE_COMPILER_MSVC
#elif defined __clang__
#define SQLE_COMPILER_CLANG
#elif defined __GNUC__
#define SQLE_COMPILER_GCC
#endif

#endif //SQLE_MACROS_COMPILER_HPP