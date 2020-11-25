//私的によく使う関数のみ
//wipなので、戻り値が違う可能性があります。

#ifndef OUTPUT
#pragma region include
#include <iostream>
#include <time.h>
#include <cmath>
#include <string>
#pragma endregion 

#pragma region include

//PinType
#define OUTPUT 1
#define INPUT 0

//DataType
#define HIGH 1
#define LOW 0

//boolean
#define true 1
#define false 0

#pragma endregion

void setup();
void loop();

int main()
{
	setup();
	while(1)
	{
		loop();
	}

	return 0;
}

//functions
void pinMode(int pin, int mode)
{
	//何もしない
}

void digitalWrite(int pin, int value)
{
	//何もしない
}

int digitalRead(int pin)
{
	//現状HIGHのみ返す
	return HIGH;
}

void analogWrite(int pin, int value)
{
	//何もしない
}

int analogRead(int pin)
{
	//値は0~1023 最大値を返す
	return 1023;
}

void delay(int ms)
{
	struct timespec ts;
	ts.tv_sec = ms / 1000;
	ts.tv_nsec = ms % 1000 * 1000000;
	nanosleep(&ts, NULL);
}

void delayMicroseconds(int us)
{
	struct timespec ts;
	ts.tv_sec = us / 1000000;
	ts.tv_nsec = us % 1000000 * 1000;
	nanosleep(&ts, NULL);
}

class
{
public:
	void begin(int bps)
	{
		//何もしない
	}
	void end()
	{
		//何もしない
	}
	int available()
	{
		return 0;
	}
	unsigned char read()
	{
		return ' ';
	}
	unsigned char peek()
	{
		return ' ';
	}
	void flush() 
	{
		//何もしない
	}
	void println(auto moji) 
	{
		std::cout << moji;
	}
	void print(auto moji) 
	{
		std::cout << moji << std::endl;
	}
	int write() 
	{
		return 0;
	}
}Serial;

#endif