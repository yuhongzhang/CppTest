#pragma once


#include <iostream>

using namespace std;


class CP3_Test
{
public:
	CP3_Test(void);
	~CP3_Test(void);

	static int		iStaticTest;

//protected:
	 virtual void  area(){
		cout << "parent!!!" << endl;
	}

public://类、友员、子类、对象
	void  setWidth(int wide);
	int  getWidt();

protected://类、友员、子类
	int		prWideValue;
	int		prLenValue;
	int		prHeighValue;


private://类、友员
	int		wideValue;
	int		lengthValue;
	int		heightValue;

};

//多态实现函数
class   polyTri : public  CP3_Test{

public:
	void   area(){

		cout << "三角形" << endl;
	}


};

class   polyRec : public  CP3_Test{

public:
	void   area(){
		cout << "矩形" << endl;
	}

};


class SmallCP3 :public CP3_Test{

public:
	void setWidth(int wide);
	int  getWidth();

private:
	int  iTestThis;

public:
	void print(int a);

	void print(double b);

	void print(char *c);

	SmallCP3 operator + (const SmallCP3 & dd);

};


class TestCP3 : SmallCP3{

public:
	void  prTest();

};




