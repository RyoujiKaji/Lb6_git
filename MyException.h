#pragma once
#include <iostream>

using namespace std;

class MyException
{
private:
	string my_msg;
public:
	MyException(string _message) : my_msg{ _message } {};
	string get_my_msg() { return my_msg; };
};