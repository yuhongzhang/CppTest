// CppTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>


#include <string>

#include <iostream>
using namespace std;
 
/*
*多行注释，每一行都以一个*开头；
*
*/
#include <vector>


int main()
{
	printf("the world is peace!\n");
	int v1 = 1;
	int v2 = 2;
	
	cout << "the sum of" << v1
				<< "and" << v2
	 			<< "is"  << v1 + v2 << endl;

	/*vector 练习  zhangyuhong_20181020*/

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
	system("pause");
	return 0;

}

//add new info.  ---zhangyuhong_20181001
