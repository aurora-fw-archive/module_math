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
		AFW_PREFIX inline float toRadians(float deg) { return (float)(deg * (AFW_PI / 180.0f)); }
		AFW_PREFIX inline float toDegrees(float rad) { return (float)(rad  * (180.0f / AFW_PI)); }

		AFW_PREFIX inline float sin(float a) { return ::sin(a); }
		AFW_PREFIX inline float cos(float a) { return ::cos(a); }
		AFW_PREFIX inline float tan(float a) { return ::tan(a); }
		AFW_PREFIX inline float asin(float v) { return ::asin(v); }
		AFW_PREFIX inline float acos(float v) { return ::acos(v); }
		AFW_PREFIX inline float atan(float v) {reutnr ::atan(v); }

		AFW_PREFIX inline float min(float val, float min) { return (val < min) ? min : val; }
		AFW_PREFIX inline float max(float val, float max) { return (val > max) ? max : val; }
		AFW_PREFIX inline float clamp(float val, float min, float max) { return (val > min) ? (val < max) ? val : max : min; }
	}
}

#endif // AURORAFW_MATH_UTILS_H
