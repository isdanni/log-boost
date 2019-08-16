#include <string> 
#include <iostream>
#include <cstdlib>
#include<stdlib.h>
using namespace std;

MyTime::MyTime()
{
}


MyTime::~MyTime()
{
}

int MyTime::getYear(tm input) {
	return 1900 + input.tm_year;
};
int MyTime::getMonth(tm input) {
	return 1 + input.tm_mon;
};
int MyTime::getDate(tm input) {
	int localhour = input.tm_hour - 8;
	if (localhour < 0) {
		return 1+input.tm_mday-1;
	}
	return 1+input.tm_mday;
};

int MyTime::getWeekDay(tm input) {
	return input.tm_wday;
};

int MyTime::getHour(tm input) {
	int localhour = input.tm_hour - 8;
	if (localhour <0) {
		localhour = 24 + localhour - 8;
	}
	return localhour;
};




int MyTime::getMin(tm input) {
	return input.tm_min;
};
int MyTime::getSec(tm input) {
	return input.tm_sec;
};

tm MyTime::getCurrentTm() {
	time_t now = time(0);
	tm *currentTime = localtime(&now);
	return *currentTime;
};


void MyTime::printTime(tm input) {
	cout << "LocalTime,Year:" << getYear(input) << ",Month:" << getMonth(input) << ",Date:" << getDate(input)
		<< ",Hr:" << getHour(input) << ",Min:" << getMin(input) << ",Sec:" << getSec(input)
		<< endl;
};
