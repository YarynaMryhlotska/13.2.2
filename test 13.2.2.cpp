#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\ап\Yaryna visual studio\555555555555555555555555555555555555555\13.2.2\13.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test1322
{
	TEST_CLASS(test1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = MIN(3, 6);
			Assert::AreEqual(a, 3);
		}
	};
}
