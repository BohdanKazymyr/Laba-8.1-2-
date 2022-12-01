#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.1(rec)/Laba 8.1(rec).cpp"
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101]{};
			Count(str, 1);
			char* dest1 = new char[151];
			Change(dest1, str, dest1, 0);
		}
	};
}
