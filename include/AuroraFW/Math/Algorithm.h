/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE included in
** the packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
****************************************************************************/

#ifndef AURORAFW_MATH_ALGORITHM_H
#define AURORAFW_MATH_ALGORITHM_H

#include <AuroraFW/Global.h>

namespace AuroraFW {
	namespace Math {
		template<class T> 
		AFW_PREFIX inline const T& min(const T& a, const T& b)
		{
			return (b < a) ? b : a;
		}

		template<class T> 
		AFW_PREFIX inline const T& max(const T& a, const T& b)
		{
			return (a < b) ? b : a;
		}

		template<class T>
		AFW_PREFIX inline constexpr const T& clamp( const T& v, const T& lo, const T& hi )
		{
			return min(max(v, min(lo, hi)), max(lo, hi));
		}
	}
}

#endif // AURORAFW_MATH_ALGORITHM_H