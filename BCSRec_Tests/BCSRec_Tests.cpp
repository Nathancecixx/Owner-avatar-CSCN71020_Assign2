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

	};
}
