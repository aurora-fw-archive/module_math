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

/** @file AuroraFW/Math/Vector2D.h
 * 2D Vector/Vertex Header. This contains a Vector2D struct that
 * represents a vector or vertex in 2D space.
 * @since snapshot20190930
 */

#ifndef AURORAFW_MATH_2DVECTOR_H
#define AURORAFW_MATH_2DVECTOR_H

#include <AuroraFW/Global.h>

#include <AuroraFW/TLib/_IOStream.h>

#include <AuroraFW/Math/Vector3D.h>
#include <AuroraFW/Math/Vector4D.h>

#include <cmath>

namespace AuroraFW {
	namespace Math {
		struct Vector3D;
		struct Vector4D;
		/**
		 * A struct that represents a 2D vector. A struct that store's
		 * position in 2D coordinates, allows to manipulate them and also
		 * to do vector operations.
		 * @since snapshot20190930
		 */
		struct AFW_PREFIX Vector2D {
			/**
			 * Constructs a vector with zero coordinates.
			 * @see Vector2D(const float& )
			 * @see Vector2D(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D();
			/**
			 * Constructs a vector with the given coordinates.
			 * @param scalar The float value to both x and y coordinates.
			 * @see Vector2D()
			 * @see Vector2D(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D(const float& );
			/**
			 * Constructs a vector with the given coordinates.
			 * @param x The x value for the x coordinate.
			 * @param y The y value for the y coordinate.
			 * @see Vector2D( )
			 * @see Vector2D(const float& )
			 * @since snapshot20190930
			 */
			Vector2D(const float& , const float& );
			/**
			 * Constructs a vector using the coordinates from the given Vector3D.
			 * The z value is not used.
			 * @param v The Vector3D to get both the x and y coordinates from.
			 * @see Vector2D(const Vector4D& )
			 * @since snapshot20190930
			 */
			explicit Vector2D(const Vector3D& );
			/**
			 * Construct a vector using the coordinates from the given Vector4D.
			 * The z and w values are not used.
			 * @param v The Vector4D to get both the x and y coordinates from.
			 * @see Vector2D(const Vector3D& )
			 * @since snapshot20190930
			 */
			explicit Vector2D(const Vector4D& );

			/**
			 * Adds the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the added coordinates.
			 * @see add(const float& )
			 * @see add(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D& add(const Vector2D& );
			/**
			 * Subtracts the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the subtracted coordinates.
			 * @see subtract(const float& )
			 * @see subtract(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D& subtract(const Vector2D& );
			/**
			 * Multiplies the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the multiplied coordinates.
			 * @see multiply(const float& )
			 * @see multiply(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D& multiply(const Vector2D& );
			/**
			 * Divides the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the divided coordinates.
			 * @see divide(const float& )
			 * @see divide(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D& divide(const Vector2D& );

			/**
			 * Adds the given value to this vector.
			 * @param val The value for both coordinates.
			 * @return This vector with the added coordinates.
			 * @see add(const Vector2D& )
			 * @see add(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D& add(const float& );
			/**
			 * Subtracts the given value to this vector.
			 * @param val The value for both coordinates.
			 * @return This vector with the subtracted coordinates.
			 * @see subtract(const Vector2D& )
			 * @see subtract(const float&& , const float&& )
			 * @since snapshot20190930
			 */
			Vector2D& subtract(const float& );
			/**
			 * Multiplies the given value to this vector.
			 * @param val The value for both coordinates.
			 * @return This vector with the multiplied coordinates.
			 * @see multiply(const Vector2D& )
			 * @see multiply(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D& multiply(const float& );
			/**
			 * Divides the given value to this vector.
			 * @param val The value for both coordinates.
			 * @return This vector with the divided coordinates.
			 * @see divide(const Vector2D& )
			 * @see divide(const float& , const float& )
			 * @since snapshot20190930
			 */
			Vector2D& divide(const float& );

			/**
			 * Adds the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @return This vector with the added coordinates.
			 * @see add(const Vector2D& )
			 * @see add(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& add(const float& , const float& );
			/**
			 * Subtracts the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @return This vector with the subtracted coordinates.
			 * @see subtract(const Vector2D& )
			 * @see subtract(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& subtract(const float&, const float& );
			/**
			 * Multiplies the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @return This vector with the multiplied coordinates.
			 * @see multiply(const Vector2D& )
			 * @see multiply(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& multiply(const float& , const float& );
			/**
			 * Divides the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @return This vector with the divided coordinates.
			 * @see divide(const Vector2D& )
			 * @see divide(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& divide(const float& , const float& );

			/**
			 * Sets the x coordinate to the given value.
			 * @param val The value of the x coordinate.
			 * @see setY(const float& )
			 * @since snapshot20190930
			 */
			void setX(const float& );
			/**
			 * Sets the y coordinate to the given value.
			 * @param val The value of the y coordinate.
			 * @see setX(const float& )
			 * @since snapshot20190930
			 */
			void setY(const float& );

			/**
			 * Adds the right vector's coordinates to the left one.
			 * @see operator-(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D operator+(const Vector2D& );
			/**
			 *  Subtracts the right vector's coordinates to the left one.
			 * @see operator+(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D operator-(const Vector2D& );
			/**
			 * Multiplies the left vector's coordinates with the right vector.
			 * @see operator/(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D operator*(const Vector2D& );
			/**
			 * Divides the left vector's coordinates with the right vector.
			 * @see operator*(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D operator/(const Vector2D& );

			/**
			 * Adds the given value to the vector.
			 * @see operator-(const float& )
			 * @since snapshot20190930
			 */
			Vector2D operator+(const float& );
			/**
			 * Subtracts the given value to the vector.
			 * @see operator+(const float& )
			 * @since snapshot20190930
			 */
			Vector2D operator-(const float& );
			/**
			 * Multiplies vector with the given value.
			 * @see operator/(const float& )
			 * @since snapshot20190930
			 */
			Vector2D operator*(const float& );
			/**
			 * Divides vector with the given value.
			 * @see operator*(const float& )
			 * @since snapshot20190930
			 */
			Vector2D operator/(const float& );

			/**
			 * Adds the given vector to this vector.
			 * @see operator-=(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D& operator+=(const Vector2D& );
			/**
			 * Subtracts the given vector to this vector.
			 * @see operator+=(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D& operator-=(const Vector2D& );
			/**
			 * Multiplies this vector by the given vector.
			 * @see operator/=(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D& operator*=(const Vector2D& );
			/**
			 * Divides this vector by the given vector.
			 * @see operator*=(const Vector2D& )
			 * @since snapshot20190930
			 */
			Vector2D& operator/=(const Vector2D& );

			/**
			 * Adds the given value to this vector.
			 * @see operator-=(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& operator+=(const float& );
			/**
			 * Subtracts the given value to this vector.
			 * @see operator+=(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& operator-=(const float& );
			/**
			 * Multiplies this vector by the given value.
			 * @see operator/=(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& operator*=(const float& );
			/**
			 * Divides this vector by the given value.
			 * @see operator*=(const float& )
			 * @since snapshot20190930
			 */
			Vector2D& operator/=(const float& );

			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if both coordinates are exactly equal.
			 * @see operator!=()
			 * @since snapshot20190930
			 */
			bool operator==(const Vector2D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if any of the coordinates are different.
			 * @see operator==()
			 * @since snapshot20190930
			 */
			bool operator!=(const Vector2D& ) const;

			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if all the coordinates from this vector
			 * are lower than the coordinates from the given one.
			 * @see operator>()
			 * @since snapshot20190930
			 */
			bool operator<(const Vector2D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if all the coordinates from this vector
			 * are lower or equal than the coordinates from the
			 * given one.
			 * @see operator>=()
			 * @since snapshot20190930
			 */
			bool operator<=(const Vector2D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if all the coordinates from this vector
			 * are bigger than the coordinates from the given one
			 * @see operator<()
			 * @since snapshot20190930
			 */
			bool operator>(const Vector2D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if all the coordinates from this vector
			 * are bigger or equal than the coordinates from the
			 * given one
			 * @see operator<=()
			 * @since snapshot20190930
			 */
			bool operator>=(const Vector2D& ) const;

			/**
			 * The exact same thing as length().
			 * @return The magnitude/length of this vector.
			 * @see length()
			 * @since snapshot20190930
			 */
			float magnitude() const;
			/**
			 * Returns the length of this vector.
			 * @return The magnitude/length of this vector.
			 * @see magnitude()
			 * @since snapshot20190930
			 */
			float length() const;
			/**
			 * Return true if any coordinate of this vector is null.
			 * @return <code>true</code> if any coordinate is NAN. <code>false</code> otherwhise.
			 * @since snapshot20190930
			 */
			bool isNull() const;
			/**
			 * Normalizes this vector. (It retains the angle of the
			 * vector but reduces it's length to 1)
			 * @see normalized()
			 * @since snapshot20190930
			 */
			void normalize();
			/**
			 * Returns a new normalized vector from this one. (It
			 * retains the angle of this vector but the length
			 * of the returned vector is 1)
			 * @return Normalized vector with the angle of this one.
			 * @see normalize()
			 * @since snapshot20190930
			 */
			Vector2D normalized() const;
			/**
			 * Returns the value of the dot product between this
			 * vector and the given one.
			 * @param other The vector to dot product with this one.
			 * @return The dot product of the two vectors.
			 * @since snapshot20190930
			 */
			float dot(const Vector2D& ) const;
			/**
			 * Returns the distance from this vector to a point, whose
			 * coordinates are on the given vector.
			 * @param other The vector representing the point's coordinates.
			 * @return Distance between this vector and the point.
			 * @see distanceToLine()
			 * @since snapshot20190930
			 */
			float distanceToPoint(const Vector2D& ) const;
			/**
			 * Returns the smallest distance from this vector to a line,
			 * which is defined by a point and angle, provided by the
			 * two given vectors.
			 * @param point A vector representing the point's coordinates.
			 * @param direction A vector representing the direction of the line.
			 * @return The smallest distance between this vector and the line.
			 * @see distanceToPoint()
			 * @since snapshot20190930
			 */
			float distanceToLine(const Vector2D& , const Vector2D& ) const;

			/**
			 * Returns the vector as a string.
			 * @since snapshot20190930
			 */
			std::string toString() const;

			/**
			 * Returns the vector as a stream.
			 * @since snapshot20190930
			 */
			friend std::ostream& operator<<(std::ostream& , const Vector2D& );

			/**
			 * The vector's x coordinate.
			 * @see y
			 * @since snapshot20190930
			 */
			float x;
			/**
			 * The vector's y coordinate.
			 * @see x
			 * @since snapshot20190930
			 */
			float y;
		};

		// Inline definitions
		inline float Vector2D::magnitude() const
		{
			return length();
		}

		inline bool Vector2D::isNull() const
		{
			return std::isnan(x) || std::isnan(y);
		}
	}
}

#endif // AURORAFW_MATH_2DVECTOR_H
