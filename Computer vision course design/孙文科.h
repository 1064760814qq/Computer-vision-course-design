#pragma once
#include"Head.h"
using namespace std;
using namespace cv;
#ifndef ���Ŀ�_H_
class sunwenke
{
	Mat image;//ͼ��
	int size = 0;//���ص����
	int Hight, Weight;//�ߺͿ�
	Point RectPoint;
	Point point[40000];//���ص�����
public:
	sunwenke(Mat img)//���캯������ʼ��ͼ��͸ߡ���
	{
		RectPoint=Point(150, 218);
		image = img(Rect(380,330,RectPoint.x,RectPoint.y));//ͼ��ü�
		Hight = 0;
		Weight = 0;
	}
	void work();//���⹤���ӿ�
	void showresult()//����ӿ�
	{
		cout << "��Ĵָ���ȣ�" << Hight * Pixellen << "cm\t���:" << Weight * Pixellen << "cm" << endl;
	}
};
#endif // !���Ŀ�_H_
