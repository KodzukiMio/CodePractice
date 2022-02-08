//SZN_FUNC.H
#pragma once
#ifndef SZN_FUNC_H_
#define SZN_FUNC_H_
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#define _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS
#define _Main_s int main(){
#define _Main_e system("pause");return 0;};

#ifdef ENABLE_SZN_OPE
#include <gl/glut.h>
#pragma comment(lib,"msvcrt.lib")
#pragma comment(lib,"glfw3.lib")
#pragma comment(lib,"opengl32.lib")
#include<glad.h>
#include<glfw3.h>
#endif // ENABLE_SZN_OPE

#ifdef _ENABLE_MSD
#define _ct const
#define _u using
#define _r return
#define _fr friend
#define _v void
#define _i int
#define _c char
#define _sid signed
#define _d double
#define _l long
#define _b bool
#define _f float
#define _w wchar_t
#define _un unsigned
#define _sh short
#define _ns namespace
#define _cs constexpr static
#define _st std::
#define _bs ){
#define _be };
#define _br ()
#define _brs ();
#define _brb (){
#define _s_ (*this)
#define _uns _u _ns
#define _o operator
#define __rb >>(
#define __lb <<(
#define _osr _o __rb
#define _osl _o __lb
#define _oe _o=(
#define _t template<
#define _2t _t> 
#define _tc _t class T>
#define _ttc _t typename Ty_>class TC
#define _ty <Ty_>
#define _tttc _t _ttc >
#define _tttct _t _ttc ,typename Ty >
#define _tcv _tc _v
#define _tci _tc inline
#define _tciv _tci _v
#define _si static inline
#define _siv _si _v
#define _iv inline _v
#define _def typedef
#define _sv static _v
#endif // Macro_symbol_definition

#ifdef ENABLE_ERRTYPE
namespace KUR {
	using cahr = char;
	using douebl = double;
	using douebnl = double;
	using doubel = double;
	using doeybl = double;
	using doyuebl = double;
	using flaor = float;
	using flaot = float;
	using itn = int;
}
#endif // ENABLE_ERRTYPE
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <new>
#include <locale>
#include <memory>
#include <algorithm>
#include <vector>
#include <cstring>
#include <iterator>
#include <thread>
#include <codecvt>
#include <io.h>
#include <ctime>
#include<Windows.h>
#include <tchar.h>
#include <functional>
#ifdef ENABLE_ZIP
#define Windows_ENABLE_KURZER
//Please add zip.cpp, unzip.cpp to the project directory
//请把zip.cpp和unzip.cpp添加到工程目录!!!
//https://www.codeproject.com/Articles/7530/Zip-Utils-Clean-Elegant-Simple-Cplusplus-Win
#include<Windows.h>
#include<TlHelp32.h>
#include <commctrl.h>
#include <tchar.h>
#include <stdio.h>
#include <zip/zip.h>
#include <zip/unzip.h>
#endif
#ifdef ENABLE_VOLUME
#include <windows.h> 
#include <mmdeviceapi.h> 
#include <endpointvolume.h>
#include <audioclient.h>
#endif // ENABLE_VOLUME

//#include <ctime>
//#include<bitset>
//#include <array>
//#include <cstdio>
//#include <cctype>
#ifdef ENABLE_COLOR
#define Windows_ENABLE_KURZER
#endif
#ifdef Windows_ENABLE_KURZER
#include<Windows.h>
#include<TlHelp32.h>
#endif

#ifdef _BITSET_
#include<Bitset>
#endif

#ifdef ENABLE_KEY
#include<conio.h>
#endif

#pragma warning (disable : 28183)
#pragma warning (disable : 26451)
#pragma warning (disable : 6387)
#pragma warning (disable : 4244)
#define sptr_(name,type,_Pfn)shared_ptr<type>name(_Pfn)
#define sptrn(name,type,value)sptr_(name,type,new type(value))
#define _ptrtype(_Pfn)(typeid(*_Pfn).name())
#define newptr(name,type,value) type *name=new type(value)
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#define CLICK(time) mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);Sleep(time);mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0)
#define MOUSESET(x,y) MouseMove(x,y)
#define MOUSEOFFSET(_x,_y) 	{POINT __MOUSE_POINT_POSITION;::GetCursorPos(&__MOUSE_POINT_POSITION);MOUSESET(__MOUSE_POINT_POSITION.x+_x,__MOUSE_POINT_POSITION.y+_y);}
typedef unsigned short int KCDSTR;
namespace KUR {
	const double pi = 3.14159265358979;
	const double e = 2.718281828459045;
	const double eps = 1e-10;
	typedef struct SZN {
		inline char* getstr(void) { char getname_[127]; std::cin.getline(getname_, 126); char* result_ = new char[strlen(getname_) + 1]; strcpy(result_, getname_); result_[strlen(getname_)] = '\0'; return result_; };
		inline char* getstr(_In_ std::string _message) { std::cout << _message; char* result_ = getstr(); return result_; };
		int year = 0, month = 0, day = 0, hour = 0, minute = 0, second = 0;
		inline SZN GetSystemTime() { SZN _getst; time_t rawtime; struct tm* ptminfo; time(&rawtime); ptminfo = localtime(&rawtime); _getst.year = ptminfo->tm_year; _getst.month = ptminfo->tm_mon; _getst.day = ptminfo->tm_mday; _getst.hour = ptminfo->tm_hour; _getst.minute = ptminfo->tm_min; _getst.second = ptminfo->tm_sec; return _getst; };
	}SZN_;
	template< class T_1, class T_2, class T_3 > struct T_s { T_1 i; T_2 c; T_3 d; };
	typedef struct SZN_MATH {
		inline double distance(double x, double y, double z) { return pow((pow(x, 2) + pow(y, 2) + pow(z, 2)), 0.5); };
		inline double Linear_function(double k, double b, double x) { return k * x + b; };
		inline double S_triangle_3s(double a, double b, double c) { double p = (a + b + c) / 2; return pow(p * (p - a) * (p - b) * (p - c), 0.5); };
		inline double S_circle(double r) { return pi * r * r; };
		inline double S_globe(double r) { return 4 * pi * r * r; };
		inline double V_globe(double r) { return 4 * pi * r * r * r / 3; };
		//Unary quadratic root, return array[4]
		//{root 1 real part, root 2 real part, root 1 imaginary part, root 2 imaginary part}<<address
		inline double* quadratic_function(double a, double b, double c) { double delta = b * b - 4 * a * c; if (delta < 0) { double d_1 = pow(-delta, 0.5) / (2 * a); double d_2 = -b / (2 * a); double* p = new double[4]{ d_2,d_2,d_1,-d_1 }; return p; } else if (delta <= eps) { double _value = -b / (2 * a); double* p = new double[4]{ _value,_value ,0.0,0.0 }; return p; } else { double _value1 = -b + pow(delta, 0.5); double _value2 = -b - pow(delta, 0.5); double* p = new double[4]{ (_value1 / (2 * a)),(_value2 / (2 * a)),0.0,0.0 }; return p; }; };
	}_SZN_MATH;
	inline SZN GETST() { SZN _; return _.GetSystemTime(); };
	class kurzer {
	private:
	public:
		tm* gettime();
		char* getstr(void);
		SZN GetSystemTime();
		char* getstr(std::string _message);
		SZN szn();
		SZN_MATH math();
		double quadratic(double a, double b, double c, int sub = 0);
		double* quadratic(double a, double b, double c);
		template<class T> void Swap(T& a, T& b);
		template<class T> void Swap(T* a, T* b);
		void Swap(T_s<int, char, double>& a, T_s<int, char, double>& b);
		template<class T1, class T2>  auto Types(T1 x, T2 y) ->decltype(x + y);
		template<class T> T* store(T name, int size);
		template<class T> T* store(int size, T*& p);
		kurzer() {};
		template<class T>kurzer(T _) {};
		~kurzer() {};
	};
	inline char* kurzer::getstr(void) { char getname_[127]; std::cin.getline(getname_, 126); char* result_ = new char[strlen(getname_) + 1]; strcpy(result_, getname_); result_[strlen(getname_)] = '\0'; return result_; };
	inline char* kurzer::getstr(std::string _message) { std::cout << _message; char* result_ = getstr(); return result_; };
	inline SZN kurzer::GetSystemTime() { SZN _getst; time_t rawtime; struct tm* ptminfo; time(&rawtime); ptminfo = localtime(&rawtime); _getst.year = ptminfo->tm_year; _getst.month = ptminfo->tm_mon; _getst.day = ptminfo->tm_mday; _getst.hour = ptminfo->tm_hour; _getst.minute = ptminfo->tm_min; _getst.second = ptminfo->tm_sec; return _getst; };
	//sub{root 1 real part, root 2 real part, root 1 imaginary part, root 2 imaginary part}
	inline double kurzer::quadratic(double a, double b, double c, int sub) { kurzer kur; double* p = kur.math().quadratic_function(a, b, c); double val = *(p + sub); delete[] p; return val; };
	//p{root 1 real part, root 2 real part, root 1 imaginary part, root 2 imaginary part}
	inline double* kurzer::quadratic(double a, double b, double c) { kurzer kur; double* p = kur.math().quadratic_function(a, b, c); return p; };
	inline SZN kurzer::szn() { SZN _; return _; };
	inline SZN_MATH kurzer::math() { SZN_MATH _; return _; };
	inline tm* kurzer::gettime() { time_t rawtime; time(&rawtime); struct tm* ptminfo = localtime(&rawtime); return ptminfo; };
	template<class T>inline void kurzer::Swap(T& a, T& b) { T temp = a; a = b; b = temp; };
	template<class T>inline void kurzer::Swap(T* a, T* b) { T temp = *a; *a = *b; *b = temp; };
	inline void kurzer::Swap(T_s<int, char, double>& a, T_s<int, char, double>& b) { decltype(a.i) A = a.i; decltype(a.c) B = a.c; decltype(a.d) C = a.d; a.i = b.i; a.c = b.c; a.d = b.d; b.i = A; b.c = B; b.d = C; };
	template <class T1, class T2> auto kurzer::Types(T1 x, T2 y) ->decltype(x + y) { return x + y; };
	template<class T> T* kurzer::store(int size, T*& p) { return (new T[size * sizeof(T)]); };
	void MouseMove(int x, int y) { double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1; double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1; double fx = x * (65535.0f / fScreenWidth); double fy = y * (65535.0f / fScreenHeight); mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, fx, fy, 0, 0); };
	tm TIME() { time_t now = time(0); tm* gmtm = gmtime(&now); return *gmtm; };
	wchar_t* ToWchar_N(const char* c) { size_t cSize = strlen(c) + 1; wchar_t* wc = new wchar_t[cSize]; mbstowcs(wc, c, cSize); return wc; };
	bool Divisible(unsigned long long _Val, unsigned long long _Num) { double a = (double)_Val / (double)_Num; if (a - (double)(unsigned long long)a < 1e-6) { return true; }; return false; };
	bool IsPrimeNumber(unsigned long long num) { if (num == 1 || num == 4) { return 0; }; if (num == 2 || num == 3) { return 1; }; if (num % 6 != 1 && num % 6 != 5) { return 0; }; unsigned long long tmp = (unsigned long long)sqrt(num); for (unsigned long long i = 5; i <= tmp; i += 6) { if (num % i == 0 || num % (i + 2) == 0) { return 0; }; }; return 1; };
	std::string* FastRead_N(const char* objpath) { std::ifstream fins(objpath, std::ios::binary); char c; fins >> c; if (fins.eof()) { fins.close(); return new std::string; }; fins.close(); std::ifstream fin(objpath, std::ios::binary); std::vector<char>* buf = new std::vector<char>(fin.seekg(0, std::ios::end).tellg()); fin.seekg(0, std::ios::beg).read(&(*buf)[0], static_cast<std::streamsize>(buf->size())); fin.close(); std::string* str = new std::string(); (*str).assign(buf->begin(), buf->end()); delete buf; return str; };
	template<class Ry_ = void, class Ty_> void for_each(Ty_* First_, Ty_* Last_, Ry_(*_Pfn)(Ty_ Val_)) { while (First_ != Last_) { (*_Pfn)(*First_++); }; };
	std::string Subreplace(std::string resource_str, std::string sub_str, std::string new_str) { std::string dst_str = resource_str; std::string::size_type pos = 0; while ((pos = dst_str.find(sub_str)) != std::string::npos) { dst_str.replace(pos, sub_str.length(), new_str); }; return dst_str; };
	std::vector<std::string> split(const std::string& str, const std::string& delim) { std::vector<std::string> res; if ("" == str) return res; char* strs = new char[str.length() + 1]; strcpy(strs, str.c_str()); char* d = new char[delim.length() + 1]; strcpy(d, delim.c_str()); char* p = strtok(strs, d); while (p) { std::string s = p; res.push_back(s); p = strtok(NULL, d); }; delete[] d; delete p; return res; };
	TCHAR* WstrToTchar(std::wstring& ws) { return (TCHAR*)(&ws[0]); };
	std::string FileName(const char* path) { std::string P = path; auto v = split(P, "\\"); P = v[v.size() - 1]; return P; };
	inline std::wstring ToWstring_(const std::string& input) { std::wstring_convert<std::codecvt_utf8<wchar_t>> converter; return converter.from_bytes(input); };
	inline std::string ToString_(const std::wstring& input) { std::wstring_convert<std::codecvt_utf8<wchar_t>> converter; return converter.to_bytes(input); };
	void GetFileNames(std::string path, std::vector<std::string>& files) { using namespace std; intptr_t hFile = 0; struct _finddata_t fileinfo; std::string p; if ((hFile = _findfirst(p.assign(path).append("\\*").c_str(), &fileinfo)) != -1) { do { if ((fileinfo.attrib & _A_SUBDIR)) { if (strcmp(fileinfo.name, ".") != 0 && strcmp(fileinfo.name, "..") != 0)GetFileNames(p.assign(path).append("\\").append(fileinfo.name), files); } else { files.push_back(p.assign(path).append("\\").append(fileinfo.name)); }; } while (_findnext(hFile, &fileinfo) == 0); _findclose(hFile); }; };
	std::string GetStringByWchar(const WCHAR* wszString) { std::string strString; if (wszString != NULL) { std::wstring ws(wszString); strString.assign(ws.begin(), ws.end()); }; return strString; };
	std::wstring GetWStringByChar(const char* szString) { std::wstring wstrString; if (szString != NULL) { std::string str(szString); wstrString.assign(str.begin(), str.end()); }; return wstrString; };
	std::string CODE(char* path) { std::ifstream fin(path, std::ios::binary); unsigned char  s2; fin.read((char*)&s2, sizeof(s2)); int p = s2 << 8; fin.read((char*)&s2, sizeof(s2)); p += s2; std::string code; switch (p) { case 0xfffe:code = "Unicode"; break; case 0xfeff:code = "Unicode big endian"; break; case 0xefbb:code = "UTF-8"; break; default:code = "ANSI"; }; fin.close(); return code; };



																																																										 class Object;
																																																										 template<class T> class Stack;
																																																										 class Number;
																																																										 class Kstring;
																																																										 template<class T> class Kdata;
																																																										 class Object {
																																																										 public:
																																																											 int Alias = 0;
																																																											 template<class T> friend class Stack;
																																																											 friend class Kstring;
																																																											 friend class Number;
																																																											 friend class KdataRead;
																																																											 template<class T> friend class Kdata;
																																																											 Object() {};
																																																											 static short int GetBits() { return sizeof(int*) * 8; };
																																																											 Object* this_ = this;
																																																											 virtual Object& Eval(Object& obj) { return *this; };
																																																											 virtual std::string ToString() { return this->ToString(); };
																																																											 bool Equals(Object& obj) { return this->GetHashCode() == obj.GetHashCode(); };
																																																											 size_t GetHashCode() { std::hash<int> hash_int; return hash_int._Do_hash((int)(int64_t)this); };
																																																											 Object& ValueOf() { return *this; };
																																																										 };
																																																										 //template<class T>class Knode :public Object {//TODO
																																																										 //public:
																																																											// Knode(T& item_) :item(item_) {};
																																																											// Knode() {};
																																																											// Knode& operator=(Knode& kn) { this->item = kn.item; p_next = kn.p_next; return *this; };
																																																											// T& item;
																																																											// Knode* p_next;
																																																										 //};
																																																										 //template<class T>class Kiterator :public Object {//TODO
																																																										 //public:
																																																											// Knode<T>* pt = nullptr;
																																																											// Kiterator() {};
																																																											// Kiterator(Knode<T>* p) :pt(p) {};
																																																											// T& operator*() { return pt->item; };
																																																											// Kiterator& operator++() { pt = pt->p_next; return *this; };//++i
																																																											// Kiterator operator++(int) { Kiterator temp = *this; pt = pt->p_next; return temp; };//i++
																																																											// Kiterator& operator=(Kiterator& ki) { this->pt = ki.pt; return *this; };
																																																											// bool operator==(Kiterator& ki) { return this->pt == ki.pt; };
																																																											// bool operator!=(Kiterator& ki) { return !this->operator==(ki); };
																																																											// Kiterator find(Kiterator& head, Kiterator& end, T& t) { Kiterator start = head; for (; start != end; ++start) { if (*start == t) { return start; }; }; return 0; };
																																																										 //};
																																																										 class Kstring :public Object {
																																																										 private:
																																																											 char* data = NULL;
																																																											 size_t len = 0;
																																																										 public:
																																																											 template<class T> friend class Stack;
																																																											 friend class Number;
																																																											 template<class T> friend class Kdata;
																																																											 friend class KdataRead;
																																																											 ~Kstring() { delete[] data; len = 0; };
																																																											 Kstring(const char* str = NULL) { if (!str) { len = 0; data = new char[1]; *data = '\0'; } else { len = strlen(str); data = new char[len + 1]; strcpy(data, str); }; };
																																																											 Kstring(const Kstring& str) { len = str.size(); data = new char[len + 1]; strcpy(data, str.str()); };
																																																											 Kstring operator+(const Kstring& str)const { Kstring newstr; newstr.len = len + str.size(); newstr.data = new char[newstr.len + 1]; strcpy(newstr.data, data); strcat(newstr.data, str.data); return newstr; };
																																																											 Kstring& operator=(const Kstring& str) { if (this == &str) { return*this; }; delete[] data; len = str.len; data = new char[len + 1]; strcpy(data, str.str()); return*this; };
																																																											 Kstring& operator=(Kstring&& str)noexcept { if (this == &str) { return *this; }; delete this->data; this->data = str.data; str.data = nullptr; return *this; };
																																																											 Kstring& operator+=(const Kstring& str) { *this = *this + str; return *this; };
																																																											 bool operator==(const Kstring& str) const { if (len != str.len) { return false; } else { return strcmp(data, str.data) ? false : true; }; };
																																																											 char& operator[](int n) const { if (n >= int(len)) { return data[len - 1]; } else if (n < 0 && (-n) <= int(len)) { return data[int(len) + n]; } else if ((-n) > int(len)) { return data[0]; } else { return data[n]; }; };
																																																											 size_t size() const { return len; };
																																																											 const char* str() const { return data; };
																																																											 char* address() { return data; };
																																																											 friend Kstring& operator>>(const char* c, Kstring& str) { Kstring newstr = c; str += newstr; return str; };
																																																											 friend Kstring& operator<<(Kstring& str, const char* c) { c >> str; return str; };
																																																											 friend Kstring& operator<<(char* c, Kstring& str) { strcpy(c, str.str()); return str; };
																																																											 friend Kstring& operator>>(Kstring& str, char* c) { c << str; return str; };
																																																											 Kstring& operator>>(std::string& str) { str = this->str(); return *this; };
																																																											 Kstring& operator<<(std::string& str) { *this = str.c_str(); return *this; };
																																																											 friend std::ostream& operator<<(std::ostream& os, Kstring& str) { os << str.data; return os; };
																																																											 friend std::ostream& operator>>(Kstring& str, std::ostream& os) { os << str; };
																																																											 static void* operator new(std::size_t t) { Kstring* p = ::new Kstring(); return p; };
																																																											 char* Data() { return data; };
																																																											 size_t to_find(const Kstring& str) { std::string st = (*this).str(); return st.find(str.str()); };
																																																											 std::string string_() { std::string str = (*this).str(); return str; };
																																																											 std::string ToString() { return this->string_(); };
																																																											 static void _ToLower(char* s) { size_t len = strlen(s); for (size_t i = 0; i < len; i++) { if (s[i] >= 'A' && s[i] <= 'Z') { s[i] = tolower(s[i]); } } };
																																																											 static void _ToUpper(char* s) { size_t len = strlen(s); for (size_t i = 0; i < len; i++) { if (s[i] >= 'a' && s[i] <= 'z') { s[i] = toupper(s[i]); } } };
																																																											 Kstring& ToLower() { _ToLower(data); return *this; };
																																																											 Kstring& ToUpper() { _ToUpper(data); return *this; };
																																																											 friend Kstring& operator<<(Kstring& ks, void(*p)(Kstring&)) { (*p)(ks); return ks; };
																																																											 char* begin() { return data; };
																																																											 char* end() { return data + len; };
																																																											 template<class T_>friend T_ operator<<(Kstring& s, T_(*_Pfn)(Kstring&)) { return (*_Pfn)(s); };
																																																										 };
																																																										 template<class T = Kstring> class Stack :public Object {
																																																										 private:
																																																											 int top;
																																																											 int _max;
																																																											 T* p_data = NULL;
																																																											 T* p_revise = NULL;
																																																											 bool t = true;
																																																											 T* pop() { T* item; if (top > 0) { item = (p_data + (--top)); t = true; return item; } else { t = false; return NULL; }; };
																																																										 public:
																																																											 friend class Kstring;
																																																											 friend class Number;
																																																											 friend class KdataRead;
																																																											 template<class T> class Kdata;
																																																											 operator int() const { return int(*p_data); };
																																																											 operator double() const { return double(*p_data); };
																																																											 operator char() const { return char(*p_data); };
																																																											 operator bool() const { return bool(*p_data); };
																																																											 operator float() const { return float(*p_data); };
																																																											 friend Stack& operator>>(Stack& s, Stack& s_) { if (!s.isempty()) { s_.push(*s.pop()); } return s_; };
																																																											 friend Stack& operator<<(Stack& s, Stack& s_) { s_ >> s; return s; };
																																																											 friend Stack& operator<<(Stack& s, T t) { s.push(t); return s; };
																																																											 friend Stack& operator>>(T t, Stack& s) { s << t; return s; };
																																																											 friend Stack& operator>>(Stack& s, T& t) { s.pop(t); return s; };
																																																											 friend Stack& operator<<(T& t, Stack& s) { s >> t; return s; };
																																																											 friend std::ostream& operator<<(std::ostream& os, Stack& s) { T _; s.pop(_); os << _; return os; };
																																																											 friend std::ostream& operator>>(Stack& s, std::ostream& os) { os << s; return os; };
																																																											 Stack(const int max = 256) { top = 0; _max = max; p_data = new T[_max]; };
																																																											 Stack(const std::initializer_list<T>& v) { top = 0; _max = (int)v.size(); p_data = new T[_max]; for (T item : v) { *this << item; }; };
																																																											 ~Stack() { delete[] p_data; p_data = NULL; };
																																																											 bool isempty() { t = true; return top == 0; };
																																																											 bool isfull() { t = true; return top == _max; };
																																																											 bool push(const T item) { if (top < _max) { *(p_data + (top++)) = item; t = true; return true; } else { t = false; return false; }; };
																																																											 bool pop(T& item) { if (top > 0) { item = *(p_data + (--top)); t = true; return true; } else { t = false; return false; }; };
																																																											 void Delete_Create() { delete[] p_data; top = 0; p_data = new T[_max]; t = true; };
																																																											 void Delete_Create(const int len) { delete[] p_data; top = 0; p_data = new T[len]; t = true; };
																																																											 bool state() { return t; };
																																																											 T* operator()(int n) { { if (n < 0 && -n < top) { p_revise = (p_data + top + n); } else if (n < top && n>0) { p_revise = (p_data + n); } else if (n > 0 && n > top) { p_revise = (p_data + top); } else if (n < 0 && -n > top || n == 0 || n < 0 && -n == top) { p_revise = p_data; }; }; return  p_revise; };
																																																											 T operator[](int n) { return check(n); };
																																																											 T check(const int n) { return *(*this)(n); };
																																																											 T* check_(const int n) { return (*this)(n); };
																																																											 T* address() { return p_data; };
																																																											 void pop_() { --top; };
																																																											 int length() { return top; };
																																																											 int max_length() { return _max; };
																																																											 void flip() { KUR::Stack<T>t(_max); int top_ = top; int i = 0; while (i < top) { t << *(*this)(i); ++i; }; this->top = 0; while (!t.isempty()) { t >> *this; }; top = top_; };
																																																											 void replace(const T& from, const T& to) { for (int i = 0; i < top; ++i) { if ((*this)[i] == from) { *(*this)(i) = to; }; }; };
																																																											 T sum() { T sum = 0;  for (T i = 0; i < top; ++i) { sum = sum + *(*this)(i); }; return sum; };
																																																											 void to_string(Stack<std::string>& str) { Kstring ks; std::string st; while (!(*this).isempty() && !str.isfull()) { *this >> ks; ks >> st; st >> str; }; };
																																																											 void to_kstring(Stack<Kstring>& kstr) { Kstring ks; std::string st; while (!(*this).isempty() && !kstr.isfull()) { *this >> st; ks << st; ks >> kstr; }; };
																																																											 static size_t TotalCharLength(Stack<Kstring>& kstr) { size_t t = 0; for (int i = 0; i < kstr.length(); i++) { t += kstr.check(i).size(); }return t; };
																																																											 static size_t TotalCharLength(Stack<std::string>& str) { size_t t = 0; for (int i = 0; i < str.length(); i++) { t += str.check(i).size(); }return t; };
																																																											 void print() { while (!this->isempty()) { std::cout << *this << std::endl; }; };
																																																											 static std::string AsString(Stack<Kstring>& kstr) { std::string str; Kstring ks; kstr.flip(); while (!kstr.isempty()) { ks << kstr; str += ks.str(); }return str; };
																																																											 static KUR::Stack<size_t>* FindLineAsStack(std::string str, std::string sub, int Stacklen = 1024) { using namespace std; size_t len = str.length(); size_t index = 0; size_t count = 0; KUR::Stack<size_t>* res = new KUR::Stack<size_t>(Stacklen); while ((index = str.find(sub, index)) < len) { count++; index++; *res << index; }return res; };
																																																											 static Stack<std::string>* SubLineAsString(Kstring& res, std::string sub_1, std::string sub_2, int Stacklen = 1024) { using namespace std; auto s1 = KUR::Stack<int>::FindLineAsStack(res.Data(), sub_1, Stacklen); auto s2 = KUR::Stack<int>::FindLineAsStack(res.Data(), sub_2, Stacklen); auto length = min(s1->length(), s2->length()); int length_ = (int)sub_1.size(); KUR::Stack<std::string>* S = new KUR::Stack<std::string>(length); size_t t1 = 0, t2 = 0; std::string s = res.string_(); std::string s_; s1->flip(); s2->flip(); for (int i = 0; i < length; i++) { t1 << *s1; t1 += length_; t2 << *s2; s_ = s.substr(t1 - 1, t2 - t1); *S << s_; }return S; };
																																																											 std::string ToString() { std::string str = "null"; return str; };
																																																											 void DeleteEachPoint() { while (!this->isempty()) { delete* (p_data + (--top)); }; };
																																																											 friend Stack& operator<<(Stack& s, void(*_Pfn)(Stack<T>&)) { (*_Pfn)(s); return s; };
																																																											 template<class T_>friend T_ operator<<(Stack& s, T_(*_Pfn)(Stack<T>&)) { return (*_Pfn)(s); };
																																																											 T operator[](T(*_Pfn)(Stack<T>*)) { return (*_Pfn)(this); };
																																																											 void operator--() { top--; };
																																																											 T* begin() { return p_data; };
																																																											 T* end() { return p_data + top; };
																																																											 T* Final() { return p_data + _max; };
																																																											 void set(T* pdata = 0, T* previse = 0, int top_ = 0) { if (pdata != 0) { p_data = pdata; }; if (previse != 0) { previse = p_revise; }; if (top_ != 0) { top = top_ >= _max ? _max : top_; }; };
																																																											 friend Stack& operator>>(std::istream& ist, Stack& s) { T t; std::cin >> t; s.push(t); return s; };
																																																											 void SetFromCin(int start, int end_) { end_ = (end_ >= _max ? _max : end_); for (int i = 0; i < end_; i++) { std::cin >> *check_(i); }; };
																																																										 };
																																																										 template<class T>void space(Stack<T>& s) { s.push(" "); };
																																																										 void space(Kstring& ks) { ks << " "; };
																																																										 void endl(Kstring& ks) { ks << "\n"; };
																																																										 template<class T>T end(Stack<T>* s) { return (*s)[(*s).length() - 1]; };
																																																										 class Number :public Object {
																																																										 public:
																																																											 template<class T> friend class Stack;
																																																											 friend class Kstring;
																																																											 friend class KdataRead;
																																																											 template<class T> friend class Kdata;
																																																											 Number(double d, bool modes = 0) :data(d) {};
																																																											 double data = 0;
																																																											 constexpr static double E = 2.220446049250313e-16;
																																																											 constexpr static double LN2 = 0.6931471805599453;
																																																											 constexpr static double LN10 = 2.302585092994046;
																																																											 constexpr static double LOG2E = 1.4426950408889634;
																																																											 constexpr static double LOG10E = 0.4342944819032518;
																																																											 constexpr static double PI = 3.141592653589793;
																																																											 constexpr static double SQRT1_2 = 0.7071067811865476;
																																																											 constexpr static double SQRT2 = 1.4142135623730951;
																																																											 operator double() const { return double(data); };
																																																											 std::string ToString() { return std::to_string(data); };
																																																											 Number& operator=(Number& obj) { this->data = obj.data; return *this; };
																																																											 Number operator+(Number& obj) { return (Number)(this->data + obj.data); };
																																																											 Number operator-(Number& obj) { return (Number)(this->data - obj.data); };
																																																											 Number operator*(Number& obj) { return (Number)(this->data * obj.data); };
																																																											 Number operator/(Number& obj) { return (Number)(this->data / obj.data); };
																																																											 friend std::ostream& operator<<(std::ostream& os, Number& obj) { os << obj.data; return os; };
																																																											 static size_t FindAllCount(std::string str, std::string sub) { size_t count = 0; size_t index = 0; size_t len = str.length(); while ((index = str.find(sub, index)) < len) { count++; index++; }; return count; };
																																																										 };
																																																										 class KMiscellaneous {
																																																										 public:
																																																											 static inline std::wstring WI(std::string address) { std::locale chs("chs"); std::wifstream ifs(address.c_str()); ifs.imbue(chs); std::wstring line, lines; while (std::getline(ifs, line)) { lines = lines + line + L"\n"; }; return lines; };
																																																											 static inline std::string ReadData(std::string address) { std::ifstream ifs(address.c_str()); std::string line, lines; while (std::getline(ifs, line)) { lines = lines + line + "\n"; }; return lines; };
																																																											 static inline std::vector<std::string>* ReadData_vector_N(std::string address) { std::vector<std::string>* vec = new std::vector<std::string>; std::ifstream ifs(address.c_str()); std::string line, lines; while (std::getline(ifs, line)) { vec->push_back(line); }; return vec; };
																																																											 static inline void SaveData(std::string address, std::string& Source) { std::fstream F_(address.c_str(), std::ios::out); F_.imbue((std::locale)"chs"); F_ << Source; F_.close(); };
																																																											 static inline void WO(std::string address, std::wstring& ws) { std::wfstream F_(address.c_str(), std::ios::out); F_.imbue((std::locale)"chs"); F_ << ws; F_.close(); };
																																																											 static int GetProgramBits() { return sizeof(int*) * 8; };
																																																											 static inline void w_cout(std::wstring& s) { std::locale chs("chs"); std::wcout.imbue(chs); std::wcout << s; };
																																																											 static inline void w_cout(const wchar_t& s) { std::locale chs("chs"); std::wcout.imbue(chs); std::wcout << s; };
																																																											 static inline std::string* encryption(const std::string key, const std::wstring& wstr) { using namespace std; const int max = 1024; const char* p = key.c_str(); const int p_len = (int)key.length(); const unsigned int MAX_ui = 4294967295; unsigned int seed = 0, seed_max = 0; for (int i = 0; i < p_len && seed_max < MAX_ui; i++) { seed = seed_max; seed_max += int(*(p + i)); }; srand(seed); wstring ws = wstr + L"   "; const wchar_t* ws_p = ws.c_str(); int ws_len = (int)(ws.length() - 2); int* ws_seed = new int[ws_len]; int* ws_int = new int[ws_len]; int* ws_res = new int[ws_len]; int* ws_res_len = new int[ws_len]; string keylen, ws_result; for (int i = 0; i < ws_len; i++) { ws_int[i] = int(ws_p[i]); ws_seed[i] = rand(); ws_res[i] = ws_int[i] + ws_seed[i]; ws_res_len[i] = (int)to_string(ws_res[i]).length(); keylen += to_string(ws_res_len[i]); ws_result += to_string(ws_res[i]); }; string key_ = "K" + keylen; string* resu = new string(ws_result + key_); delete[] ws_seed; delete[] ws_int; delete[] ws_res; delete[] ws_res_len; return resu; }; static inline std::wstring* decrypt(const std::string key, const std::string& lines) { using namespace std; const int max = 1024; const char* p = key.c_str(); const int p_len = (int)key.length(); const unsigned int MAX_ui = 4294967295; unsigned int seed = 0, seed_max = 0; for (int i = 0; i < p_len && seed_max < MAX_ui; i++) { seed = seed_max; seed_max += int(*(p + i)); }; srand(seed); const char* ch = lines.c_str(); const int lens = (int)(lines.length() - 2); KUR::Stack<char> C(lens); int lens_ = 0; for (int i = lens; i >= 0 && !(*(ch + i) == 'K'); i--) { lens_ = i - 1; *(ch + i) >> C; }; KUR::Stack<int> I(lens); char* ch_ = new char[lens_]; *ch_ = '1'; for (int i = 0; i < lens_; i++) { *(ch_ + i) = *(ch + i); }; int count = 0, Num, num; char k; char* NUM = new char[6]; int rand_ = 0; NUM[5] = '\0'; while (!C.isempty()) { k << C; Num = int(k) - 48; num = 0; for (int i = 0; i < 5; ++i) { NUM[i] = '\0'; }; for (int i = count; i < count + Num; ++i) { NUM[num] = *(ch_ + i); num++; }; count += Num; rand_ = rand(); I << (atoi(NUM) - rand_); }; KUR::Stack<wchar_t> W(lens); wchar_t W_; int w; while (!I.isempty()) { w << I; W_ = wchar_t(w); W << W_; }; wstring ws; wchar_t wt; while (!W.isempty()) { wt << W; ws += wt; }; delete[] ch_; delete[] NUM; wstring* ws_ = new wstring; *ws_ = ws; return ws_; };
																																																										 };
																																																										 template<class T = Kstring> class Kdata :public Object {
																																																										 private:
																																																											 void Start(Kstring key) { using namespace std; size_t sub1 = Source.to_find("["); size_t sub2 = Source.to_find("]"); std::string str_ = Source.str(); Kstring ks = str_.substr(sub1, sub2 - sub1).c_str(); auto str = Stack<>::SubLineAsString(ks, "{", "}", length); sub = new Stack<int>(str->length()); std::string s; while (!str->isempty()) { str->pop(s); (*sub) << atoi(s.c_str()); }; sub->flip(); size_t fir = Source.to_find("%"); size_t fir1 = Source.to_find("]\""); size_t end = Source.to_find("\"\""); name = Source.ToString().substr(fir + 1, sub1 - fir - 1).c_str(); Source = Source.ToString().substr(fir1 + 2, end - fir1 - 2).c_str(); using namespace KUR; wstring* ws = KMiscellaneous::decrypt(key.str(), Source.str()); Source = ToString_(*ws).c_str(); };
																																																											 int id;
																																																										 public:
																																																											 int length;
																																																											 Kstring Source;
																																																											 Kstring name;
																																																											 int ID() { return id; };
																																																											 Kdata(T& source, const int len, const int id_, Kstring key) { id = id_; length = len; Source = source; Start(key); };
																																																											 Stack<int>* sub;
																																																											 ~Kdata() { delete sub; };
																																																										 };
																																																										 static inline float Q_rsqrt(float number) { float x2 = number * 0.5F, y = number; const float threehalfs = 1.5F; long i = *(long*)&y; i = 0x5f3759df - (i >> 1); y = *(float*)&i; y = y * (threehalfs - (x2 * y * y)); return y; };
#ifdef _BITSET_
																																																										 template<class T = int> inline void cout_bit(T& t) { std::cout << std::bitset<sizeof(t) * 8>(t) << t; };
#endif // _BITSET_
#ifdef ENABLE_KEY
																																																										 class Miniwin {
																																																										 public:
																																																											 static char DetectKbhit() { while (!kbhit()) { return getch(); }; return 0; };
																																																											 static void Refresh() { system("cls"); };
																																																										 };
#endif // ENABLE_KEY
																																																										 class Version :public Object {
																																																										 public:
																																																											 std::string ver;
																																																											 Version(std::string ver_) :ver(ver_) {};
																																																											 std::string des;
																																																										 };
																																																										 class Log :public Object {
																																																										 public:
																																																										 };
																																																										 class KFILE {
																																																										 private:
																																																											 static void error(int mode) { if (mode == 1) { std::cout << "\n无法打开文件或文件路径错误!!!\n"; system("pause"); exit(1); }; };
																																																										 public:
																																																											 static inline void FileCpoy(std::string from, std::string to) { using namespace std; fstream file; file.open(from.c_str(), ios::binary | ios::in | ios::ate); int length = (int)file.tellg(); char* Data = new char[length + 1]; file.seekg(0); file.read(Data, length); fstream file2; file2.open(to.c_str(), ios::binary | ios::out); file2.write(Data, length); };
																																																											 static inline KUR::Stack<KUR::Kstring>* FileReadAsStack(const std::string res, int mode = 0) { using namespace std; const int max = 1024; char line[max]; FILE* fp1 = fopen(res.c_str(), "r"); if (fp1 == nullptr) { error(mode); if (mode == 0) { return  new KUR::Stack<KUR::Kstring>(); }; }; fseek(fp1, 0, 2); long readbuffer_ = ftell(fp1); rewind(fp1); int readbuffer = readbuffer_ / max + 1; KUR::Stack<KUR::Kstring>* S = new KUR::Stack<KUR::Kstring>(readbuffer); while (fgets(line, max, fp1) != NULL) { *S << line; }; return S; };
																																																											 //mode
																																																											 static inline std::string FileReadAsString(const std::string res, int mode = 0) { KUR::Stack<KUR::Kstring>* K = FileReadAsStack(res, mode); std::string ress = KUR::Stack<std::string>::AsString(*K); delete K; return ress; };
																																																										 };
																																																										 //The memory recovery is defective!!!
																																																										 class KdataRead :public Object {
																																																										 private:
																																																											 KUR::Kstring err;
																																																											 int klen;
																																																											 void Create() { using namespace std; int id = basic_data->length() - 1; std::string str; KUR::Kstring ks; while (!basic_data->isempty()) { basic_data->pop(str); ks = str.c_str(); auto o = (new KUR::Kdata<KUR::Kstring>(ks, klen, id, keys)); (*data) << o; id--; }; };
																																																											 KUR::Stack<std::string>* basic_data;
																																																											 KUR::Stack<int>* ptr;
																																																											 KUR::Kstring ktr;
																																																											 int length;
																																																											 int this_len;
																																																										 public:
																																																											 KUR::Kstring keys;
																																																											 template<class T> friend class KUR::Stack;
																																																											 friend class KUR::Kstring;
																																																											 friend class KUR::Number;
																																																											 KUR::Stack<KUR::Kdata<KUR::Kstring>*>* data;
																																																											 KUR::Kstring address;
																																																											 int GetMaxLength() { return length; };
																																																											 int GetLen() { return this_len; };
																																																											 KdataRead(_In_ std::string res, _In_ KUR::Kstring key, __in_opt int kdatalen = 16, __in_opt int addlength = 256) { keys = key; address = res.c_str(); klen = kdatalen; KUR::Kstring data_ = KUR::KMiscellaneous::ReadData(res).c_str(); int Stacklen = (int)KUR::Number::FindAllCount(data_.str(), ","); this_len = Stacklen; Stacklen += addlength;  basic_data = KUR::Stack<>::SubLineAsString(data_, "@$", "$@", Stacklen); data = new KUR::Stack<Kdata<KUR::Kstring>*>(Stacklen >= basic_data->length() ? Stacklen : basic_data->length()); Create(); delete basic_data; length = Stacklen; };
																																																											 ~KdataRead() { data->DeleteEachPoint(); };
																																																											 KUR::Kdata<KUR::Kstring>& Check(KUR::Kstring& ks, const int err = 0) { int len = data->length(); for (int i = 0; i < len; i++) { if (ks == (*data)[i]->name) { return *((*data)[i]); }; }; return *((*data)[err]); };
																																																											 KUR::Kdata<KUR::Kstring>& Check(const int id_) { return *((*data)[this_len - id_ - 1]); };
																																																											 KUR::Kdata<KUR::Kstring>& operator[](KUR::Kstring& t) { return Check(t); };
																																																											 KUR::Kdata<KUR::Kstring>& operator[](const char* t) { ktr = t; return Check(ktr); };
																																																											 KUR::Kdata<KUR::Kstring>& operator[](const int id_) { return Check(id_); };
																																																											 KUR::Kdata<KUR::Kstring>& operator[](Kdata<KUR::Kstring>& (*_Pfn)(KdataRead*)) { return (*_Pfn)(this); };
																																																											 void Add(KUR::Kstring name_, KUR::Stack<int>& sub_, KUR::Kstring& Source_) { KUR::Kstring ks = "@$%"; ks = ks + name_ + StackIntAsString(sub_) + "\"" + KUR::KMiscellaneous::encryption(keys.str(), KUR::ToWstring_(Source_.str()))->c_str() + "\"\"$@,"; (*data) << (new KUR::Kdata<KUR::Kstring>(ks, klen, this_len + 1, keys)); this_len++; };
																																																											 KUR::Kstring StackIntAsString(Stack<int>& S) { int len = S.length(); int res; KUR::Kstring ks_ = "["; KUR::Kstring ks = ""; for (int i = 0; i < len; i++) { res << S; ks = ks + "{" + std::to_string(res).c_str() + "}"; }; return (ks_ + ks + "]"); };
																																																											 void Save() { std::fstream F_(address.str(), std::ios::out); for (int i = 0; i < this_len; i++) { F_ << "@$%" << (*this)[i].name << StackIntAsString(*(*this)[i].sub).str() << "\"" << *KUR::KMiscellaneous::encryption(keys.str(), KUR::ToWstring_((*this)[i].Source.str())) << "\"\"$@,\n"; }; F_.close(); };
																																																										 };
																																																										 KUR::Kdata<KUR::Kstring>& end(KUR::KdataRead* kr) { using namespace KUR; return kr->Check(kr->GetLen()); };

																																																										 //The parameter T is the first parameter of the function (class usage)
																																																										 template<class Cl_Pn, class T>class Bind2c :public Object {
																																																										 public:
																																																											 T val_;
																																																											 Cl_Pn* clp_;
																																																											 explicit Bind2c(Cl_Pn& clp, const T t) :val_(t) { clp_ = &clp; };
																																																											 template<class C> void operator()(const C t_) { return (*clp_)(val_, t_); };
																																																										 };

																																																										 template<class _T, class _Bind>void for_each_bind(_T _Beg, _T _End, _Bind& _bind) { while (_Beg != _End) { _bind(*_Beg); _Beg++; }; };

																																																										 //The parameter T is the first parameter of the function (funciton usage)
																																																										 template<class Cl_Pn, class T, typename...Args>class Bindf :public Object {
																																																										 public:
																																																											 T val_;
																																																											 Cl_Pn(*clpn)(Args...args);
																																																											 explicit Bindf(Cl_Pn(*cl_pn)(Args...args), const T t) :val_(t) { clpn = cl_pn; };
																																																											 template<typename...Args_>Cl_Pn operator()(const Args_&...args) { return (*clpn)(val_, args...); };
																																																											 template<class Ty_> Cl_Pn operator()(const Ty_ t_) { return (*clpn)(val_, t_); };
																																																										 };
																																																										 /*template<typename T>void show(T t) { std::cout << t; };
																																																										 template<typename T, typename...Args>void show(T t, const Args&...args) { std::cout << t; KUR::show(args...); };*/

#ifdef Windows_ENABLE_KURZER
#ifndef USE_ASCII
																																																										 //Get process handle by process name (with suffix .exe)
																																																										 HANDLE GetProcessHandle(int nID) { return OpenProcess(PROCESS_ALL_ACCESS, FALSE, nID); };
																																																										 HANDLE GetProcessHandle(LPCWSTR lpName) { HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); if (INVALID_HANDLE_VALUE == hSnapshot) { return NULL; }; PROCESSENTRY32 pe = { sizeof(pe) }; BOOL fOk; for (fOk = Process32First(hSnapshot, &pe); fOk; fOk = Process32Next(hSnapshot, &pe)) { if (!_tcsicmp(pe.szExeFile, lpName)) { CloseHandle(hSnapshot); return GetProcessHandle(pe.th32ProcessID); }; }; return NULL; };
#endif // !USE_ASCII




																																																										 namespace ConsoleColor {
																																																											 class Color {
																																																											 public:
																																																												 Color(int r, int g, int b) :r(r), g(g), b(b) {};
																																																												 int r = 0;
																																																												 int g = 0;
																																																												 int b = 0;
																																																											 };
																																																											 class Colors {
																																																											 public:
																																																												 Color CUSTOMIZE = Color(0, 0, 0);
																																																												 Color Default_ft = Color(204, 204, 204);
																																																												 Color Default_bg = Color(12, 12, 12);
																																																												 Color black = Color(0, 0, 0);
																																																												 Color blue = Color(0, 55, 218);
																																																												 Color green = Color(19, 161, 14);
																																																												 Color red = Color(197, 15, 31);
																																																												 Color purple = Color(136, 23, 152);
																																																												 Color yellow = Color(193, 156, 0);
																																																												 Color white = Default_ft;
																																																												 Color grey = Color(118, 118, 118);
																																																												 Color light_blue = Color(97, 214, 214);
																																																												 Color light_green = Color(22, 198, 22);
																																																												 Color light_red = Color(231, 72, 86);
																																																												 Color lavender = Color(180, 0, 158);
																																																												 Color light_yellow = Color(249, 241, 165);
																																																												 Color bright_white = Color(255, 255, 255);
																																																											 };
																																																											 void rgb_init() { HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);	DWORD dwInMode, dwOutMode; GetConsoleMode(hIn, &dwInMode); GetConsoleMode(hOut, &dwOutMode); dwInMode |= 0x0200;	dwOutMode |= 0x0004; SetConsoleMode(hIn, dwInMode); SetConsoleMode(hOut, dwOutMode); };
																																																											 void rgb_set(int wr, int wg, int wb, int br, int bg, int bb) { printf("\033[38;2;%d;%d;%dm\033[48;2;%d;%d;%dm", wr, wg, wb, br, bg, bb); };
																																																											 void rgb_rec() { rgb_set(204, 204, 204, 12, 12, 12); };
																																																											 void rgb_out(const char* ch, Color& w, Color& b) { rgb_set(w.r, w.g, w.b, b.r, b.g, b.b); std::cout << ch; rgb_rec(); };
																																																											 void rgb_out(const char* ch, Color& w) { Color col(12, 12, 12); rgb_out(ch, w, col); };
																																																											 void rgb_out(const char* ch, int wr, int wg, int wb, int br, int bg, int bb) { rgb_set(wr, wg, wb, br, bg, bb); std::cout << ch; rgb_rec(); };
																																																											 void rgb_out(const char* ch, int wr, int wg, int wb) { Color col(wr, wg, wb); rgb_out(ch, col); };
#ifdef USE_ASCII
																																																											 void set_title(const char* ch) { SetConsoleTitle(LPCSTR(ch)); };
#else
																																																											 void set_title(const char* ch) { wchar_t* wch = ToWchar_N(ch); SetConsoleTitle(LPCWSTR(wch)); delete wch; };
#endif
#define K_COLOR using namespace KUR::ConsoleColor;KUR::ConsoleColor::rgb_init();KUR::ConsoleColor::Colors K_color;
																																																										 };
#define KUR_MAXPATH 512
																																																										 class Kwin :public Object {
																																																										 public:
#ifdef USE_ASCII
																																																											 static void SetAutoRun(const char* ch) { HKEY hKey; LPCTSTR lpRun = "Software\\Microsoft\\Windows\\CurrentVersion\\Run"; long lRet = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_WRITE, &hKey); if (lRet == ERROR_SUCCESS) { char pFileName[MAX_PATH] = { 0 }; DWORD dwRet = GetModuleFileName(NULL, pFileName, MAX_PATH); lRet = RegSetValueEx(hKey, ch, 0, REG_SZ, (BYTE*)pFileName, dwRet); RegCloseKey(hKey); }; };
#endif // USE_ASCII
																																																										 };
#endif // Windows_ENABLE_KURZER
#ifdef ENABLE_ZIP
#define Windows_ENABLE_KURZER
																																																										 void CZIP(std::vector<std::string>files, const char* topath) { std::string Src = files[0]; std::string Src1 = Src; auto name = split(Src, "\\"); Src = name[name.size() - 1]; std::wstring ws; ws.assign(Src.begin(), Src.end()); auto wtc = ToWchar_N(topath); std::wstring ws1 = wtc; HZIP hz = CreateZip(WstrToTchar(ws1), 0); ws1.assign(Src1.begin(), Src1.end()); for (size_t i = 0; i < files.size(); i++) { auto file = files[i]; auto Name = ToWstring_(FileName(file.c_str())); std::wstring ws = ToWstring_(file); ZipAdd(hz, WstrToTchar(Name), WstrToTchar(ws)); }; CloseZip(hz); delete wtc; };
																																																										 void UZIP(const char* src) { auto wcs = ToWchar_N(src); HZIP hz = OpenZip(wcs, 0); ZIPENTRY ze; GetZipItem(hz, -1, &ze); int numitems = ze.index; for (int zi = 0; zi < numitems; zi++) { ZIPENTRY ze; GetZipItem(hz, zi, &ze); UnzipItem(hz, zi, ze.name); }; CloseZip(hz); delete wcs; };
																																																										 //void EncryptedCompressedFile(char* path, std::string& password) {
																																																										 //	std::string Pname = path;
																																																										 //	std::vector<std::string>files;
																																																										 //	GetFileNames(Pname, files);
																																																										 //	std::vector<std::string>PATH;
																																																										 //	PATH.assign(files.begin(), files.end());
																																																										 //	if (files.size() == 0) { files.push_back(Pname); };
																																																										 //	if (PATH.size() == 0) { PATH.push_back(Pname); };
																																																										 //	CZIP(files, (Pname + ".kdata").c_str());


																																																										 //	std::string *enc = KUR::KMiscellaneous::encryption(password, value);
																																																										 //	KUR::KMiscellaneous::SaveData(Pname + ".kdata", *enc); delete enc;

																																																										 //	files.clear();
																																																										 //	files.push_back(Pname + ".kdata");
																																																										 //	CZIP(files, (Pname + ".pkg").c_str());
																																																										 //	remove((Pname + ".kdata").c_str());
																																																										 //};
																																																										 //void DecrypyEncryptedCompressedFile(char* path, std::string& password) {
																																																										 //	auto name = FileName(path);
																																																										 //	if (name.find(".pkg") == -1) { return; };
																																																										 //	UZIP(path);
																																																										 //	std::string Path = path;
																																																										 //	std::string Path1 = Path.substr(0, Path.find_last_of(".pkg") - 3);//无后缀
																																																										 //	Path = Path1 + ".kdata";//..kdata
																																																										 //	auto data = FastRead_N(Path.c_str());
																																																										 //	auto dec = KUR::KMiscellaneous::decrypt(password, *data); delete data;
																																																										 //	Path1 += ".zip";
																																																										 //	KUR::KMiscellaneous::WO(Path1, *dec);
																																																										 //	remove(Path.c_str());
																																																										 //};
#endif
#ifdef ENABLE_VOLUME
#define VOLUME_START CoInitialize(0)
#define SET_VOLUME(x) KUR::SetVolum(x)
#define GET_VOLUME KUR::GetVolume()
#define VOLUME_END CoUninitialize()
//Set the system volume (volume range: 0~100, mute when the volume is 0)
																																																										 bool SetVolum(int volume) { bool ret = false; HRESULT hr; IMMDeviceEnumerator* pDeviceEnumerator = 0; IMMDevice* pDevice = 0; IAudioEndpointVolume* pAudioEndpointVolume = 0; IAudioClient* pAudioClient = 0; try { hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), (void**)&pDeviceEnumerator); if (FAILED(hr)) throw "CoCreateInstance"; hr = pDeviceEnumerator->GetDefaultAudioEndpoint(eRender, eMultimedia, &pDevice); if (FAILED(hr)) throw "GetDefaultAudioEndpoint"; hr = pDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_ALL, NULL, (void**)&pAudioEndpointVolume); if (FAILED(hr)) throw "pDevice->Active"; hr = pDevice->Activate(__uuidof(IAudioClient), CLSCTX_ALL, NULL, (void**)&pAudioClient); if (FAILED(hr)) throw "pDevice->Active"; float fVolume; fVolume = volume / 100.0f; hr = pAudioEndpointVolume->SetMasterVolumeLevelScalar(fVolume, &GUID_NULL); if (FAILED(hr)) throw "SetMasterVolumeLevelScalar"; pAudioClient->Release(); pAudioEndpointVolume->Release(); pDevice->Release(); pDeviceEnumerator->Release(); ret = true; } catch (...) { if (pAudioClient) pAudioClient->Release(); if (pAudioEndpointVolume) pAudioEndpointVolume->Release(); if (pDevice) pDevice->Release(); if (pDeviceEnumerator) pDeviceEnumerator->Release(); throw; }; return ret; };
																																																										 //Get system volume
																																																										 int GetVolume() { int volumeValue = 0; HRESULT hr; IMMDeviceEnumerator* pDeviceEnumerator = 0; IMMDevice* pDevice = 0; IAudioEndpointVolume* pAudioEndpointVolume = 0; IAudioClient* pAudioClient = 0; try { hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), (void**)&pDeviceEnumerator); if (FAILED(hr)) { throw "CoCreateInstance"; }; hr = pDeviceEnumerator->GetDefaultAudioEndpoint(eRender, eMultimedia, &pDevice); if (FAILED(hr)) { throw "GetDefaultAudioEndpoint"; }; hr = pDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_ALL, NULL, (void**)&pAudioEndpointVolume); if (FAILED(hr)) { throw "pDevice->Active"; }; hr = pDevice->Activate(__uuidof(IAudioClient), CLSCTX_ALL, NULL, (void**)&pAudioClient); if (FAILED(hr)) { throw "pDevice->Active"; }; float fVolume; hr = pAudioEndpointVolume->GetMasterVolumeLevelScalar(&fVolume); if (FAILED(hr)) { throw "SetMasterVolumeLevelScalar"; }; pAudioClient->Release(); pAudioEndpointVolume->Release(); pDevice->Release(); pDeviceEnumerator->Release(); volumeValue = fVolume * 100; } catch (...) { if (pAudioClient) pAudioClient->Release(); if (pAudioEndpointVolume) pAudioEndpointVolume->Release(); if (pDevice) pDevice->Release(); if (pDeviceEnumerator) pDeviceEnumerator->Release(); throw; }; return volumeValue; };
																																																										 //buf is the first address pointer of the audio data block that needs to adjust the volume, size is the length
																																																										 //uRepeat is the number of repetitions, usually set to 1, and vol is the gain multiple, which can be less than 1
																																																										 void RaisePCMVolume(char* buf, UINT32 size, UINT32 uRepeat, double vol) { if (!size) { return; }; for (int i = 0; i < size; i += 2) { short wData; wData = MAKEWORD(buf[i], buf[i + 1]); long dwData = wData; for (int j = 0; j < uRepeat; j++) { dwData = dwData * vol; if (dwData < -0x8000) { dwData = -0x8000; } else if (dwData > 0x7FFF) { dwData = 0x7FFF; }; }; wData = LOWORD(dwData); buf[i] = LOBYTE(wData); buf[i + 1] = HIBYTE(wData); }; };
																																																										 void setvol(int vol) { VOLUME_START; SET_VOLUME(vol); VOLUME_END; };
#endif // ENABLE_VOLUME																																															

};
#define _Kstack KUR::Stack
#define _Kstring KUR::Kstring
#define _KR KUR::
#endif