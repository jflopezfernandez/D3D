
#ifndef WINDOWS_HEADER_INCLUDED
#define WINDOWS_HEADER_INCLUDED
#include <Windows.h>
#endif // WINDOWS_HEADER_INCLUDED

#ifndef D3D_IO_HPP
#include <D3D/IO.hpp>
#endif // D3D_IO_HPP

#ifndef D3D_LIST_HPP
#include <D3D/List.hpp>
#endif // D3D_LIST_HPP


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
