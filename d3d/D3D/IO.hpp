#ifndef D3D_IO_HPP
#define D3D_IO_HPP

#ifndef STDLIB_STRING_INCLUDED
#define STDLIB_STRING_INCLUDED
#include <string>
#endif // STDLIB_STRING_INCLUDED

#ifndef STDLIB_IOSTREAM_INCLUDED
#define STDLIB_IOSTREAM_INCLUDED
#include <iostream>
#endif // STDLIB_IOSTREAM_INCLUDED

#ifndef STDLIB_IOMANIP_INCLUDED
#define STDLIB_IOMANIP_INCLUDED
#include <iomanip>
#endif // STDLIB_IOMANIP_INCLUDED

struct IOConfig {
	static std::size_t width;
};

namespace IO {
	template <typename T>
	void Print(T arg) {
		std::cout << arg << ' ';
	}

	template <typename T, typename... Types>
	void Print(T arg, Types... args) {
		std::cout << arg << ' ';
		Print(args...);
	}

	template <typename T>
	void PrintLn(T arg) {
		std::cout << arg << '\n';
	}

	template <typename T, typename... Types>
	void PrintLn(T arg, Types... args) {
		std::cout << arg << '\n';
		PrintLn(args...);
	}
} // End namespace IO

#endif // D3D_IO_HPP
