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

/** @file AuroraFW/Math/Vector3D.h
 * 3D Vector/Vertex header. This contains a Vector3d struct that
 * represents a vector or vertex in 3D space.
 * @since snapshot20170930
 */

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
		 * A struct that represents a 3D vector. A struct that store's
		 * position in 3D coordinates, allows to manipulate them and also
		 * to do vector operations.
		 * @since snapshot20170930
		 */
		struct AFW_PREFIX Vector3D {
			/**
			 * Constructs a vector with zero coordinates.
			 * @see Vector3D(const float& )
			 * @see Vector3D(const float& , const float& )
			 * @see Vector3d(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D();
			/**
			 * Constructs a vector with the given coordinates.
			 * @param scalar The float value to the x, y and z coordinates.
			 * @see Vector3D()
			 * @see Vector3D(const float& , const float& )
			 * @see Vector3D(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D(const float& );
			/**
			 * Constructs a vector with the given coordinates.
			 * The z value will be defined to 0.
			 * @param x The x value for the x coordinate.
			 * @param y The y value for the y coordinate.
			 * @see Vector3D( )
			 * @see Vector3D(const float& )
			 * @see Vector3D(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D(const float& , const float& );
			/**
			 * Constructs a vector with the given coordinates.
			 * @param x The x value for the x coordinate.
			 * @param y The y value for the y coordinate.
			 * @param x The z value for the z coordinate.
			 * @see Vector3D( )
			 * @see Vector3D(const float& )
			 * @see Vector3D(const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D(const float& , const float& , const float& );
			/**
			 * Constructs a vector using the coordinates from the given Vector2D.
			 * The z value will be defined as 0.
			 * @param v The Vector2D to get both the x and y coordinates from.
			 * @see Vector3D(const Vector4D& )
			 * @since snapshot20170930
			 */
			Vector3D(const Vector2D& );
			/**
			 * Construct a vector using the coordinates from the given Vector4D.
			 * The w value is not used.
			 * @param v The Vector4D to get the x, y and z coordinates from.
			 * @see Vector3D(const Vector2D& )
			 * @since snapshot20170930
			 */
			Vector3D(const Vector4D& );

			/**
			 * Adds the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the added coordinates.
			 * @see add(const float& )
			 * @see add(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& add(const Vector3D& );
			/**
			 * Subtracts the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the subtracted coordinates.
			 * @see subtract(const float& )
			 * @see subtract(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& subtract(const Vector3D& );
			/**
			 * Multiplies the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the multiplied coordinates.
			 * @see multiply(const float& )
			 * @see multiply(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& multiply(const Vector3D& );
			/**
			 * Divides the given vector's coordinates to this vector.
			 * @param v The vector to get the coordinates from.
			 * @return This vector with the divided coordinates.
			 * @see divide(const float& )
			 * @see divide(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& divide(const Vector3D& );

			/**
			 * Adds the given value to this vector.
			 * @param val The value for all three coordinates.
			 * @return This vector with the added coordinates.
			 * @see add(const Vector3D& )
			 * @see add(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& add(const float& );
			/**
			 * Subtracts the given value to this vector.
			 * @param val The value for all three coordinates.
			 * @return This vector with the subtracted coordinates.
			 * @see subtract(const Vector3D& )
			 * @see subtract(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& subtract(const float& );
			/**
			 * Multiplies the given value to this vector.
			 * @param val The value for all three coordinates.
			 * @return This vector with the multiplied coordinates.
			 * @see multiply(const Vector3D& )
			 * @see multiply(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& multiply(const float& );
			/**
			 * Divides the given value to this vector.
			 * @param val The value for all three coordinates.
			 * @return This vector with the divided coordinates.
			 * @see divide(const Vector3D& )
			 * @see divide(const float& , const float& , const float& )
			 * @since snapshot20170930
			 */
			Vector3D& divide(const float& );

			/**
			 * Adds the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @param valZ The value for the z coordinate.
			 * @return This vector with the added coordinates.
			 * @see add(const Vector3D& )
			 * @see add(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& add(const float& , const float& , const float& );
			/**
			 * Subtracts the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @param valZ The value for the z coordinate.
			 * @return This vector with the subtracted coordinates.
			 * @see subtract(const Vector3D& )
			 * @see subtract(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& subtract(const float& , const float& , const float& );
			/**
			 * Multiplies the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @param valZ The value for the z coordinate.
			 * @return This vector with the multiplied coordinates.
			 * @see multiply(const Vector3D& )
			 * @see multiply(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& multiply(const float& , const float& , const float& );
			/**
			 * Divides the given values to this vector.
			 * @param valX The value for the x coordinate.
			 * @param valY The value for the y coordinate.
			 * @param valZ The value for the z coordinate.
			 * @return This vector with the divided coordinates.
			 * @see divide(const Vector3D& )
			 * @see divide(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& divide(const float& , const float& , const float& );

			/**
			 * Sets the x coordinate to the given value.
			 * @param val The value of the x coordinate.
			 * @see setY(const float& )
			 * @see setZ(const float& )
			 * @since snapshot20170930
			 */
			void setX(const float& );
			/**
			 * Sets the y coordinate to the given value.
			 * @param val The value of the y coordinate.
			 * @see setX(const float& )
			 * @see setZ(const float& )
			 * @since snapshot20170930
			 */
			void setY(const float& );
			/**
			 * Sets the z coordinate to the given value.
			 * @param val The value of the z coordinate.
			 * @see setX(const float& )
			 * @see setY(const float& )
			 * @since snapshot20170930
			 */
			void setZ(const float& );

			/**
			 * Adds the right vector's coordinates to the left one.
			 * @see operator-(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D operator+(const Vector3D& );
			/**
			 *  Subtracts the right vector's coordinates to the left one.
			 * @see operator+(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D operator-(const Vector3D& );
			/**
			 * Multiplies the left vector's coordinates with the right vector.
			 * @see operator/(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D operator*(const Vector3D& );
			/**
			 * Divides the left vector's coordinates with the right vector.
			 * @see operator*(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D operator/(const Vector3D& );

			/**
			 * Adds the given value to the vector.
			 * @see operator-(const float& )
			 * @since snapshot20170930
			 */
			Vector3D operator+(const float& );
			/**
			 * Subtracts the given value to the vector.
			 * @see operator+(const float& )
			 * @since snapshot20170930
			 */
			Vector3D operator-(const float& );
			/**
			 * Multiplies vector with the given value.
			 * @see operator/(const float& )
			 * @since snapshot20170930
			 */
			Vector3D operator*(const float& );
			/**
			 * Divides vector with the given value.
			 * @see operator*(const float& )
			 * @since snapshot20170930
			 */
			Vector3D operator/(const float& );

			/**
			 * Adds the given vector to this vector.
			 * @see operator-=(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D& operator+=(const Vector3D& );
			/**
			 * Subtracts the given vector to this vector.
			 * @see operator+=(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D& operator-=(const Vector3D& );
			/**
			 * Multiplies this vector by the given vector.
			 * @see operator/=(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D& operator*=(const Vector3D& );
			/**
			 * Divides this vector by the given vector.
			 * @see operator*=(const Vector3D& )
			 * @since snapshot20170930
			 */
			Vector3D& operator/=(const Vector3D& );

			/**
			 * Adds the given value to this vector.
			 * @see operator-=(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& operator+=(const float& );
			/**
			 * Subtracts the given value to this vector.
			 * @see operator+=(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& operator-=(const float& );
			/**
			 * Multiplies this vector by the given value.
			 * @see operator/=(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& operator*=(const float& );
			/**
			 * Divides this vector by the given value.
			 * @see operator*=(const float& )
			 * @since snapshot20170930
			 */
			Vector3D& operator/=(const float& );

			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if all three coordinates are exactly equal.
			 * @see operator!=()
			 * @since snapshot20170930
			 */
			bool operator==(const Vector3D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if any of the coordinates are different.
			 * @see operator==()
			 * @since snapshot20170930
			 */
			bool operator!=(const Vector3D& ) const;

			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if all the coordinates from this vector
			 * are lower than the coordinates from the given one.
			 * @see operator>()
			 * @since snapshot20170930
			 */
			bool operator<(const Vector3D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and returns <code>true</code> if all the coordinates from this vector
			 * are lower or equal than the coordinates from the
			 * given one.
			 * @see operator>=()
			 * @since snapshot20170930
			 */
			bool operator<=(const Vector3D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and return <code>true</code> if all the coordinates from this vector
			 * are bigger than the coordinates from the given one
			 * @see operator<()
			 * @since snapshot20170930
			 */
			bool operator>(const Vector3D& ) const;
			/**
			 * Compares this vector's coordinates with the given one
			 * and return <code>true</code> if all the coordinates from this vector
			 * are bigger or equal than the coordinates from the
			 * given one
			 * @see operator<=()
			 * @since snapshot20170930
			 */
			bool operator>=(const Vector3D& ) const;

			/**
			 * The exact same thing as length().
			 * @return The magnitude/length of this vector.
			 * @see length()
			 * @since snapshot20170930
			 */
			float magnitude() const;
			/**
			 * Returns the length of this vector.
			 * @return The magnitude/length of this vector.
			 * @see magnitude()
			 * @since snapshot20170930
			 */
			float length() const;
			/**
			 * Return true if any coordinate of this vector is null.
			 * @return <code>true</code> if any coordinate is NAN. <code>false</code> otherwhise.
			 * @since snapshot20170930
			 */
			bool isNull() const;
			/**
			 * Normalizes this vector. (It retains the angle of the
			 * vector but reduces it's length to 1)
			 * @see normalized()
			 * @since snapshot20170930
			 */
			void normalize();
			/**
			 * Returns a new normalized vector from this one. (It
			 * retains the angle of this vector but the length
			 * of the returned vector is 1)
			 * @return Normalized vector with the angle of this one.
			 * @see normalize()
			 * @since snapshot20170930
			 */
			Vector3D normalized() const;
			/**
			 * Returns the value of the dot product between this
			 * vector and the given one.
			 * @param other The vector to dot product with this one.
			 * @return The dot product of the two vectors.
			 * @since snapshot20170930
			 */
			float dot(const Vector3D& ) const;
			/**
			 * Returns the distance from this vector to a point, whose
			 * coordinates are on the given vector.
			 * @param other The vector representing the point's coordinates.
			 * @return Distance between this vector and the point.
			 * @see distanceToLine()
			 * @since snapshot20170930
			 */
			float distanceToPoint(const Vector3D& ) const;
			/**
			 * Returns the smallest distance from this vector to a line,
			 * which is defined by a point and angle, provided by the
			 * two given vectors.
			 * @param point A vector representing the point's coordinates.
			 * @param direction A vector representing the direction of the line.
			 * @return The smallest distance between this vector and the line.
			 * @see distanceToPoint()
			 * @since snapshot20170930
			 */
			float distanceToLine(const Vector3D&, const Vector3D& ) const;

			/**
			 * Returns the vector as a string.
			 * @since snapshot20170930
			 */
			std::string toString() const;

			/**
			 * Returns the vector as a stream.
			 * @since snapshot20170930
			 */
			friend std::ostream& operator<<(std::ostream& , const Vector3D& );

			/**
			 * The vector's x coordinate.
			 * @see y
			 * @see z
			 * @since snapshot20170930
			 */
			float x;
			/**
			 * The vector's y coordinate.
			 * @see x
			 * @see z
			 * @since snapshot20170930
			 */
			float y;
			/**
			 * The vector's z coordinate.
			 * @see x
			 * @see y
			 * @since snapshot20170930
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
