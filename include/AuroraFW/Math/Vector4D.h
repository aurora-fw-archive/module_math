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

#ifndef AURORAFW_MATH_VECTOR4D_H
#define AURORAFW_MATH_VECTOR4D_H

#include <AuroraFW/Global.h>

#include <AuroraFW/Math/Vector3D.h>

namespace AuroraFW {
	namespace Math {
		template<class T> struct vec3;

		template<class T>
		struct AFW_PREFIX vec4 {
			vec4();
			vec4(const T& );
			vec4(const T& , const T& , const T& , const T& );
			vec4(const vec3<T>& , const T& );

			vec4<T>& Add(const vec4<T>& );
			vec4<T>& Subtract(const vec4<T>& );
			vec4<T>& Multiply(const vec4<T>& );
			vec4<T>& Divide(const vec4<T>& );

			template<typename t>
			friend vec4<T> operator+(vec4<T> , const vec4<T>& );
			template<typename t>
			friend vec4<T> operator-(vec4<T> , const vec4<T>& );
			template<typename t>
			friend vec4<T> operator*(vec4<T> , const vec4<T>& );
			template<typename t>
			friend vec4<T> operator/(vec4<T> , const vec4<T>& );

			bool operator==(const vec4<T>& ) const;
			bool operator!=(const vec4<T>& ) const;

			vec4<T>& operator+=(const vec4<T>& );
			vec4<T>& operator-=(const vec4<T>& );
			vec4<T>& operator*=(const vec4<T>& );
			vec4<T>& operator/=(const vec4<T>& );

			template<typename t>
			friend std::ostream& operator<<(std::ostream& , const vec4<T>& );

			T x, y, z, w;
		};
	}
}

#endif // AURORAFW_MATH_VECTOR4D_H