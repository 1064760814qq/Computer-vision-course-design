#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef ����_H_
class gaoya
{
	Mat image;//ͼ��
	int width;
public:
	gaoya(Mat im)
	{
		image = im;
		width = 0;
	}
	void work();//���⹤���ӿ�
	void show()//����ӿ�
	{
		cout << "���󳤶ȣ�" <<width * Pixellen << "cm\t"  << endl;
	}
};
#endif // !����_H_
