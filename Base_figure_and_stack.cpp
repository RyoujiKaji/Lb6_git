#include <iostream>
#include <cmath>
#include <stack>
#include <list>
#include "pch.h"
#include "Base_figure_and_stack.h"

using namespace std;
using namespace System::Drawing;


Base_figure::Base_figure(MyPoint cent, int rad, int line[NUM_OF_RGB_PART], int fill[NUM_OF_RGB_PART])
{
	center_12.X = cent.X;
	center_12.Y = cent.Y;
	radius = rad;
	color_line = line;
	color_fill = fill;
}

void Base_figure::hide(Graphics^ g, int bk[])
{
	Pen^ _pen = gcnew Pen(Color::FromArgb(bk[0], bk[1], bk[2]));
	SolidBrush^ _brush = gcnew SolidBrush(Color::FromArgb(bk[0],bk[1], bk[2]));
	g->DrawEllipse(_pen, center_12.X - radius, center_12.Y - radius, 2 * radius, 2 * radius);
	g->FillEllipse(_brush, center_12.X - radius, center_12.Y - radius, 2 * radius, 2 * radius);
}

void Base_figure::print(Graphics^ g) {

	Pen^ _pen = gcnew Pen(Color::FromArgb(color_line[0], color_line[1], color_line[2]));
	SolidBrush^ _brush = gcnew SolidBrush(Color::FromArgb(color_fill[0], color_fill[1], color_fill[2]));
	g->DrawEllipse(_pen, center_12.X - radius, center_12.Y - radius, 2 * radius, 2 * radius);
	g->FillEllipse(_brush, center_12.X - radius, center_12.Y - radius, 2 * radius, 2 * radius);
}

Figure_stack::Figure_stack(initializer_list <Base_figure*> list)
{
	for (auto val : list)
	{
		add(val);
	}
}

Base_figure* Figure_stack::find_figure(int i)
{
	int cur = 0;
	for (auto val : c)
	{
		if (cur == i) {
			return val;
		}
		cur++;
	}
}

void Figure_stack::add(Base_figure* f)
{
	c.push_back(f);
}

void Figure_stack::show_figure(Graphics^ g)
{
	for (auto i : c)
	{
		i->print(g);
	}
}

void Figure_stack::delete_stack(Graphics^ g, int* bk)
{
	while (!c.empty())
	{
		top()->hide(g, bk);
		pop();
	}
}

Figure_stack::~Figure_stack()
{
	while (!c.empty())
	{
		pop();
	}
}