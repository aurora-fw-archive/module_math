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

#include <AuroraFW/TLib/_IOStream.h>

#include <AuroraFW/Math/Vector2D.h>
#include <AuroraFW/Math/Vector4D.h>

#include <cmath>

namespace AuroraFW {
	namespace Math {
		struct Vector2D;
		struct Vector4D;
		/**
		 *	A struct that represents a 3D vector. A struct that store's
		 * 	position in 3D coordinates, allows to manipulate them and also
		 * 	to do vector operations.
		 */
		struct AFW_PREFIX Vector3D {
			/**
			 *	Constructs a vector with zero coordinates.
			 *	@see Vector3D(float )
			 *	@see Vector3D(float , float )
			 *	@see Vector3d(float , float , float )
			 */
			Vector3D();
			/**
			 *	Constructs a vector with the given coordinates.
			 * 	@param scalar The float value to the x, y and z coordinates.
			 *	@see Vector3D()
			 *	@see Vector3D(float , float )
			 *	@see Vector3D(float , float , float )
			 */
			Vector3D(float );
			/**
			 *	Constructs a vector with the given coordinates.
			 *	The z value will be defined to 0.
			 * 	@param x The x value for the x coordinate.
			 * 	@param y The y value for the y coordinate.
			 *	@see Vector3D( )
			 *	@see Vector3D(float )
			 *	@see Vector3D(float , float , float )
			 */
			Vector3D(float , float );
			/**
			 *	Constructs a vector with the given coordinates.
			 * 	@param x The x value for the x coordinate.
			 * 	@param y The y value for the y coordinate.
			 *	@param x The z value for the z coordinate.
			 *	@see Vector3D( )
			 *	@see Vector3D(float )
			 *	@see Vector3D(float , float )
			 */
			Vector3D(float , float , float );
			/**
			 *	Constructs a vector using the coordinates from the given Vector2D.
			 *	The z value will be defined as 0.
			 *	@param v The Vector2D to get both the x and y coordinates from.
			 *	@see Vector3D(const Vector4D& )
			 */
			Vector3D(const Vector2D& );
			/**
			 *	Construct a vector using the coordinates from the given Vector4D.
			 *	The w value is not used.
			 *	@param v The Vector4D to get the x, y and z coordinates from.
			 *	@see Vector3D(const Vector2D& )
			 */
			Vector3D(const Vector4D& );

			/**
			 *	Adds the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the added coordinates.
			 *	@see add(float )
			 * 	@see add(float , float , float )
			 */
			Vector3D& add(const Vector3D& );
			/**
			 *	Subtracts the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the subtracted coordinates.
			 *	@see subtract(float )
			 * 	@see subtract(float , float , float )
			 */
			Vector3D& subtract(const Vector3D& );
			/**
			 *	Multiplies the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the multiplied coordinates.
			 *	@see multiply(float )
			 * 	@see multiply(float , float , float )
			 */
			Vector3D& multiply(const Vector3D& );
			/**
			 *	Divides the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the divided coordinates.
			 *	@see divide(float )
			 * 	@see divide(float , float , float )
			 */
			Vector3D& divide(const Vector3D& );

			/**
			 *	Adds the given value to this vector.
			 *	@param val The value for all three coordinates.
			 *	@return This vector with the added coordinates.
			 *	@see add(const Vector3D& )
			 * 	@see add(float , float , float )
			 */
			Vector3D& add(float );
			/**
			 *	Subtracts the given value to this vector.
			 *	@param val The value for all three coordinates.
			 *	@return This vector with the subtracted coordinates.
			 *	@see subtract(const Vector3D& )
			 * 	@see subtract(float , float , float )
			 */
			Vector3D& subtract(float );
			/**
			 *	Multiplies the given value to this vector.
			 *	@param val The value for all three coordinates.
			 *	@return This vector with the multiplied coordinates.
			 *	@see multiply(const Vector3D& )
			 * 	@see multiply(float , float , float )
			 */
			Vector3D& multiply(float );
			/**
			 *	Divides the given value to this vector.
			 *	@param val The value for all three coordinates.
			 *	@return This vector with the divided coordinates.
			 *	@see divide(const Vector3D& )
			 * 	@see divide(float , float , float )
			 */
			Vector3D& divide(float );

			/**
			 *	Adds the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@param valZ The value for the z coordinate.
			 *	@return This vector with the added coordinates.
			 *	@see add(const Vector3D& )
			 * 	@see add(float )
			 */
			Vector3D& add(float , float , float );
			/**
			 *	Subtracts the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@param valZ The value for the z coordinate.
			 *	@return This vector with the subtracted coordinates.
			 *	@see subtract(const Vector3D& )
			 * 	@see subtract(float )
			 */
			Vector3D& subtract(float , float , float );
			/**
			 *	Multiplies the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@param valZ The value for the z coordinate.
			 *	@return This vector with the multiplied coordinates.
			 *	@see multiply(const Vector3D& )
			 * 	@see multiply(float )
			 */
			Vector3D& multiply(float , float , float );
			/**
			 *	Divides the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@param valZ The value for the z coordinate.
			 *	@return This vector with the divided coordinates.
			 *	@see divide(const Vector3D& )
			 * 	@see divide(float )
			 */
			Vector3D& divide(float , float , float );

			/**
			 *	Sets the x coordinate to the given value.
			 * 	@param val The value of the x coordinate.
			 * 	@see setY(float )
			 * 	@see setZ(float )
			 */
			void setX(float );
			/**
			 *	Sets the y coordinate to the given value.
			 * 	@param val The value of the y coordinate.
			 * 	@see setX(float )
			 *	@see setZ(float )
			 */
			void setY(float );
			/**
			 *	Sets the z coordinate to the given value.
			 * 	@param val The value of the z coordinate.
			 *	@see setX(float )
			 * 	@see setY(float )
			 */
			void setZ(float );

			/**
			 *	Adds the right vector's coordinates to the left one.
			 *	@see operator-(Vector3D, const Vector3D& )
			 */
			Vector3D operator+(const Vector3D& );
			/**
			 *  Subtracts the right vector's coordinates to the left one.
			 *	@see operator+(Vector3D, const Vector3D& )
			 */
			Vector3D operator-(const Vector3D& );
			/**
			 *	Multiplies the left vector's coordinates with the right vector.
			 *	@see operator/(Vector3D, const Vector3D& )
			 */
			Vector3D operator*(const Vector3D& );
			/**
			 *	Divides the left vector's coordinates with the right vector.
			 *	@see operator*(Vector3D, const Vector3D& )
			 */
			Vector3D operator/(const Vector3D& );

			/**
			 *	Adds the given value to the vector.
			 *	@see operator-(Vector3D , float )
			 */
			Vector3D operator+(float );
			/**
			 *	Subtracts the given value to the vector.
			 *	@see operator+(Vector3D , float )
			 */
			Vector3D operator-(float );
			/**
			 *	Multiplies vector with the given value.
			 *	@see operator/(Vector3D , float )
			 */
			Vector3D operator*(float );
			/**
			 *	Divides vector with the given value.
			 *	@see operator*(Vector3D , float )
			 */
			Vector3D operator/(float );

			/**
			 *	Adds the given vector to this vector.
			 *	@see operator-=(const Vector3D& )
			 */
			Vector3D& operator+=(const Vector3D& );
			/**
			 *	Subtracts the given vector to this vector.
			 *	@see operator+=(const Vector3D& )
			 */
			Vector3D& operator-=(const Vector3D& );
			/**
			 *	Multiplies this vector by the given vector.
			 *	@see operator/=(const Vector3D& )
			 */
			Vector3D& operator*=(const Vector3D& );
			/**
			 *	Divides this vector by the given vector.
			 *	@see operator*=(const Vector3D& )
			 */
			Vector3D& operator/=(const Vector3D& );

			/**
			 *	Adds the given value to this vector.
			 *	@see operator-=(float )
			 */
			Vector3D& operator+=(float );
			/**
			 *	Subtracts the given value to this vector.
			 *	@see operator+=(float )
			 */
			Vector3D& operator-=(float );
			/**
			 *	Multiplies this vector by the given value.
			 *	@see operator/=(float )
			 */
			Vector3D& operator*=(float );
			/**
			 *	Divides this vector by the given value.
			 *	@see operator*=(float )
			 */
			Vector3D& operator/=(float );

			/**
			 *	Compares this vector's coordinates with the given one
			 *	and returns true if all three coordinates are exactly equal.
			 * 	@see operator!=()
			 */
			bool operator==(const Vector3D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and returns true if any of the coordinates are different.
			 * 	@see operator==()
			 */
			bool operator!=(const Vector3D& ) const;

			/**
			 *	Compares this vector's coordinates with the given one
			 *	and returns true if all the coordinates from this vector
			 * 	are lower than the coordinates from the given one.
			 * 	@see operator>()
			 */
			bool operator<(const Vector3D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and returns true if all the coordinates from this vector
			 *	are lower or equal than the coordinates from the
			 *	given one.
			 * 	@see operator>=()
			 */
			bool operator<=(const Vector3D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and return true if all the coordinates from this vector
			 *	are bigger than the coordinates from the given one
			 * 	@see operator<()
			 */
			bool operator>(const Vector3D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and return true if all the coordinates from this vector
			 *	are bigger or equal than the coordinates from the
			 *	given one
			 * 	@see operator<=()
			 */
			bool operator>=(const Vector3D& ) const;

			/**
			 *	The exact same thing as length().
			 *	@return The magnitude/length of this vector.
			 * 	@see length()
			 */
			float magnitude() const;
			/**
			 *	Returns the length of this vector.
			 *	@return The magnitude/length of this vector.
			 *	@see magnitude()
			 */
			float length() const;
			/**
			 *	Return true if any coordinate of this vector is null.
			 *	@return True if any coordinate is NAN. False otherwhise.
			 */
			bool isNull() const;
			/**
			 *	Normalizes this vector. (It retains the angle of the
			 * 	vector but reduces it's length to 1)
			 *	@see normalized()
			 */
			void normalize();
			/**
			 *	Returns a new normalized vector from this one. (It
			 *	retains the angle of this vector but the length
			 *	of the returned vector is 1)
			 *	@return Normalized vector with the angle of this one.
			 * 	@see normalize()
			 */
			Vector3D normalized() const;
			/**
			 *	Returns the value of the dot product between this
			 *	vector and the given one.
			 *	@param other The vector to dot product with this one.
			 *	@return The dot product of the two vectors.
			 */
			float dot(const Vector3D& ) const;
			/**
			 *	Returns the distance from this vector to a point, whose
			 *	coordinates are on the given vector.
			 * 	@param other The vector representing the point's coordinates.
			 * 	@return Distance between this vector and the point.
			 *	@see distanceToLine()
			 */
			float distanceToPoint(const Vector3D& ) const;
			/**
			 *	Returns the smallest distance from this vector to a line,
			 * 	which is defined by a point and angle, provided by the
			 *	two given vectors.
			 *	@param point A vector representing the point's coordinates.
			 * 	@param direction A vector representing the direction of the line.
			 *	@return The smallest distance between this vector and the line.
			 *	@see distanceToPoint()
			 */
			float distanceToLine(const Vector3D&, const Vector3D& ) const;

			/**
			 *	Returns the vector as a string.
			 */
			std::string toString() const;

			/**
			 *	Returns the vector as a stream.
			 */
			friend std::ostream& operator<<(std::ostream& , const Vector3D& );

			/**
			 *	The vector's x coordinate.
			 * 	@see y
			 *	@see z
			 */
			float x;
			/**
			 *	The vector's y coordinate.
			 * 	@see x
			 *	@see z
			 */
			float y;
			/**
			 *	The vector's z coordinate.
			 *	@see x
			 * 	@see y
			 */
			float z;
		};

		// Inline definitions
		inline float Vector3D::magnitude() const
		{
			return length();
		}

		inline bool Vector3D::isNull() const
		{
			return std::isnan(x) || std::isnan(y) || std::isnan(z);
		}
	}
}

#endif // AURORAFW_MATH_3DVECTOR_H
