﻿#ifndef __MAIN_TANK__
#define __MAIN_TANK__
#include <WinSock2.h>

#include <windows.h>
#include "Tank.h"

class MainTank : public Tank
{
public:
	MainTank() : Tank()
	{
		m_pos.Set(300, 300);

		this->CalculateSphere();

		m_color = YELLOW;
		m_dir = Dir::UP;
		m_step = 8;
	}

	~MainTank(){}

	void SetDir(Dir dir);
	Dir GetDir()
	{
		return m_dir;
	}

	

	void Display();
	void Move();
	void Shoot(list<Object*>& lstBullets);
	void Boom(list<Object*>& lstBombs);

	BYTE GetLife();
	void SetLife(BYTE newLife);

protected:
	void CalculateSphere();

	// 绘制坦克主体
	void DrawTankBody();

	//new added 
	BYTE life = 3;

	
};

#endif