//SZN_FUNC.H
#pragma once
#ifndef SZN_FUC
#define SZN_FUC
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
//#include <Windows.h>
//#include <cstdio>
//#include <vector>
#include <array>
//#include <cctype>
#define pi 3.14159265358979
#define e 2.718281828459045
#define eps   1e-10
#define PEC "Please enter content:"
//using namespace std;
typedef struct SZN {
	//GetCharMax=126,获取输入并返回char
	inline char* f_getstr_(void) {
		char getname_[127];
		std::cin.getline(getname_, 126);
		char* result_ = new char[strlen(getname_) + 1];
		strcpy(result_, getname_);
		return result_;
	};
	//GetCharMax=126,获取带信息提示的输入,并返回char
	inline char* getstr(std::string _message) {
		//cout.clear();
		std::cout << _message;
		char* result_ = f_getstr_();
		return result_;
	};
	//清空输入流
	inline int ignore() {
		return std::cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n') ? 1 : 0;
	};
	int year = 0, month = 0, day = 0, hour = 0, minute = 0, second = 0;
	//获取系统时间
	inline SZN GetSystemTime() {
		SZN _getst;
		time_t rawtime;
		struct tm* ptminfo;
		time(&rawtime);
		ptminfo = localtime(&rawtime);
		_getst.year = ptminfo->tm_year;
		_getst.month = ptminfo->tm_mon;
		_getst.day = ptminfo->tm_mday;
		_getst.hour = ptminfo->tm_hour;
		_getst.minute = ptminfo->tm_min;
		_getst.second = ptminfo->tm_sec;
		return _getst;
	};
}SZN_;
typedef struct SZN_MATH {
	//求直线距离
	inline double distance(double x, double y, double z) {
		return pow((pow(x, 2) + pow(y, 2) + pow(z, 2)), 0.5);
	};
	//线性函数
	inline double Linear_function(double k, double b, double x) {
		return k * x + b;
	};
	//三角形面积(3边)
	inline double S_triangle_3s(double a, double b, double c) {
		double p = (a + b + c) / 2;
		return pow(p * (p - a) * (p - b) * (p - c), 0.5);
	};
	//圆面积
	inline double S_circle(double r) {
		return pi * r * r;
	};
	//球体表面积
	inline double S_globe(double r) {
		return 4 * pi * r * r;
	};
	//球体体积
	inline double V_globe(double r) {
		return 4 * pi * r * r * r / 3;
	};
	//一元二次求根,返回指向数组[4]的指针(不释放内存!)(kurzer::quadratic_释放)
	//{根1实部,根2实部,根1虚部,根2虚部}<<地址
	inline double* quadratic_function(double a, double b, double c) {
		//using namespace std;
		double delta = b * b - 4 * a * c;
		if (delta < 0) {
			double d_1 = pow(-delta, 0.5) / (2 * a);
			double d_2 = -b / (2 * a);
			double* p = new double[4]{ d_2,d_2,d_1,-d_1 };
			return p;
		}
		else if (delta <= eps) {
			double _value = -b / (2 * a);
			double* p = new double[4]{ _value,_value ,0.0,0.0 };
			return p;
		}
		else {
			double _value1 = -b + pow(delta, 0.5);
			double _value2 = -b - pow(delta, 0.5);
			double* p = new double[4]{ (_value1 / (2 * a)),(_value2 / (2 * a)),0.0,0.0 };
			return p;
		};
	};
}_SZN_MATH;
//获取时间,返回结构SZN
inline SZN GETST() {
	SZN _;
	return _.GetSystemTime();
}
class kurzer {
public:
	char* f_getstr_(void);
	int ignore();
	SZN GetSystemTime();
	char* getstr(std::string _message);
	SZN szn();
	SZN_MATH math();
	double quadratic_d(double a, double b, double c, int sub);
	double* quadratic_(double a, double b, double c);
};
//GetCharMax=126,获取输入并返回char
inline char* kurzer::f_getstr_(void) {
	char getname_[127];
	std::cin.getline(getname_, 126);
	char* result_ = new char[strlen(getname_) + 1];
	strcpy(result_, getname_);
	return result_;
};
//GetCharMax=126,获取带信息提示的输入,并返回char
inline char* kurzer::getstr(std::string _message) {
	//cout.clear();
	std::cout << _message;
	char* result_ = f_getstr_();
	return result_;
};
//清空输入流
inline int kurzer::ignore() {
	return std::cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n') ? 1 : 0;
};
//获取系统时间
inline SZN kurzer::GetSystemTime() {
	SZN _getst;
	time_t rawtime;
	struct tm* ptminfo;
	time(&rawtime);
	ptminfo = localtime(&rawtime);
	_getst.year = ptminfo->tm_year;
	_getst.month = ptminfo->tm_mon;
	_getst.day = ptminfo->tm_mday;
	_getst.hour = ptminfo->tm_hour;
	_getst.minute = ptminfo->tm_min;
	_getst.second = ptminfo->tm_sec;
	return _getst;
};
//一元二次(释放内存)
//sub{根1实部,根2实部,根1虚部,根2虚部}
inline double kurzer::quadratic_d(double a, double b, double c, int sub) {
	kurzer kur;
	double* p = kur.math().quadratic_function(a, b, c);
	double val = *(p + sub);
	delete[] p;
	return val;
};
//一元二次(不释放内存),返回*p
//p{根1实部,根2实部,根1虚部,根2虚部}
inline double* kurzer::quadratic_(double a, double b, double c) {
	kurzer kur;
	double* p = kur.math().quadratic_function(a, b, c);
	return p;
};
//链接 SZN
inline SZN kurzer::szn() {
	SZN _;
	return _;
};
//链接 math()
inline SZN_MATH kurzer::math() {
	SZN_MATH _;
	return _;
};
#endif
