#pragma once
#include <iostream>
#include <exception>

using namespace std;

class negative_value :
    public exception
{
private:
	string message;

public:

	negative_value() = delete;

	negative_value(string message_p) : message{ message_p } {}

	virtual  const char* what()const noexcept final { return message.c_str(); }

	virtual ~negative_value() = default;
};

