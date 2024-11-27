#pragma once
#include <iostream>
#include <cmath>
#include "Base_figure_and_stack.h"
#include "pch.h"


#define NUM_OF_ANGLES 8
#define PI 3.1415926535897932384626433832795028841971693993751058209

using namespace std;
using namespace System::Drawing;

class Octagon : public Base_figure
{
public:
	Octagon(MyPoint cent, int rad, int line[], int fill[]) : Base_figure(cent, rad, line, fill) {};
	void print(Graphics^ g) override {
		MyPoint ver[NUM_OF_ANGLES]{};
		int X = 0, Y = 0;
		for (int i = 0; i < NUM_OF_ANGLES; i++)
		{
			X = center_12.X + radius * cos(float(i) * PI / 4);
			Y = center_12.Y + radius * sin(float(i) * PI / 4);
			ver[i] = MyPoint(X, Y);
		}
		Pen^ _pen = gcnew Pen(Color::FromArgb(color_line[0], color_line[1], color_line[2]));
		g->DrawLine(_pen, Point(ver[0].X, ver[0].Y), Point(ver[1].X, ver[1].Y));
		g->DrawLine(_pen, Point(ver[1].X, ver[1].Y), Point(ver[2].X, ver[2].Y));
		g->DrawLine(_pen, Point(ver[2].X, ver[2].Y), Point(ver[3].X, ver[3].Y));
		g->DrawLine(_pen, Point(ver[3].X, ver[3].Y), Point(ver[4].X, ver[4].Y));
		g->DrawLine(_pen, Point(ver[4].X, ver[4].Y), Point(ver[5].X, ver[5].Y));
		g->DrawLine(_pen, Point(ver[5].X, ver[5].Y), Point(ver[6].X, ver[6].Y));
		g->DrawLine(_pen, Point(ver[6].X, ver[6].Y), Point(ver[7].X, ver[7].Y));
		g->DrawLine(_pen, Point(ver[7].X, ver[7].Y), Point(ver[0].X, ver[0].Y));
	};
	void hide(Graphics^ g, int* bk) override {
		MyPoint ver[NUM_OF_ANGLES]{};
		int X = 0, Y = 0;
		for (int i = 0; i < NUM_OF_ANGLES; i++)
		{
			X = center_12.X + radius * cos(float(i) * PI / 4);
			Y = center_12.Y + radius * sin(float(i) * PI / 4);
			ver[i] = MyPoint(X, Y);
		}
		Pen^ _pen = gcnew Pen(Color::FromArgb(bk[0], bk[1], bk[2]));
		g->DrawLine(_pen, Point(ver[0].X, ver[0].Y), Point(ver[1].X, ver[1].Y));
		g->DrawLine(_pen, Point(ver[1].X, ver[1].Y), Point(ver[2].X, ver[2].Y));
		g->DrawLine(_pen, Point(ver[2].X, ver[2].Y), Point(ver[3].X, ver[3].Y));
		g->DrawLine(_pen, Point(ver[3].X, ver[3].Y), Point(ver[4].X, ver[4].Y));
		g->DrawLine(_pen, Point(ver[4].X, ver[4].Y), Point(ver[5].X, ver[5].Y));
		g->DrawLine(_pen, Point(ver[5].X, ver[5].Y), Point(ver[6].X, ver[6].Y));
		g->DrawLine(_pen, Point(ver[6].X, ver[6].Y), Point(ver[7].X, ver[7].Y));
		g->DrawLine(_pen, Point(ver[7].X, ver[7].Y), Point(ver[0].X, ver[0].Y));
	};
};
