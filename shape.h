#pragma once
#include <iostream>
#include <vector>
#include "negative_value.h"

using namespace std;

class shape
{
public:
	//координаты
	int x;
	int y;

	shape()noexcept = default;

	shape(int x_p, int y_p)noexcept : x{x_p}, y{y_p}{}

	void set_x(int x_p)noexcept { x = x_p; }

	void set_y(int y_p)noexcept { y = y_p; }

	int get_x()const noexcept { return x; }

	int get_y()const noexcept { return y; }

	virtual void show()const noexcept { cout << x << y; }
};

