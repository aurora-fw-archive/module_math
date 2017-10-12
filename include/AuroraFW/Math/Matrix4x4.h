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

#ifndef AURORAFW_MATH_MATRIX4X4_H
#define AURORAFW_MATH_MATRIX4X4_H

#include <AuroraFW/Global.h>

#include <AuroraFW/STDL/STL/OStream.h>

namespace AuroraFW {
	namespace Math {
		template<typename T> struct vec3;
		template<typename T> struct vec4;

		template<typename T>
		struct AFW_EXPORT mat4 {
			mat4();
			mat4(T );
			mat4(T* );
			mat4(const vec4<T> &, const vec4<T> &, const vec4<T> &, const vec4<T> &);

			mat4 &multiply(const mat4<T> &);
			vec3<T> multiply(const vec3<T> &) const;
			vec4<T> multiply(const vec4<T> &) const;

			mat4<T> operator*(const mat4<T> &);
			mat4<T> operator*=(const mat4<T> &);
			vec3<T> operator*(const vec3<T> &)const;
			vec3<T> operator*(const vec4<T> &)const;

			mat4<T> &invert();

			vec4<T> getColumn(afwuint_t) const;
			vec3<T> getPos() const;

			void setColumn(afwuint_t, const vec4<T> &);
			void setPos(const vec3<T> &);

			//Static methods
			static mat4<T> identity();

			static mat4<T> orthographic(T , T , T , T , T , T );
			static mat4<T> perspective(T , T , T , T );
			static mat4<T> lookAt(const vec3<T> &, const vec3<T> &, const vec3<T> &);

			static mat4<T> translation(const vec3<T> &);
			static mat4<T> rotation(T, const vec3<T> &);
			static mat4<T> scale(const vec3<T> &);
			static mat4<T> invert(const mat4<T> &);
			static mat4<T> transpose(const mat4<T> &);

			std::string toString() const;

			template<typename t>
			friend std::ostream& operator<<(std::ostream& , const vec3<T>& );

			union {
				T m[4][4] = {0};
				vec4<T> r[4];
			};
		};

		typedef mat4<float> Matrix4x4;
	}
}

#endif // AURORAFW_MATH_MATRIX4X4_H