#pragma once
class CP3_Test
{
public:
	CP3_Test(void);
	~CP3_Test(void);



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


class SmallCP3 : CP3_Test{

public:
	void setWidth(int wide);
	int  getWidth();

};