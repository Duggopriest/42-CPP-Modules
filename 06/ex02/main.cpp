#include <iostream>
#include <cstdlib>
#include "A.h"
#include "B.h"
#include "C.h"


Base	*generate( void )
{
	std::cout << "============================== Generating case ==========================================\n";
	int	num = rand() % 3;

	if (num == 0)
		return new A();
	else if (num == 1)
		return new B();
	else if (num == 2)
		return new C();
}

void	identify( Base &p )
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A\n";
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B\n";
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C\n";
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

void	identify( Base *p )
{
	A *a;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A\n";
	B *b;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << "B\n";
	C *c;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "C\n";
}

int		main( void )
{
	Base	*base;
	
	std::cout << "========================================================================\n";
	std::cout << "Identifying with pointers\n";
	std::cout << "========================================================================\n";

	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;

	std::cout << "\n========================================================================\n";
	std::cout << "========================================================================\n";
	std::cout << "Identifying with references\n";
	std::cout << "========================================================================\n";
	std::cout << "========================================================================\n\n";

	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
}
