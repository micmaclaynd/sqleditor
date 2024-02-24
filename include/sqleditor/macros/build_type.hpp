#pragma once

#ifndef SQLE_MACROS_BUILD_TYPE_HPP
#define SQLE_MACROS_BUILD_TYPE_HPP

#if defined _DEBUG || defined DEBUG
#define SQLE_BUILD_TYPE_DEBUG
#else
#define SQLE_BUILD_TYPE_RELEASE
#endif

#endif //SQLE_MACROS_BUILD_TYPE_HPP