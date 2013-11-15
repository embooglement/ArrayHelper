//
//  main.cpp
//  Array
//
//  Created by Kevin Beason on 9/9/13.
//  Copyright (c) 2013 embooglement. All rights reserved.
//

#include <ios>
#include <iostream>
#include <type_traits>
#include <string>
#include "make_array.h"

int main(int argc, const char * argv[])
{
	auto arr_doubles = make_array(1, 2, 3.0, 4.5);
	
	for (auto d : arr_doubles)
	{
		std::cout << d << " ";
	}
	
	std::cout << std::endl;
	std::cout << std::boolalpha << std::is_same<decltype(arr_doubles), std::array<double, 4>>::value << std::endl;


	// might be nice to have a make_array<T> overload that only infers the array rank
	auto arr_strs = make_array(string("Hello"), string("world"));

	for (auto&& str : arr_strs)
	{
		std::cout << str << " ";
	}

	std::cout << std::endl;
	std::cout << std::boolalpha << std::is_same<decltype(arr_strs), std::array<std::string, 4>>::value << std::endl;


    return 0;
}

