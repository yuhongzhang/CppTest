// CppTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>

#include <string>

#include <iostream>
using namespace std;

#include "P3_Test.h"
/*
*����ע�ͣ�ÿһ�ж���һ��*��ͷ��
*
*/
#include <vector>


//������ϰ
void  Quote();

void  pTest(int *tmp){
 
	int a = 11;
	int b = 12;

	*tmp = a + b;

	return  ;
}


int main()
{
	printf("the world is peace!\n");
	int v1 = 1;
	int v2 = 2;
	
	cout << "the sum of" << v1
				<< "and" << v2
	 			<< "is"  << v1 + v2 << endl;

	/*vector ��ϰ  zhangyuhong_20181020*/

	vector<int>  v(5);
	//vector<string>  s(5,11);
	int sumCnt = 0;

	v[0] = 100;
	v[1] = 100;
	v[2] = 100;
	v[3] = 100;
	v[4] = 100;
	/// v[5]= 100;
	//for(int i  = 0;i < 5;i++)
	sumCnt = v.size();
	 
	cout << sumCnt << endl;

	//������ϰ
	cout << "������ϰ����" << endl;
	Quote();

	//��������η�
	cout << "��������η�private -- protected" << endl;
	CP3_Test  Test;
	Test.setWidth(999);
	int rtWide = Test.getWidt();

	cout << rtWide << "private_test";
	cout << endl;
/*
	SmallCP3  smTest;
	//smTest.setWidth(998);
	int smWide = smTest.getWidth();
	cout << smWide << "protected";
	cout << endl;
	*/

	//����
	cout << "��������" << endl;
	SmallCP3  funTest;
	funTest.print(11);
	funTest.print(11.33);
	funTest.print("zhangyuhong!");

	cout << "���������" <<endl;

	SmallCP3   operTest1;
	SmallCP3   operTest2;
	cout << "xigou2";  
	SmallCP3   operTest;

	cout << "xigou3";  
	operTest1.setWidth(11);
	operTest2.setWidth(100);
	 cout << "xigou4";  
		 
	operTest = operTest1 + operTest2;
	 cout << "����";
	cout << "operTest.prwidth" << operTest.getWidth() << endl;
	
	//�����������ͷ�˳��

	//ָ��
	cout << "ָ��ֵ����" << endl;
	int  a = 100;
	int   *iPtr = &a;
	cout << "δ����ʱ�ĵ�ַ�ǣ�" << iPtr;
	iPtr++;
	cout << "���Ӻ�ĵ�ַ�ǣ�" << iPtr << endl;

	char str[] = "glad to test something";
	char *p = str;
	p++;
	int *p1 = reinterpret_cast<int *>(p);
	p1++;
	p = reinterpret_cast<char *>(p1); 
	printf("result is %s\n", p);


	cout << "ָ������ò���������" << endl;
	int c = 10;
	pTest(&c);
	cout << "ָ������Ľ���ǣ�" << c << endl;

	char tmp[] = "zyh";

	cout << "�ַ�������" << endl;
	cout << "�ַ�����СΪ��"  << strlen(tmp) << endl;

	cout << "====��̬�ӿڲ���===="  << endl;


	CP3_Test   *polytest;
	
	polyTri  triTest;	
	polytest = &triTest; 
	polytest->area();

	polyRec  recTest;
	polytest = &recTest; 
	polytest->area();

	system("pause");
	return 0;

}

//add new info.  ---zhangyuhong_20181001

void  Quote(){

	int i = 99;
	double j = 100.0;

	int &test = i;
	double &cc = j;
	
	double  hh = 101;
	cc = hh;

	cout << i << "i";
	cout << test << "test";
	cout << j << "j";
	cout <<cc <<endl;
	 
	return ;
}
