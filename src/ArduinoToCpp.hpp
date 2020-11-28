//参考:http://www.musashinodenpa.com/arduino/ref/

#ifndef OUTPUT

#pragma region include
#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include <chrono>
#include <random>
#include <vector>
#include <algorithm>
#pragma endregion 

#pragma region define

//PinType
#define OUTPUT 1
#define INPUT 0

//DataType
#define HIGH 1
#define LOW 0

//typedef
typedef bool boolean;
typedef unsigned char byte;
typedef unsigned int word;

#pragma endregion

#pragma region valiables
std::chrono::system_clock::time_point start_time;
int pinmode[14] = { OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT, OUTPUT };
int pinstate[14] = { HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH };
#pragma endregion

#pragma region main
void setup();
void loop();

int main()
{
	srand(0);
	start_time = std::chrono::system_clock::now();
	setup();
	while (1)
	{
		loop();
	}

	return 0;
}
#pragma endregion

#pragma region functions

#pragma region デジタル入出力関数
void pinMode(int pin, int mode)
{
	if (pin <= 0 && pin <= 13) 
	{
		pinmode[pin] = mode;
	}
}

void digitalWrite(int pin, int value)
{
	if (pinmode[pin] == INPUT)
	{
		fprintf(stderr, "pinModeがINPUTですが、実行します。");
	}
	pinstate[pin] = value;
}

int digitalRead(int pin)
{
	if (pinmode[pin] == OUTPUT) 
	{
		fprintf(stderr, "pinModeがOUTPUTですが、実行します。");
	}
	return pinstate[pin];
}
#pragma endregion

#pragma region アナログ入出力関数

void analogWrite(int pin, int value)
{
	//何もしない
}

int analogRead(int pin)
{
	//値は0~1023 最大値を返す
	return 1023;
}

void analogReference(int type) 
{
	//何もしない
}

void analogReadResolutions(int bits)
{
	//何もしない
}

void analogWriteResolutions(int bits)
{
	//何もしない
}

#pragma endregion

#pragma region 乱数に関する関数

void randomSeed(long seed)
{
	srand(seed);
}

long random(int min, int max) 
{
	return rand() % std::abs(max - min) + std::min(min, max);
}
long random(int max) 
{
	return random(0, max);
}

#pragma endregion

#pragma region 時間に関する関数
unsigned long millis() 
{
	return (long)std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - start_time).count();
}

unsigned long micros() 
{
	return (long)std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now() - start_time).count();
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
#pragma endregion

#pragma region シリアル通信
class
{
public:
	void begin(int speed)
	{
		Speed = speed;
	}
	void end()
	{
		Speed = 9600;
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
private:
	int Speed = 9600;
}Serial;
#pragma endregion

#endif