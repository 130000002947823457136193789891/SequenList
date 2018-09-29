#include "SequenList.h"
#include <iostream>
using namespace std;

void SequenList::Initiate ()
{
	len=0;
}

int SequenList::Insert (DataType x,int i)
{
	//�����Ա�ĵ�i��Ԫ��֮ǰ����һ���µ�����Ԫ��x
	int j;
	if(len>=MAXSIZE)
	{
		cout<<"overflow!"<<endl;            //�������
		return 0;
	}
	else if((i<1)||(i>len+1))
	{
		cout<<"position is not correct!"<<endl;
		return 0;
	}
	else
	{
		for(j=len;j>=i;j--)
			data[j]=data[j-1];
		data[i-1]=x;
		len++;
		return 1;
	}
}

int SequenList::Deleted (int i)
{
	int j;
	if((i<1)||(i>len))
	{
		cout<<"position is not correct!"<<endl;
		return 0;
	}
	else
	{
		for(j=1;j<len;j++)
			data[j-1]=data[j];
		len--;
		return 1;
	}
}

int SequenList::Locate (DataType x)
{
	//����ֵΪx������Ԫ�ص�λ��ֵ
	int j=0;
	while ((j<len)&&(data[j]!=x)) j++;
	if(j<len) return j+1;
	else return 0;
}

DataType SequenList ::Get (int i)
{
	if((i<1)||(i>len))
	{
		cout<<"position is not correc!"<<endl;
		return NULL;
	}
	else return data[i-1];
}

int SequenList ::Length()
{
	return len;
}
