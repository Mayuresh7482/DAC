#include <iostream>
using namespace std;
#include <cstdint>
#include <cfloat>

int main()
{
    cout << "Size and range of data types in C++:" << endl;

    // char
    cout << "char: Size = " << sizeof(char) << " byte, Range = ";
    if (CHAR_MIN == 0)
        cout << "0 to " << CHAR_MAX << endl;
    else
        cout << CHAR_MIN << " to " << CHAR_MAX << endl;

    // bool
    cout << "bool: Size = " << sizeof(bool) << " byte, Range = "
         << "true or false" << endl;

    // int
    cout << "int: Size = " << sizeof(int) << " bytes, Range = " << INT_MIN << " to " << INT_MAX << endl;

    // short
    cout << "short: Size = " << sizeof(short) << " bytes, Range = " << SHRT_MIN << " to " << SHRT_MAX << endl;

    // long
    cout << "long: Size = " << sizeof(long) << " bytes, Range = " << LONG_MIN << " to " << LONG_MAX << endl;

    // long long
    cout << "long long: Size = " << sizeof(long long) << " bytes, Range = " << LLONG_MIN << " to " << LLONG_MAX << endl;

    // float
    cout << "float: Size = " << sizeof(float) << " bytes, Range = " << -FLT_MAX << " to " << FLT_MAX << endl;

    // double
    cout << "double: Size = " << sizeof(double) << " bytes, Range = " << -DBL_MAX << " to " << DBL_MAX << endl;

    // long double
    cout << "long double: Size = " << sizeof(long double) << " bytes" << endl;

    // Fixed-width integers
    cout << "Fixed-width integers:" << endl;
    cout << "int8_t: Size = " << sizeof(int8_t) << " bytes, Range = " << INT8_MIN << " to " << INT8_MAX << endl;
    cout << "uint8_t: Size = " << sizeof(uint8_t) << " bytes, Range = 0 to " << UINT8_MAX << endl;
    cout << "int16_t: Size = " << sizeof(int16_t) << " bytes, Range = " << INT16_MIN << " to " << INT16_MAX << endl;
    cout << "uint16_t: Size = " << sizeof(uint16_t) << " bytes, Range = 0 to " << UINT16_MAX << endl;
    cout << "int32_t: Size = " << sizeof(int32_t) << " bytes, Range = " << INT32_MIN << " to " << INT32_MAX << endl;
    cout << "uint32_t: Size = " << sizeof(uint32_t) << " bytes, Range = 0 to " << UINT32_MAX << endl;
    cout << "int64_t: Size = " << sizeof(int64_t) << " bytes, Range = " << INT64_MIN << " to " << INT64_MAX << endl;
    cout << "uint64_t: Size = " << sizeof(uint64_t) << " bytes, Range = 0 to " << UINT64_MAX << endl;

    return 0;
}
