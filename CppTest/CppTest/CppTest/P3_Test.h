#pragma once
class CP3_Test
{
public:
	CP3_Test(void);
	~CP3_Test(void);



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


class SmallCP3 : CP3_Test{

public:
	void setWidth(int wide);
	int  getWidth();

};