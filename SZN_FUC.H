//SZN_FUNC.H
#pragma once
#ifndef SZN_FUNC_H_
#define SZN_FUNC_H_
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <new>
//#include <array>
//#include <Windows.h>
//#include <cstdio>
//#include <vector>
//#include <cctype>
#define pi 3.14159265358979
#define e 2.718281828459045
#define eps   1e-10
#define PEC "Please enter content:"
namespace KUR {
	//using namespace std;
	typedef struct SZN {
		//GetCharMax=126,获取输入并返回char
		inline char* getstr(void) {
			char getname_[127];
			std::cin.getline(getname_, 126);
			char* result_ = new char[strlen(getname_) + 1];
			strcpy(result_, getname_);
			result_[strlen(getname_)] = '\0';
			return result_;
		};
		//GetCharMax=126,获取带信息提示的输入,并返回char
		inline char* getstr(std::string _message) {
			//cout.clear();
			std::cout << _message;
			char* result_ = getstr();
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
	template<class T_1, class T_2, class T_3> struct T_s {
		T_1 i; T_2 c; T_3 d;
	};
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
		SZN _; return _.GetSystemTime();
	}
	class kurzer {
	private:
	public:
		tm* gettime();
		char* getstr(void);
		int ignore();
		SZN GetSystemTime();
		char* getstr(std::string _message);
		SZN szn();
		SZN_MATH math();
		double quadratic(double a, double b, double c, int sub = 0);
		double* quadratic(double a, double b, double c);
		template <class T> void Swap(T& a, T& b);
		template <class T> void Swap(T* a, T* b);
		void Swap(T_s<int, char, double>& a, T_s<int, char, double>& b);
		template<class T1, class T2>  auto Types(T1 x, T2 y) ->decltype(x + y);
		template<class T> T* store(T name, int size);
		template<class T> T* store(int size, T*& p);
		kurzer() {};
		template<class T> kurzer(T _) {};
		~kurzer() {};
	};
	//栈,默认长度256;
	//空栈时不能使用: std::cout << Stack; 和 variable = XXX.pop();
	//建议使用XXX.pop(variable);
	//DC() 删除并创建一个同类型的栈
	template<class T>class Stack {
	private:
		int top;
		int _max;
		T* p_data = NULL;
		bool t = true;
	public:
		operator int() const { return int(*p_data); };
		operator double() const { return double(*p_data); };
		operator char() const { return char(*p_data); };
		operator bool() const { return bool(*p_data); };
		operator float() const { return float(*p_data); };
		friend Stack& operator>>(Stack& s, Stack& s_) { s_.push(*s.pop()); return s_; };
		friend Stack& operator<<(Stack& s, Stack& s_) { s.push(*s_.pop()); return s; };
		friend Stack& operator<<(Stack& s, T t) { s.push(t); return s; };
		friend Stack& operator>>(T t, Stack& s) { s.push(t); return s; };
		friend Stack& operator>>(Stack& s, T& t) { s.pop(t); return s; };
		friend Stack& operator<<(T& t, Stack& s) { s.pop(t); return s; };
		friend Stack& operator<<(std::ostream& os, Stack& s) { T _; s.pop(_); os << _; return s; };
		friend Stack& operator>>(Stack& s, std::ostream& os) { T _; s.pop(_); os << _; return s; };
		Stack(int max = 256) { top = 0; _max = max; p_data = new T[_max]; };
		~Stack() { delete[] p_data; p_data = NULL; };
		bool isempty()const { t = true; return top == 0; };
		bool isfull() const { t = true; return top == _max; };
		bool push(const T item) { if (top < _max) { *(p_data + (top++)) = item; t = true; return true; } else { t = false; return false; }; };
		bool pop(T& item) { if (top > 0) { item = *(p_data + (--top)); t = true; return true; } else { t = false; return false; }; };
		T* pop() { T* item = NULL; if (top > 0) { item = (p_data + (--top)); t = true; return item; } else { t = false; return NULL; }; };
		void DC() { delete[] p_data; top = 0; p_data = new T[_max]; t = true; };
		bool check() { return t; };
	};
	//GetCharMax=126,获取输入并返回char
	inline char* kurzer::getstr(void) {
		char getname_[127];
		std::cin.getline(getname_, 126);
		char* result_ = new char[strlen(getname_) + 1];
		strcpy(result_, getname_);
		result_[strlen(getname_)] = '\0';
		return result_;
	};
	//GetCharMax=126,获取带信息提示的输入,并返回char
	inline char* kurzer::getstr(std::string _message) {
		//cout.clear();
		std::cout << _message;
		char* result_ = getstr();
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
	inline double kurzer::quadratic(double a, double b, double c, int sub) {
		kurzer kur;
		double* p = kur.math().quadratic_function(a, b, c);
		double val = *(p + sub);
		delete[] p;
		return val;
	};
	//一元二次(不释放内存)
	//p{根1实部,根2实部,根1虚部,根2虚部}
	inline double* kurzer::quadratic(double a, double b, double c) {
		kurzer kur;
		double* p = kur.math().quadratic_function(a, b, c);
		return p;
	};
	//链接 SZN
	inline SZN kurzer::szn() {
		SZN _; return _;
	};
	//链接 math()
	inline SZN_MATH kurzer::math() {
		SZN_MATH _; return _;
	};
	inline tm* kurzer::gettime() {
		time_t rawtime;
		time(&rawtime);
		struct tm* ptminfo = localtime(&rawtime);
		return ptminfo;
	};
	template <class T> inline void kurzer::Swap(T& a, T& b) {
		T temp = a; a = b; b = temp;
	};
	template <class T> inline void kurzer::Swap(T* a, T* b) {
		T temp = *a; *a = *b; *b = temp;
	};
	inline void kurzer::Swap(T_s<int, char, double>& a, T_s<int, char, double>& b) {
		decltype(a.i) A = a.i; decltype(a.c) B = a.c; decltype(a.d) C = a.d;
		a.i = b.i; a.c = b.c; a.d = b.d; b.i = A; b.c = B; b.d = C;
	};
	template <class T1, class T2> auto kurzer::Types(T1 x, T2 y) ->decltype(x + y) {
		return x + y;
	};
	template<class T> T* kurzer::store(T name, int size) {
		T* p = new (name)T[size * sizeof(T)];
		return p;
	};
	template<class T> T* kurzer::store(int size, T*& p) {
		p = new T[size * sizeof(T)];
		return p;
	};
};
#endif