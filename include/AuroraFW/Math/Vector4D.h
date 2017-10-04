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
		template<typename T> struct vec3;

		/**
		 * A struct that represents a 4D vector. A struct that store's
		 * position in 4D coordinates, allows to manipulate them and also
		 * to do vector operations.
		 * @since snapshot20171003
		 */
		template<typename T>
		struct AFW_PREFIX vec4 {
			vec4();
			vec4(const T& );
			vec4(const T& , const T& , const T& , const T& );
			vec4(const vec3<T>& , const T& );

			vec4<T>& add(const vec4<T>& );
			vec4<T>& add(const T& , const T& , const T& , const T& );
			vec4<T>& subtract(const vec4<T>& );
			vec4<T>& subtract(const T& , const T& , const T& , const T& );
			vec4<T>& multiply(const vec4<T>& );
			vec4<T>& multiply(const T& , const T& , const T& , const T& );
			vec4<T>& divide(const vec4<T>& );
			vec4<T>& divide(const T& , const T& , const T& , const T& );

			void setX(T );
			void setY(T );
			void setZ(T );
			void setW(T );

			void normalize();

			bool operator==(const vec4<T>& ) const;
			bool operator!=(const vec4<T>& ) const;
			bool operator<(const vec3<T>& ) const;
			bool operator>(const vec3<T>& ) const;
			bool operator<=(const vec3<T>& ) const;
			bool operator>=(const vec3<T>& ) const;

			vec4<T> operator+(const vec4<T>& );
			vec4<T> operator+(const T& );
			vec4<T> operator-(const vec4<T>& );
			vec4<T> operator-(const T& );
			vec4<T> operator*(const vec4<T>& );
			vec4<T> operator*(const T& );
			vec4<T> operator/(const vec4<T>& );
			vec4<T> operator/(const T& );

			vec4<T>& operator+=(const vec4<T>& );
			vec4<T>& operator+=(const T& );
			vec4<T>& operator-=(const vec4<T>& );
			vec4<T>& operator-=(const T& );
			vec4<T>& operator*=(const vec4<T>& );
			vec4<T>& operator*=(const T& );
			vec4<T>& operator/=(const vec4<T>& );
			vec4<T>& operator/=(const T& );

			T getX() const;
			T getY() const;
			T getZ() const;
			T getW() const;

			T length() const;
			T magnitude() const;
			bool isNull() const;
			vec4<T> normalized() const;
			T dot(vec4<T>) const;
			T distanceToPoint(const vec4<T>& ) const;
			T distanceToLine(const vec4<T>&, const vec4<T>& ) const;
			std::string toString() const;

			template<typename t>
			friend std::ostream& operator<<(std::ostream& , const vec4<T>& );

			T x, y, z, w;
		};

		typedef vec4<float> Vector4D;

		template<typename T>
		inline T vec4<T>::getX() const
		{
			return x;
		}

		template<typename T>
		inline T vec4<T>::getY() const
		{
			return y;
		}

		template<typename T>
		inline T vec4<T>::getZ() const
		{
			return z;
		}

		template<typename T>
		inline T vec4<T>::getW() const
		{
			return w;
		}

		template<typename T>
		inline void vec4<T>::setX(T val)
		{
			x = val;
		}

		template<typename T>
		inline void vec4<T>::setY(T val)
		{
			y = val;
		}

		template<typename T>
		inline void vec4<T>::setZ(T val)
		{
			z = val;
		}
		
		template<typename T>
		inline void vec4<T>::setW(T val)
		{
			w = val;
		}
	}
}

#endif // AURORAFW_MATH_VECTOR4D_H