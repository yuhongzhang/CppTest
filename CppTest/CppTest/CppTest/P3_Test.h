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

public://�ࡢ��Ա�����ࡢ����
	void  setWidth(int wide);
	int  getWidt();

protected://�ࡢ��Ա������
	int		prWideValue;
	int		prLenValue;
	int		prHeighValue;


private://�ࡢ��Ա
	int		wideValue;
	int		lengthValue;
	int		heightValue;

};

//��̬ʵ�ֺ���
class   polyTri : public  CP3_Test{

public:
	void   area(){

		cout << "������" << endl;
	}


};

class   polyRec : public  CP3_Test{

public:
	void   area(){
		cout << "����" << endl;
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




