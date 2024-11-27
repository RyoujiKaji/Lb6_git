#pragma once
#include <iostream>
#include <cmath>
#include "Base_figure_and_stack.h"
#include "pch.h"


using namespace std;
using namespace System::Drawing;

class Circle :public Base_figure
{
public:
	Circle(MyPoint cent, int rad, int line[], int fill[]) :Base_figure(cent, rad, line, fill) {};
};