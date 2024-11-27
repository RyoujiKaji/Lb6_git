#pragma once
#include <iostream>
#include <cmath>
#include "Base_figure_and_stack.h"
#include "Circle.h"
#include "Octagon.h"
#include "pch.h"

using namespace std;
using namespace System::Drawing;

class Complex_figure : public Base_figure
{
private:
	Circle* circle;
	Octagon* octagon;
public:
	Complex_figure(Circle* c, Octagon* oct) : circle(c), octagon(oct) {};
	void print(Graphics^ g) override {
		circle->print(g);
		octagon->print(g);
	};
	void hide(Graphics^ g, int* bk) override {
		octagon->hide(g, bk);
		circle->hide(g, bk);
	};
	void move(MyPoint new_cent, Graphics^ g, int* bk) override{
		hide(g, bk);
		circle->set_center(new_cent);
		octagon->set_center(new_cent);
		print(g);
	};
};