#include "StdAfx.h"
#include "P3_Test.h"

#include <iostream>

using namespace std;

int CP3_Test::iStaticTest = 0;

CP3_Test::CP3_Test(void)
{
	//iStaticTest = 0;

	prWideValue = 1024;
}


CP3_Test::~CP3_Test(void)
{
	cout << "cp3 ~" << endl;
}

void CP3_Test::setWidth(int wide){

	wideValue = wide;
	return ;
}

int CP3_Test::getWidt(){

	return wideValue;

}

void SmallCP3::setWidth(int wide){

	this->iTestThis;	 //this指针是所有成员函数的隐含参数；
	prWideValue = wide;
	return ;
}

int SmallCP3::getWidth(){

	return prWideValue;
}