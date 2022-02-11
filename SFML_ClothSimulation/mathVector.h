#pragma once
#include <iostream>
#include "SFML/System/Vector2.hpp"

struct sqrCashObj
{
public:
	float val;
	float sqrt;
};

struct mathVec
{
public:
	/*
	static std::vector<sqrCashObj> sqrCash;
	static void initCash()
	{
		sqrCash = std::vector<sqrCashObj>();
	}

	static float length(const sf::Vector2f& vec)
	{
		float val = vec.x * vec.x + vec.y * vec.y;
		for (auto c : sqrCash)
		{
			if (c.val + 0.2f > val && c.val - 0.2f < val)
			{
				return c.sqrt;
			}
		}
		sqrCashObj newSqrtCash = sqrCashObj();
		newSqrtCash.val = val;
		newSqrtCash.sqrt = sqrt(val);
		sqrCash.push_back(newSqrtCash);
		return newSqrtCash.sqrt;
	}
	*/
	static float length(const sf::Vector2f& vec)
	{
		float val = vec.x * vec.x + vec.y * vec.y;
		return sqrt(val);
	}
	static float length_noSqrt(const sf::Vector2f& vec)
	{
		return vec.x * vec.x + vec.y * vec.y;
	}
	static float distance(const sf::Vector2f& v1, const sf::Vector2f& v2)
	{
		float x = v1.x - v2.x;
		float y = v1.y - v2.y;
		return sqrt(x * x + y * y);
	}
	static sf::Vector2f avg(const sf::Vector2f& v1, const sf::Vector2f& v2)
	{
		return sf::Vector2f((v1.x + v2.x) / 2, (v1.y + v2.y) / 2);
	}
};