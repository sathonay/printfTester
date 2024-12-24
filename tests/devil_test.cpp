extern "C"
{
#define new tripouille
#include "ft_printf.h"
#undef new
}

#include "sigsegv.hpp"
#include "check.hpp"
#include "print.hpp"
#define TEST_LIMIT 56

int iTest = 1;
int testNumber;
char * testName;
bool showTest = false;
int main(int ac, char ** av)
{
	signal(SIGSEGV, sigsegv);
	cout << FG_LYELLOW << "category: devil's place" << RESET_ALL;
	
	testName = av[0];
	if (ac != 1)
		printTestNumber(av[1], TEST_LIMIT);
	SUBCATEGORY(1, 20, cout << endl << FG_LGRAY << "subcategory: limbo" << RESET_ALL << endl;)
	TEST(1, print(" %11.10u ", 1234));
	TEST(2, print(" %11.10d ", 1234));
	TEST(3, print(" %11.10i ", 1234));
	TEST(4, print(" %#11.10x ", 1234));
	TEST(5, print(" %2d ", -1));
	TEST(6, print(" %02d ", -1));
	TEST(7, print(" %03d ", -1));
	TEST(8, print(" %03.3d ", -1));
	TEST(9, print(" %03.4d ", -1));
	TEST(10, print(" %10.0u ", 0));
	TEST(11, print(" %10.0d ", 0));
	TEST(12, print(" %10.0i ", 0));
	TEST(13, print(" %#10.0x ", 0));
	TEST(14, print(" %2d ", -1));
	TEST(15, print(" %02d ", -1));
	TEST(16, print(" %03d ", -1));
	TEST(17, print(" %03.3d ", -1));
	TEST(18, print(" %03.4d ", -1));
	TEST(19, print(" %2.1 3.2 4.3s ", "this one doesn't work on ubuntu but works on osx (ubuntu -> '%2.1 3.2 4.3s' | osx -> works)"));
	TEST(20, print(" %"));
	cout << ENDL;
	return (0);
}
