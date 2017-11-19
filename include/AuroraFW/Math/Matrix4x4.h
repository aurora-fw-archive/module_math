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
#include <AuroraFW/STDL/LibC/String.h>
#include <AuroraFW/Math/Vector3D.h>
#include <AuroraFW/Math/Vector4D.h>

namespace AuroraFW {
	namespace Math {
		template<typename T>
		struct AFW_EXPORT mat4 {
			mat4();
			mat4(T );
			mat4(const mat4<T> &);
			mat4(T* );
			mat4(const vec4<T> &, const vec4<T> &, const vec4<T> &, const vec4<T> &);

			mat4 &multiply(const mat4<T> &);
			vec3<T> multiply(const vec3<T> &) const;
			vec4<T> multiply(const vec4<T> &) const;

			mat4<T> operator*(const mat4<T> &);
			mat4<T>& operator*=(const mat4<T> &);
			vec3<T> operator*(const vec3<T> &) const;
			vec3<T> operator*(const vec3<T> &);
			vec3<T> operator*(const vec4<T> &) const;
			vec4<T> operator*(const vec4<T> &);

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

			static mat4<T> translate(const vec3<T> &);
			static mat4<T> rotation(T, const vec3<T> &);
			static mat4<T> scale(const vec3<T> &);
			static mat4<T> invert(const mat4<T> &);
			static mat4<T> transpose(const mat4<T> &);

			std::string toString() const;

			template<typename t>
			friend std::ostream& operator<<(std::ostream& , const vec3<T>& );

			union {
				T m[4][4];
				vec4<T> r[4];
			};
		};
		typedef mat4<float> Matrix4x4;

		template<typename T>
		mat4<T>::mat4()
		{
			memset(m, 0, 4 * 4 * sizeof(T));
		}

		template<typename T>
		mat4<T>::mat4(const mat4<T> &mat)
		{
			for(int i = 0; i< 4; i++)
			{
				for(int j = 0; j< 4; j++)
				{
					m[i][j] = mat.m[i][j];
				}
			}
		}

		template<typename T>
		mat4<T>::mat4(T diagonal)
		{
			memset(m, 0, 4 * 4 * sizeof(T));
			m[0][0] = diagonal;
			m[1][1] = diagonal;
			m[2][2] = diagonal;
			m[3][3] = diagonal;
		}

		template<typename T>
		mat4<T>::mat4(T* mat)
		{
			memcpy(m, mat, 4 * 4 * sizeof(T));
		}

		template<typename T>
		mat4<T>::mat4(const vec4<T> &r0, const vec4<T> &r1, const vec4<T> &r2, const vec4<T> &r3)
		{
			r[0] = r0;
			r[1] = r1;
			r[2] = r2;
			r[3] = r3;
		}

		template<typename T>
		mat4<T> mat4<T>::identity()
		{
			return mat4(static_cast<T>(1));
		}

		template<typename T>
		mat4<T>& mat4<T>::multiply(const mat4<T>& mat)
		{
			T data[4][4];
			for (int row = 0; row < 4; row++)
			{
				for (int col = 0; col < 4; col++)
				{
					T sum = static_cast<T>(0);
					for (int e = 0; e < 4; e++)
					{
						sum += m[e][row] * mat.m[col][e];
					}
					data[col][row] = sum;
				}
			}
			memcpy(m, data, 4 * 4 * sizeof(float));
			return *this;
		}

		template<typename T>
		vec3<T> mat4<T>::multiply(const vec3<T>& vec) const
		{
			return vec.multiply(*this);
		}

		template<typename T>
		vec4<T> mat4<T>::multiply(const vec4<T>& vec) const
		{
			return vec.multiply(*this);
		}

		template<typename T>
		mat4<T> mat4<T>::operator*(const mat4<T> &mat)
		{
			return multiply(mat);
		}

		template<typename T>
		mat4<T>& mat4<T>::operator*=(const mat4<T> &mat)
		{
			return multiply(mat);
		}

		template<typename T>
		vec3<T> mat4<T>::operator*(const vec3<T> &vec)
		{
			return multiply(vec);
		}

		template<typename T>
		vec4<T> mat4<T>::operator*(const vec4<T> &vec)
		{
			return multiply(vec);
		}

		template<typename T>
		mat4<T> mat4<T>::orthographic(T left, T right, T bottom, T top, T near, T far)
		{
			mat4<T> ret(1.0f);

			ret.m[0][0] = 2.0f / (right - left);
			ret.m[1][1] = 2.0f / (top - bottom);
			ret.m[2][2] = 2.0f / (near - far);
			ret.m[3][0] = (left + right) / (left - right);
			ret.m[3][1] = (bottom + top) / (bottom - top);
			ret.m[3][2] = (far + near) / (far - near);

			return ret;
		}

		template<typename T>
		mat4<T> mat4<T>::translate(const vec3<T>& vec)
		{
			mat4<T> ret(1.0f);

			ret.m[3][0] = vec.x;
			ret.m[3][1] = vec.y;
			ret.m[3][2] = vec.z;

			return ret;
		}

	}
}

#endif // AURORAFW_MATH_MATRIX4X4_H