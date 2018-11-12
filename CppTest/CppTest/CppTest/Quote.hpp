#include "stdafx.h"

#include <iostream>
using namespace std;

//add new info.  ---zhangyuhong_20181001

class aabb{

public:
    static	void Quote();

	 const static  int a = 888;

	static  void  fc(){

		cout << "static fuc" << endl;
		return ;
	}
};

static int   statcTest = 99;


/*
void aabb::Quote(){

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

*/