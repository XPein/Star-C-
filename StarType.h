#pragma once
#ifndef __STAR_TYPE__
#define __STAR_TYPE__

class StarType //Star类中，影响星星形状的成员函数是Draw()和Remove()，我们可以利用多态把这两个函数抽象出来成为一个抽象类StarType.它的意义仅仅是定义成员函数的外观
{
public:
	virtual void Draw(int x, int y, int color) = 0;
	virtual void Remove(int x, int y) = 0;
};

#endif
