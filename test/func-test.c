#include "ctest.h"
#include "../src/func.h"

CTEST(Summa, test_summa)
{
	int result = Summa (15, 19);
	int expected = 34;
	ASSERT_EQUAL(expected, result);
}
CTEST(Minus, test_minus)
{
	int result = Minus (77, 31);
	int expected = 46;
	ASSERT_EQUAL(expected, result);
}
CTEST(Product, test_product)
{
	int result = Product (5, 10);
	int expected = 50;
	ASSERT_EQUAL(expected, result);
}
CTEST(Divit, test_divit)
{
	int result = Divit (21, 3);
	int expected = 7;
	ASSERT_EQUAL(expected, result);
}
CTEST(Fact, test_fact)
{
	int result = Fact (5);
	int expected = 120;
	ASSERT_EQUAL(expected, result);
}
