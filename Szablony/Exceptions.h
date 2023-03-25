#pragma once
#include <exception>
#include <iostream>

class Exceptions:public std::runtime_error
{
	
public:
		Exceptions() :runtime_error("\n")
		{}
	



};

