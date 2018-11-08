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

	//this->iTestThis;	 //this指针是所有成员函数的隐含参数；
	prWideValue = wide;
	return ;
}

//函数重载
void SmallCP3::print(int a)
{
	cout << "是整数！" << endl;
	return ;
}

void SmallCP3::print(double b)
{
	cout << "是小数！" << endl;
	return ;
}

void SmallCP3::print(char *c)
{
	cout << "是字符串！" << endl;
	return ;
}

//运算符重载
SmallCP3 SmallCP3:: operator + (const SmallCP3 & dd){
	SmallCP3   smTest;
	 
	smTest.prLenValue = this->prLenValue + dd.prLenValue;
	smTest.prWideValue = this->prWideValue + dd.prWideValue;
	smTest.prHeighValue = this->prHeighValue + dd.prHeighValue;
	 
	return smTest;

}


int SmallCP3::getWidth(){

	return prWideValue;
}

void TestCP3::prTest(){

	prHeighValue = 100;    //验证私有继承后保护成员也变成私有的，从而无法访问（因为子类是无法访问父类私有成员的。）！

	return ;
}
