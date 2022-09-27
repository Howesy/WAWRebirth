#pragma once

#include <Windows.h>
#include <iostream>

struct Vector3
{
	float x, y, z;

	Vector3 operator+ (Vector3& vector)
	{
		Vector3 placeholderVector{};
		auto [xx, yy, zz] = vector;
		placeholderVector.x = x + xx;
		placeholderVector.y = y + yy;
		placeholderVector.z = z + zz;
		return placeholderVector;
	}

	Vector3 operator- (Vector3& vector)
	{
		Vector3 placeholderVector{};
		auto [xx, yy, zz] = vector;
		placeholderVector.x = x - xx;
		placeholderVector.y = y - yy;
		placeholderVector.z = z - zz;
		return placeholderVector;
	}

	Vector3 operator* (Vector3& vector)
	{
		Vector3 placeholderVector{};
		auto [xx, yy, zz] = vector;
		placeholderVector.x = x * xx;
		placeholderVector.y = y * yy;
		placeholderVector.z = z * zz;
		return placeholderVector;
	}

	Vector3 operator/ (Vector3& vector)
	{
		Vector3 placeholderVector{};
		auto [xx, yy, zz] = vector;
		placeholderVector.x = x / xx;
		placeholderVector.y = y / yy;
		placeholderVector.z = z / zz;
		return placeholderVector;
	}

	Vector3 operator+ (float scalar)
	{
		Vector3 placeholderVector{};
		placeholderVector.x = x + scalar;
		placeholderVector.y = y + scalar;
		placeholderVector.z = z + scalar;
		return placeholderVector;
	}

	Vector3 operator- (float scalar)
	{
		Vector3 placeholderVector{};
		placeholderVector.x = x - scalar;
		placeholderVector.y = y - scalar;
		placeholderVector.z = z - scalar;
		return placeholderVector;
	}

	Vector3 operator* (float scalar)
	{
		Vector3 placeholderVector{};
		placeholderVector.x = x * scalar;
		placeholderVector.y = y * scalar;
		placeholderVector.z = z * scalar;
		return placeholderVector;
	}

	Vector3 operator/ (float scalar)
	{
		Vector3 placeholderVector{};
		placeholderVector.x = x / scalar;
		placeholderVector.y = y / scalar;
		placeholderVector.z = z / scalar;
		return placeholderVector;
	}

	bool operator== (Vector3& vector)
	{
		auto [xx, yy, zz] = vector;
		bool xComparison = x == xx;
		bool yComparison = y == yy;
		bool zComparison = z == zz;
		return (xComparison && yComparison && zComparison);
	}

	Vector3 absolute()
	{
		Vector3 placeholderVector{};
		placeholderVector.x = abs(x);
		placeholderVector.y = abs(y);
		placeholderVector.z = abs(z);
		return placeholderVector;
	}

	void log()
	{
		printf("X: %f, Y: %f, Z: %f \n", x, y, z);
	}
};