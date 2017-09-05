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

#include <AuroraFW/Math/Vector2D.h>
#include <string>

namespace AuroraFW {
	namespace Math {

		// Constructors
		Vector2D::Vector2D()
			: x(0.0f), y(0.0f)
		{}

		Vector2D::Vector2D(float scalar)
			: x(scalar), y(scalar)
		{}

		Vector2D::Vector2D(float x, float y)
			: x(x), y(y)
		{}

		Vector2D::Vector2D(const Vector3D& v)
			: x(v.x), y(v.y)
		{}

		Vector2D::Vector2D(const Vector4D& v)
			: x(v.x), y(v.y)
		{}

		// Operations
		// Using an existing Vector2D
		Vector2D& Vector2D::add(const Vector2D& v)
		{
			x += v.x;
			y += v.y;

			return *this;
		}

		Vector2D& Vector2D::subtract(const Vector2D& v)
		{
			x -= v.x;
			y -= v.y;

			return *this;
		}

		Vector2D& Vector2D::multiply(const Vector2D& v)
		{
			x *= v.x;
			y *= v.y;

			return *this;
		}

		Vector2D& Vector2D::divide(const Vector2D& v)
		{
			x /= v.x;
			y /= v.y;

			return *this;
		}

		// Using a value (scalar)
		Vector2D& Vector2D::add(float val)
		{
			x += val;
			y += val;

			return *this;
		}

		Vector2D& Vector2D::subtract(float val)
		{
			x -= val;
			y -= val;

			return *this;
		}

		Vector2D& Vector2D::multiply(float val)
		{
			x *= val;
			y *= val;

			return *this;
		}

		Vector2D& Vector2D::divide(float val)
		{
			x /= val;
			y /= val;

			return *this;
		}

		// Using an x and y value
		Vector2D& Vector2D::add(float valX, float valY)
		{
			x += valX;
			y += valY;

			return *this;
		}

		Vector2D& Vector2D::subtract(float valX, float valY)
		{
			x -= valX;
			y -= valY;

			return *this;
		}

		Vector2D& Vector2D::multiply(float valX, float valY)
		{
			x *= valX;
			y *= valY;

			return *this;
		}

		Vector2D& Vector2D::divide(float valX, float valY)
		{
			x /= valX;
			y /= valY;

			return *this;
		}

		void Vector2D::setX(float val) {
			x = val;
		}

		void Vector2D::setY(float val) {
			y = val;
		}

		// Operators
		Vector2D Vector2D::operator+(const Vector2D& right)
		{
			return add(right);
		}

		Vector2D Vector2D::operator-(const Vector2D& right)
		{
			return subtract(right);
		}

		Vector2D Vector2D::operator*(const Vector2D& right)
		{
			return multiply(right);
		}

		Vector2D Vector2D::operator/(const Vector2D& right)
		{
			return divide(right);
		}

		Vector2D Vector2D::operator+(float value)
		{
			return Vector2D(x + value, y + value);
		}

		Vector2D Vector2D::operator-(float value)
		{
			return Vector2D(x - value, y - value);
		}

		Vector2D Vector2D::operator*(float value)
		{
			return Vector2D(x * value, y * value);
		}

		Vector2D Vector2D::operator/(float value)
		{
			return Vector2D(x / value, y / value);
		}

		Vector2D& Vector2D::operator+=(const Vector2D& other)
		{
			return add(other);
		}

		Vector2D& Vector2D::operator-=(const Vector2D& other)
		{
			return subtract(other);
		}

		Vector2D& Vector2D::operator*=(const Vector2D& other)
		{
			return multiply(other);
		}

		Vector2D& Vector2D::operator/=(const Vector2D& other)
		{
			return divide(other);
		}

		Vector2D& Vector2D::operator+=(float value)
		{
			return add(value);
		}

		Vector2D& Vector2D::operator-=(float value)
		{
			return subtract(value);
		}

		Vector2D& Vector2D::operator*=(float value)
		{
			return multiply(value);
		}

		Vector2D& Vector2D::operator/=(float value)
		{
			return divide(value);
		}

		bool Vector2D::operator==(const Vector2D& other) const
		{
			return x == other.x && y == other.y;
		}

		bool Vector2D::operator!=(const Vector2D& other) const
		{
			return !(*this == other);
		}

		bool Vector2D::operator<(const Vector2D& other) const
		{
			return x < other.x && y < other.y;
		}

		bool Vector2D::operator<=(const Vector2D& other) const
		{
			return x <= other.x && y <= other.y;
		}

		bool Vector2D::operator>(const Vector2D& other) const
		{
			return x > other.x && y > other.y;
		}

		bool Vector2D::operator>=(const Vector2D& other) const
		{
			return x >= other.x && y >= other.y;
		}

		// Vector operations
		float Vector2D::length() const
		{
			return sqrt(x * x + y * y);
		}

		void Vector2D::normalize()
		{
			float length = magnitude();
			this->x /= length;
			this->y /= length;
		}

		Vector2D Vector2D::normalized() const
		{
			float length = magnitude();
			return Vector2D(x / length, y / length);
		}

		float Vector2D::dot(const Vector2D& other) const
		{
			return x * other.x + y * other.y;
		}

		float Vector2D::distanceToPoint(const Vector2D& other) const
		{
			float a = x - other.x;
			float b = y - other.y;
			return sqrt(a * a + b * b);
		}

		float Vector2D::distanceToLine(const Vector2D& point, const Vector2D& direction) const
		{
			// TODO: Find the formula to get the distance
		}

		std::string Vector2D::toString() const
		{
			return "Vector2D: (" + std::to_string(x) + ", " + std::to_string(y) + ")";
		}

		std::ostream& operator<<(std::ostream& stream, const Vector2D& vector)
		{
			stream << vector.toString();
			return stream;
		}
	}
}
