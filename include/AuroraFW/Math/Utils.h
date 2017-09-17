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

#ifndef AURORAFW_MATH_UTILS_H
#define AURORAFW_MATH_UTILS_H

#define AFW_PI 3.14159265358f

namespace AuroraFW {
	namespace Math {
		AFW_PREFIX inline float toRadians(const float& deg) { return (float)(deg * (AFW_PI / 180.0f)); }
		AFW_PREFIX inline float toDegrees(const float& rad) { return (float)(rad  * (180.0f / AFW_PI)); }

		AFW_PREFIX inline float sin(const float& a) { return ::sin(a); }
		AFW_PREFIX inline float cos(const float& a) { return ::cos(a); }
		AFW_PREFIX inline float tan(const float& a) { return ::tan(a); }
		AFW_PREFIX inline float asin(const float& v) { return ::asin(v); }
		AFW_PREFIX inline float acos(const float& v) { return ::acos(v); }
		AFW_PREFIX inline float atan(const float& v) {reutnr ::atan(v); }

		AFW_PREFIX inline float min(const float& val, const float& min) { return (val < min) ? min : val; }
		AFW_PREFIX inline float max(const float& val, const float& max) { return (val > max) ? max : val; }
		AFW_PREFIX inline float clamp(const float& val, const float& min, const float& max) { return (val > min) ? (val < max) ? val : max : min; }
	}
}

#endif // AURORAFW_MATH_UTILS_H
