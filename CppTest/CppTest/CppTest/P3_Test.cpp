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

	//this->iTestThis;	 //thisָ�������г�Ա����������������
	prWideValue = wide;
	return ;
}

//��������
void SmallCP3::print(int a)
{
	cout << "��������" << endl;
	return ;
}

void SmallCP3::print(double b)
{
	cout << "��С����" << endl;
	return ;
}

void SmallCP3::print(char *c)
{
	cout << "���ַ�����" << endl;
	return ;
}

//���������
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

	prHeighValue = 100;    //��֤˽�м̳к󱣻���ԱҲ���˽�еģ��Ӷ��޷����ʣ���Ϊ�������޷����ʸ���˽�г�Ա�ġ�����

	return ;
}
