#pragma once
#include <string>
using namespace std;
class RegUtil
{
public:
	RegUtil();
	~RegUtil();
	static bool isValid(char *str, char *patterm);
	static bool isPositiveInt(char *str);
	static bool isPositiveInt(string str);
	static bool isPositiveDouble(char *str);
	static bool isPositiveDouble(string str);
	static int returnIntIfValid(string input, int minNum, int maxNum);
	static double returnDoubleIfValid(string input, double minNum, double maxNum);
};