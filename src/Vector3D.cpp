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

#include <AuroraFW/Math/Vector3D.h>
#include <string>

namespace AuroraFW {
    namespace Math {

        // Constructors
        Vector3D::Vector3D()
        : x(0.0f), y(0.0f), z(0.0f)
        {}

        Vector3D::Vector3D(const float& scalar)
            : x(scalar), y(scalar), z(scalar)
        {}

        Vector3D::Vector3D(const float& x, const float& y)
            : x(x), y(y), z(0.0f)
        {}

        Vector3D::Vector3D(const float& x, const float& y, const float& z)
            : x(x), y(y), z(z)
        {}

        Vector3D::Vector3D(const Vector2D& v)
            : x(v.x), y(v.y), z(0.0f)
        {}

        Vector3D::Vector3D(const Vector4D& v)
            : x(v.x), y(v.y), z(v.z)
        {}

        // Operations
        // Using an existing Vector3D
        Vector3D& Vector3D::add(const Vector3D& v)
        {
            x += v.x;
            y += v.y;
            z += v.z;

            return *this;
        }

        Vector3D& Vector3D::subtract(const Vector3D& v)
        {
            x -= v.x;
            y -= v.y;
            z -= v.z;

            return *this;
        }

        Vector3D& Vector3D::multiply(const Vector3D& v)
        {
            x *= v.x;
            y *= v.y;
            z *= v.z;

            return *this;
        }

        Vector3D& Vector3D::divide(const Vector3D& v)
        {
            x /= v.x;
            y /= v.y;
            z /= v.z;

            return *this;
        }

        // Using a value (scalar)
        Vector3D& Vector3D::add(const float& val)
        {
            x += val;
            y += val;
            z += val;

            return *this;
        }

        Vector3D& Vector3D::subtract(const float& val)
        {
            x -= val;
            y -= val;
            z -= val;

            return *this;
        }

        Vector3D& Vector3D::multiply(const float& val)
        {
            x *= val;
            y *= val;
            z *= val;

            return *this;
        }

        Vector3D& Vector3D::divide(const float& val)
        {
            x /= val;
            y /= val;
            z /= val;

            return *this;
        }

        // Using an x, y and z value
        Vector3D& Vector3D::add(const float& valX, const float& valY, const float& valZ)
        {
            x += valX;
            y += valY;
            z += valZ;

            return *this;
        }

        Vector3D& Vector3D::subtract(const float& valX, const float& valY, const float& valZ)
        {
            x -= valX;
            y -= valY;
            z -= valZ;

            return *this;
        }

        Vector3D& Vector3D::multiply(const float& valX, const float& valY, const float& valZ)
        {
            x *= valX;
            y *= valY;
            z *= valZ;

            return *this;
        }

        Vector3D& Vector3D::divide(const float& valX, const float& valY, const float& valZ)
        {
            x /= valX;
            y /= valY;
            z /= valZ;

            return *this;
        }

        void Vector3D::setX(const float& val)
        {
            x = val;
        }

        void Vector3D::setY(const float& val)
        {
            y = val;
        }

        void Vector3D::setZ(const float& val)
        {
            z = val;
        }

        // Operators
        Vector3D Vector3D::operator+(const Vector3D& right)
        {
            return add(right);
        }

        Vector3D Vector3D::operator-(const Vector3D& right)
        {
            return subtract(right);
        }

        Vector3D Vector3D::operator*(const Vector3D& right)
        {
            return multiply(right);
        }

        Vector3D Vector3D::operator/(const Vector3D& right)
        {
            return divide(right);
        }

        Vector3D Vector3D::operator+(const float& value)
        {
            return Vector3D(x + value, y + value, z + value);
        }

        Vector3D Vector3D::operator-(const float& value)
        {
            return Vector3D(x - value, y - value, z - value);
        }

        Vector3D Vector3D::operator*(const float& value)
        {
            return Vector3D(x * value, y * value, z * value);
        }

        Vector3D Vector3D::operator/(const float& value)
        {
            return Vector3D(x / value, y / value, z / value);
        }

        Vector3D& Vector3D::operator+=(const Vector3D& other)
        {
            return add(other);
        }

        Vector3D& Vector3D::operator-=(const Vector3D& other)
        {
            return subtract(other);
        }

        Vector3D& Vector3D::operator*=(const Vector3D& other)
        {
            return multiply(other);
        }

        Vector3D& Vector3D::operator/=(const Vector3D& other)
        {
            return divide(other);
        }

        Vector3D& Vector3D::operator+=(const float& value)
        {
            return add(value);
        }

        Vector3D& Vector3D::operator-=(const float& value)
        {
            return subtract(value);
        }

        Vector3D& Vector3D::operator*=(const float& value)
        {
            return multiply(value);
        }

        Vector3D& Vector3D::operator/=(const float& value)
        {
            return divide(value);
        }

        bool Vector3D::operator==(const Vector3D& other) const
        {
            return x == other.x && y == other.y && z == other.z;
        }

        bool Vector3D::operator!=(const Vector3D& other) const
        {
            return !(*this == other);
        }

        bool Vector3D::operator<(const Vector3D& other) const
        {
            return x < other.x && y < other.y && z < other.z;
        }

        bool Vector3D::operator<=(const Vector3D& other) const
        {
            return x <= other.x && y <= other.y && z <= other.z;
        }

        bool Vector3D::operator>(const Vector3D& other) const
        {
            return x > other.x && y > other.y && z > other.z;
        }

        bool Vector3D::operator>=(const Vector3D& other) const
        {
            return x >= other.x && y >= other.y && z >= other.z;
        }

        // Vector operations
        float Vector3D::length() const
        {
            return sqrt(x * x + y * y + z * z);
        }

        void Vector3D::normalize()
        {
            float length = magnitude();
            this->x /= length;
            this->y /= length;
            this->z /= length;
        }

        Vector3D Vector3D::normalized() const
        {
            float length = magnitude();
            return Vector3D(x / length, y / length, z / length);
        }

        float Vector3D::dot(const Vector3D& other) const
        {
            return x * other.x + y * other.y + z * other.z;
        }

        float Vector3D::distanceToPoint(const Vector3D& other) const
        {
            float a = x - other.x;
            float b = y - other.y;
            float c = z - other.z;
            return sqrt(a * a + b * b + c * c);
        }

        float Vector3D::distanceToLine(const Vector3D& point, const Vector3D& direction) const
        {
            // TODO: Find the formula to get the distance
        }

        std::string Vector3D::toString() const
        {
            return "Vector3D: (" + std::to_string(x) + ", " + std::to_string(y) + ")";
        }

        std::ostream& operator<<(std::ostream& stream, const Vector3D& vector)
        {
            stream << vector.toString();
            return stream;
        }
    }
}