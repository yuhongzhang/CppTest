#include "StdAfx.h"
#include "P3_Test.h"


CP3_Test::CP3_Test(void)
{

	prWideValue = 1024;
}


CP3_Test::~CP3_Test(void)
{
}

void CP3_Test::setWidth(int wide){

	wideValue = wide;
	return ;
}

int CP3_Test::getWidt(){

	return wideValue;

}

void SmallCP3::setWidth(int wide){

	prWideValue = wide;
	return ;
}

int SmallCP3::getWidth(){

	return prWideValue;
}