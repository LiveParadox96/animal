#pragma once
#pragma execution_character_set("utf-8")
#include <windows.h>
using namespace std;

class Snake {
private: double weight; 
		 double length; 
	     int age;

		 double prev_weigth = -1.0;
		 double prev_length = -1.0;

public: 
	Snake(double initWeight, double initLength, int initAge)
	: weight(initWeight), length(initLength), age(initAge) {}

	  void printInfo() {
		  cout << "Текущая информация о змее:" << endl;
		  if (prev_weigth != -1) {
			  //SetConsoleTextAttribute(hConsole, 10);
			  cout << "- Вес: " << weight << " кг(" << "+" << (weight - prev_weigth) << " кг)" << endl;
		  } else {
			  cout << "- Вес: " << weight << " кг" << endl;
		  };
		  if (prev_length != -1) {
			  //SetConsoleTextAttribute(hConsole, 10);
			  cout << "- Длина: " << length << " см(" << "+" << (length - prev_length) << " см)" << endl;
		  }else {
			  cout << "- Длина: " << length << " см" << endl;
		  };
		  cout << "- Возраст: " << age << " лет" << endl;
	  };
	  void habbyBirthday() {
		  prev_weigth = weight;
		  prev_length = length;
		  age++;
		  const double length_increment = 0.5;
		  const double weigth_increment = 0.4;
		  length += length_increment;
		  weight += weigth_increment;
	  };
};