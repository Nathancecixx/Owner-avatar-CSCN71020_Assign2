#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		TEST_METHOD(getPerimeterTestOne)
		{
			//This is testing the getPeramitor function using, 
			//Length = 6
			//Width = 9
			//Perimeter = 30
			int length = 6;
			int width = 9;
			int result = 0;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(30, result);
		}

		TEST_METHOD(getAreaTestOne)
		{
			//This is testing the getArea function using,
			//Length = 6
			//Width = 9
			//Perimeter = 30
			int length = 6;
			int width = 9;
			int result = 0;
			result = getArea(&length, &width);
			Assert::AreEqual(54, result);
		}

		TEST_METHOD(setLengthTestOne)
		{
			//This is testing the setLength function using,
			//Input = 0
			//Should not equal the same as 0 is too small therfore length shouldnt be changed

			int length;
			int inp = 0;
			setLength(inp, &length);
			Assert::AreNotEqual(inp, length);
		}
		TEST_METHOD(setLengthTestTwo)
		{
			//This is testing the setLength function using,
			//Input = 1

			int length;
			int inp = 1;
			setLength(inp, &length);
			Assert::AreEqual(inp, length);
		}

		TEST_METHOD(setLengthTestThree)
		{
			//This is testing the setLength function using,
			//Input = 99

			int length;
			int inp = 99;
			setLength(inp, &length);
			Assert::AreEqual(inp, length);
		}

		TEST_METHOD(setLengthTestFour)
		{
			//This is testing the setLength function using,
			//Input = 100
			//Should not equal the same as 100 is too big therfore length shouldnt be changed

			int length;
			int inp = 100;
			setLength(inp, &length);
			Assert::AreNotEqual(inp, length);
		}

		TEST_METHOD(setWidthTestOne)
		{
			//This is testing the setWidth function using,
			//Input = 0
			//Should not equal the same as 0 is too small therfore width shouldnt be changed

			int width;
			int inp = 0;
			setWidth(inp, &width);
			Assert::AreNotEqual(inp, width);
		}

		TEST_METHOD(setWidthTestTwo)
		{
			//This is testing the setWidth function using,
			//Input = 1

			int width;
			int inp = 1;
			setWidth(inp, &width);
			Assert::AreEqual(inp, width);
		}

		TEST_METHOD(setWidthTestThree)
		{
			//This is testing the setWidth function using,
			//Input = 99

			int width;
			int inp = 99;
			setWidth(inp, &width);
			Assert::AreEqual(inp, width);
		}

		TEST_METHOD(setWidthTestFour)
		{
			//This is testing the setWidth function using,
			//Input = 100
			//Should not equal the same as 100 is too big therfore width shouldnt be changed

			int width;
			int inp = 100;
			setWidth(inp, &width);
			Assert::AreNotEqual(inp, width);
		}
	};
}
