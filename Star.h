#pragma once
#ifndef __STAR_H__
#define __STAR_H__

#include "StarType.h"

#define SCREEN_WIDTH	1024
#define SCREEN_HEIGHT	768

class Star
{
public:
	Star() {}
	~Star() {}

	void Init();
	void Init(StarType* pStarType);   //我们重载了Star类的Init()方法，当我们要实现不同样子的星星时，就把相应的对象地址通过Init()方法传给Star类保存在m_pStarType属性中。当执行Move函数时，就会通过这个属性调用不同的方法来完成。是不是很神奇呢？
	void Move();

protected:
	void NewPos();

	double	m_x = 0;
	int		m_y;
	double	m_step;
	int		m_color;

	StarType* m_pStarType;
};

#endif
