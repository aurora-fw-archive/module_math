#include <Aurora/TLib/Target/PragmaOnce.h>
#if defined(AURORA_TARGET_PRAGMA_ONCE_SUPPORT) && AURORA_TARGET_PRAGMA_ONCE_SUPPORT
    #pragma once
#endif

#include <Aurora/Common.h>

#ifndef INCLUDE_H_AURORA_MATH_2DVECTOR
#define INCLUDE_H_AURORA_MATH_2DVECTOR

#include <iostream>
#include <Aurora/Math/Vector3D.h>
#include <Aurora/Math/Vector4D.h>


namespace Aurora {
	namespace Math {
		struct Vector3D;
        struct Vector4D;
		/**
		 *	A struct that represents a 2D vector. A struct that store's
		 * 	position in 2D coordinates, allows to manipulate them and also
		 * 	to do vector operations.
		 */
		struct AURORA_PREFIX Vector2D {
			// Constructors
			/**
			 *	Constructs a vector with zero coordinates.
			 */
			Vector2D();
			/**
			 *	Constructs a vector with the given coordinates.
			 * 	@param scalar The float value to both x and y coordinates.
			 */
			Vector2D(float );
			/**
			 *	Constructs a vector with the given coordinates.
			 * 	@param x The x value for the x coordinate.
			 * 	@param y The y value for the y coordinate.
			 */
			Vector2D(float , float );
			/**
			 *	Constructs a vector using the coordinates from the given Vector3D.
			 *	The z value is not used.
			 *	@param v The Vector3D to get both the x and y coordinates from.
			 */
			Vector2D(const Vector3D& );
			/**
			 *	Construct a vector using the coordinates from the given Vector4D.
			 *	The z and w values are not used.
			 *	@param v The Vector4D to get both the x and y coordinates from.
			 */
            Vector2D(const Vector4D& );

			// Operations
			/**
			 *	Adds the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the added coordinates.
			 *	@see add(float )
			 * 	@see add(float , float )
			 */
			Vector2D& add(const Vector2D& );
			/**
			 *	Subtracts the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the subtracted coordinates.
			 *	@see subtract(float )
			 * 	@see subtract(float , float )
			 */
			Vector2D& subtract(const Vector2D& );
			/**
			 *	Multiplies the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the multiplied coordinates.
			 *	@see multiply(float )
			 * 	@see multiply(float , float )
			 */
			Vector2D& multiply(const Vector2D& );
			/**
			 *	Divides the given vector's coordinates to this vector.
			 *	@param v The vector to get the coordinates from.
			 *	@return This vector with the divided coordinates.
			 *	@see divide(float )
			 * 	@see divide(float , float )
			 */
			Vector2D& divide(const Vector2D& );

			// Using a value (scalar)
			/**
			 *	Adds the given value to this vector.
			 *	@param val The value for both coordinates.
			 *	@return This vector with the added coordinates.
			 *	@see add(const Vector2D& )
			 * 	@see add(float , float )
			 */
			Vector2D& add(float );
			/**
			 *	Subtracts the given value to this vector.
			 *	@param val The value for both coordinates.
			 *	@return This vector with the subtracted coordinates.
			 *	@see subtract(const Vector2D& )
			 * 	@see subtract(float , float )
			 */
			Vector2D& subtract(float );
			/**
			 *	Multiplies the given value to this vector.
			 *	@param val The value for both coordinates.
			 *	@return This vector with the multiplied coordinates.
			 *	@see multiply(const Vector2D& )
			 * 	@see multiply(float , float )
			 */
			Vector2D& multiply(float );
			/**
			 *	Divides the given value to this vector.
			 *	@param val The value for both coordinates.
			 *	@return This vector with the divided coordinates.
			 *	@see divide(const Vector2D& )
			 * 	@see divide(float , float )
			 */
			Vector2D& divide(float );

			// Using an x and y value
			/**
			 *	Adds the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@return This vector with the added coordinates.
			 *	@see add(const Vector2D& )
			 * 	@see add(float )
			 */
			Vector2D& add(float , float );
			/**
			 *	Subtracts the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@return This vector with the subtracted coordinates.
			 *	@see subtract(const Vector2D& )
			 * 	@see subtract(float )
			 */
			Vector2D& subtract(float, float );
			/**
			 *	Multiplies the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@return This vector with the multiplied coordinates.
			 *	@see multiply(const Vector2D& )
			 * 	@see multiply(float )
			 */
			Vector2D& multiply(float , float );
			/**
			 *	Divides the given values to this vector.
			 *	@param valX The value for the x coordinate.
			 * 	@param valY The value for the y coordinate.
			 *	@return This vector with the divided coordinates.
			 *	@see divide(const Vector2D& )
			 * 	@see divide(float )
			 */
			Vector2D& divide(float , float );

			/**
			 *	Sets the x coordinate to the given value.
			 * 	@param val The value of the x coordinate.
			 * 	@see setY(float )
			 */
			void setX(float );
			/**
			 *	Sets the y coordinate to the given value.
			 *	@param val The value of the y coordinate.
			 *	@see setX(float )
			 */
            void setY(float );

			// Operators
			/**
			 *	Adds the right vector's coordinates to the left one.
			 *	@see operator-(Vector2D, const Vector2D& )
			 */
			friend Vector2D operator+(Vector2D , const Vector2D& );
			/**
			 *  Subtracts the right vector's coordinates to the left one.
			 *	@see operator+(Vector2D, const Vector2D& )
			 */
			friend Vector2D operator-(Vector2D , const Vector2D& );
			/**
			 *	Multiplies the left vector's coordinates with the right vector.
			 *	@see operator/(Vector2D, const Vector2D& )
			 */
			friend Vector2D operator*(Vector2D , const Vector2D& );
			/**
			 *	Divides the left vector's coordinates with the right vector.
			 *	@see operator*(Vector2D , const Vector2D& )
			 */
			friend Vector2D operator/(Vector2D , const Vector2D& );

			/**
			 *	Adds the given value to the vector.
			 *	@see operator-(Vector2D , float )
			 */
			friend Vector2D operator+(Vector2D , float );
			/**
			 *	Subtracts the given value to the vector.
			 *	@see operator+(Vector2D , float )
			 */
			friend Vector2D operator-(Vector2D , float );
			/**
			 *	Multiplies vector with the given value.
			 *	@see operator/(Vector2D , float )
			 */
			friend Vector2D operator*(Vector2D , float );
			/**
			 *	Divides vector with the given value.
			 *	@see operator*(Vector2D , float )
			 */
			friend Vector2D operator/(Vector2D , float );

			/**
			 *	Adds the given vector to this vector.
			 *	@see operator-=(const Vector2D& )
			 */
			Vector2D& operator+=(const Vector2D& );
			/**
			 *	Subtracts the given vector to this vector.
			 *	@see operator+=(const Vector2D& )
			 */
			Vector2D& operator-=(const Vector2D& );
			/**
			 *	Multiplies this vector by the given vector.
			 *	@see operator/=(const Vector2D& )
			 */
			Vector2D& operator*=(const Vector2D& );
			/**
			 *	Divides this vector by the given vector.
			 *	@see operator*=(const Vector2D& )
			 */
			Vector2D& operator/=(const Vector2D& );

			/**
			 *	Adds the given value to this vector.
			 *	@see operator-=(float )
			 */
			Vector2D& operator+=(float );
			/**
			 *	Subtracts the given value to this vector.
			 *	@see operator+=(float )
			 */
			Vector2D& operator-=(float );
			/**
			 *	Multiplies this vector by the given value.
			 *	@see operator/=(float )
			 */
			Vector2D& operator*=(float );
			/**
			 *	Divides this vector by the given value.
			 *	@see operator*=(float )
			 */
			Vector2D& operator/=(float );

			/**
			 *	Compares this vector's coordinates with the given one
			 *	and returns true if both coordinates are exactly equal.
			 * 	@see operator!=()
			 */
			bool operator==(const Vector2D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and returns true if any of the coordinates are different.
			 * 	@see operator==()
			 */
			bool operator!=(const Vector2D& ) const;

			/**
			 *	Compares this vector's coordinates with the given one
			 *	and return true if all the coordinates from this vector
			 * 	are lower than the coordinates from the given one.
			 * 	@see operator>()
			 */
			bool operator<(const Vector2D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and return true if all the coordinates from this vector
			 *	are lower or equal than the coordinates from the
			 *	given one.
			 * 	@see operator>=()
			 */
			bool operator<=(const Vector2D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and return true if all the coordinates from this vector
			 *	are bigger than the coordinates from the given one
			 * 	@see operator<()
			 */
			bool operator>(const Vector2D& ) const;
			/**
			 *	Compares this vector's coordinates with the given one
			 *	and return true if all the coordinates from this vector
			 *	are bigger or equal than the coordinates from the
			 *	given one
			 * 	@see operator<=()
			 */
			bool operator>=(const Vector2D& ) const;

			// Vector operations
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
			 *	@return True if any coordinate is NULL. False otherwhise.
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
			Vector2D normalized() const;
			/**
			 *	Returns the value of the dot product between this
			 *	vector and the given one.
			 *	@param other The vector to dot product with this one.
			 *	@return The dot product of the two vectors.
			 */
			float dot(const Vector2D& ) const;
			/**
			 *	Returns the distance from this vector to a point, whose
			 *	coordinates are on the given vector.
			 * 	@param other The vector representing the point's coordinates.
			 * 	@return Distance between this vector and the point.
			 *	@see distanceToLine()
			 */
			float distanceToPoint(const Vector2D& ) const;
			/**
			 *	Returns the smallest distance from this vector to a line,
			 * 	which is defined by a point and angle, provided by the
			 *	two given vectors.
			 *	@param point A vector representing the point's coordinates.
			 * 	@param direction A vector representing the direction of the line.
			 *	@return The smallest distance between this vector and the line.
			 *	@see distanceToPoint()
			 */
            float distanceToLine(const Vector2D& , const Vector2D& ) const;

			/**
			 *	Returns the vector as a string.
			 */
            std::string toString() const;

			/**
			 *	Returns the vector as a stream.
			 */
			friend std::ostream& operator<<(std::ostream& , const Vector2D& );

			/**
			 *	The vector's x and y coordinates.
			 */
			float x, y;
		};

		// Inline definitions
		inline float Vector2D::magnitude() const
		{
			return length();
		}

		inline bool Vector2D::isNull() const
		{
			return x == NULL || y == NULL;
		}
	}
}

#endif // INCLUDE_H_AURORA_MATH_2DVECTOR
