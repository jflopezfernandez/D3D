
#ifndef WINDOWS_HEADER_INCLUDED
#define WINDOWS_HEADER_INCLUDED
#include <Windows.h>
#endif // WINDOWS_HEADER_INCLUDED

#ifndef STDLIB_STRING_INCLUDED
#define STDLIB_STRING_INCLUDED
#include <string>
#endif // STDLIB_STRING_INCLUDED

#ifndef STDLIB_VECTOR_INCLUDED
#define STDLIB_VECTOR_INCLUDED
#include <vector>
#endif // STDLIB_VECTOR_INCLUDED

#ifndef D3D_IO_HPP
#include "IO.hpp"
#endif // D3D_IO_HPP

using List = std::vector<std::string>;

template <typename T>
void PrintVector(const std::vector<T>& vector) {
	for (auto& v : vector) {
		std::cout << v << '\n';
	}
}

void PrintList(const std::vector<std::string>& vector) {
	PrintVector(vector);
}

int main(int argc, char *argv[])
{
	List people = {
		"Jose",
		"Jake",
		"John",
		"Jeff",
		"Julio",
		"Juan"
	};

	PrintList(people);
}
