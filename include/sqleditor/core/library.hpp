#pragma once

#ifndef SQLE_CORE_LIBRARY_HPP
#define SQLE_CORE_LIBRARY_HPP

#include <sqleditor/types/using.hpp>
#include <sqleditor/macros.hpp>

namespace SQLEditor {
	SQLE_INTERFACE ILibrary {
		SQLE_VIRTUAL void Name()
	};
}

#endif