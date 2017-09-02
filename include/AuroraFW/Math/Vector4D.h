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

#ifndef AURORAFW_MATH_4DVECTOR_H
#define AURORAFW_MATH_4DVECTOR_H

#include <AuroraFW/Global.h>

#include <AuroraFW/Math/Vector3D.h>

namespace AuroraFW {
	namespace Math {
		struct vec3;

		struct AFW_PREFIX Vector4D {
			Vector4D();
			Vector4D(float );
			Vector4D(float , float , float , float );
			Vector4D(const vec3& , float );

			Vector4D& Add(const Vector4D& );
			Vector4D& Subtract(const Vector4D& );
			Vector4D& Multiply(const Vector4D& );
			Vector4D& Divide(const Vector4D& );

			friend Vector4D operator+(Vector4D , const Vector4D& );
			friend Vector4D operator-(Vector4D , const Vector4D& );
			friend Vector4D operator*(Vector4D , const Vector4D& );
			friend Vector4D operator/(Vector4D , const Vector4D& );

			bool operator==(const Vector4D& ) const;
			bool operator!=(const Vector4D& ) const;

			Vector4D& operator+=(const Vector4D& );
			Vector4D& operator-=(const Vector4D& );
			Vector4D& operator*=(const Vector4D& );
			Vector4D& operator/=(const Vector4D& );

			friend std::ostream& operator<<(std::ostream& , const Vector4D& );

			float x, y, z, w;
		};
	}
}

#endif // AURORAFW_MATH_4DVECTOR_H
