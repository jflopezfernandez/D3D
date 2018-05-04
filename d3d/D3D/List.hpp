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
		// std::cout << v << '\n';
		IO::Print(v);
	}
}

void PrintList(const std::vector<std::string>& vector) {
	PrintVector(vector);
}

template <typename T>
void PrintLnVector(const std::vector<T>& vector) {
	for (auto& v : vector) {
		IO::PrintLn(v);
	}
}

void PrintLnList(const std::vector<std::string>& vector) {
	PrintLnVector(vector);
}

namespace List {
	
	// TODO: Fix this

	template <typename T>
	void PrintLnaaaa(const List& elements) {
		for (auto& e : elements) {
			IO::PrintLn(e);
		}
	}

	void PrintLnListaaaa(const List& elements) {
		IO::PrintLn(elements);
	}
}

#endif // D3D_LIST_HPP
