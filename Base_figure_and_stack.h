#pragma once
#include <stack>
#include <list>

#define NUM_OF_RGB_PART 3
#define RGB_MIN 0
#define RGB_MAX 255

using namespace std;
using namespace System::Drawing;

struct MyPoint
{
	int X, Y;
	MyPoint(int _x, int _y) : X(_x), Y(_y) {};
	MyPoint() : X(0), Y(0) {};
};

class Base_figure
{
protected:
	MyPoint center_12;
	int radius;
	int* color_line;
	int* color_fill;
public:
	Base_figure(){};
	Base_figure(MyPoint cent, int rad, int line[NUM_OF_RGB_PART], int fill[NUM_OF_RGB_PART]);
	virtual void print(Graphics^ g);
	virtual void hide(Graphics^ g, int*);
	virtual void move(MyPoint new_cent, Graphics^ g, int* bk) {
		return;
	};
	void set_center(MyPoint new_cent) { center_12 = new_cent; };
	int get_rad() { return radius; };
	void set_rad( int _rad) {
		radius = _rad;
	};
};

class Figure_stack : public stack<Base_figure*, list<Base_figure*>>
{
public:
	Figure_stack() : stack() {};
	Figure_stack(initializer_list <Base_figure*> list);
	class Full {};
	void add(Base_figure* f);
	void show_figure(Graphics^ g);
	void delete_stack(Graphics^ g, int* bk);
	Base_figure* find_figure(int i);
	~Figure_stack();
};