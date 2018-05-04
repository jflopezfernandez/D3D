#ifndef D3D_LIST_HPP
#define D3D_LIST_HPP

#ifndef STDLIB_VECTOR_INCLUDED
#define STDLIB_VECTOR_INCLUDED
#include <vector>
#endif // STDLIB_VECTOR_INCLUDED

#ifndef D3D_IO_HPP
#include <D3D/IO.hpp>
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

#endif // D3D_LIST_HPP
