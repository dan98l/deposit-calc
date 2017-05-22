#include "../thirdparty/ctest.h"
#include "../src/deposit.h"


CTEST(getProcent, test1)
{
    // Given
    const int a = 300;
    const int b = 10000;

    // When
    const int result = getProcent(a, b);

    // Then
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(getProcent2, test2)
{
    // Given
    const int a = 300;
    const int b = 15000;
    
    // When
    const int result = getProcent(a, b);
    
    // Then
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}

CTEST(getStoimost, test1){
    // Given
    const float a = 1;
    const int b = 2;
    const int c = 30;

    // When
    const float result = calcStoimost(a, b, c);

    // Then
    const float expected = 1.6;
    ASSERT_DBL_NEAR(expected, result);

}
