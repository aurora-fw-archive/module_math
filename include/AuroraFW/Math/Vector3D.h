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

#ifndef AURORAFW_MATH_3DVECTOR_H
#define AURORAFW_MATH_3DVECTOR_H

#include <AuroraFW/Global.h>

#include <ostream>
#include <AuroraFW/Math/Vector2D.h>
#include <AuroraFW/Math/Vector4D.h>

namespace AuroraFW {
	namespace Math {
		struct vec2;
		struct vec4;

		struct AFW_PREFIX Vector3D {
			Vector3D();
			Vector3D(float );
			Vector3D(float , float , float );
			Vector3D(const vec2& );
			Vector3D(float , float );
			Vector3D(const vec4& );

			Vector3D& Add(const Vector3D& );
			Vector3D& Subtract(const Vector3D& );
			Vector3D& Multiply(const Vector3D& );
			Vector3D& Divide(const Vector3D& );

			Vector3D& Add(float );
			Vector3D& Subtract(float );
			Vector3D& Multiply(float );
			Vector3D& Divide(float );

			friend Vector3D operator+(Vector3D , const Vector3D& );
			friend Vector3D operator-(Vector3D , const Vector3D& );
			friend Vector3D operator*(Vector3D , const Vector3D& );
			friend Vector3D operator/(Vector3D , const Vector3D& );

			friend Vector3D operator+(Vector3D , float );
			friend Vector3D operator-(Vector3D , float );
			friend Vector3D operator*(Vector3D , float );
			friend Vector3D operator/(Vector3D , float );

			bool operator==(const Vector3D& ) const;
			bool operator!=(const Vector3D& ) const;

			Vector3D& operator+=(const Vector3D& );
			Vector3D& operator-=(const Vector3D& );
			Vector3D& operator*=(const Vector3D& );
			Vector3D& operator/=(const Vector3D& );

			Vector3D& operator+=(float );
			Vector3D& operator-=(float );
			Vector3D& operator*=(float );
			Vector3D& operator/=(float );

			bool operator<(const Vector3D& ) const;
			bool operator<=(const Vector3D& ) const;
			bool operator>(const Vector3D& ) const;
			bool operator>=(const Vector3D& ) const;

			friend std::ostream& operator<<(std::ostream& , const Vector3D& );

			float x, y, z;
		};
	}
}

#endif // AURORAFW_MATH_3DVECTOR_H
