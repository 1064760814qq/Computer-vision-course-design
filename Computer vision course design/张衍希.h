#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef ����ϣ_H_
class zhangyanxi
{
	Mat image;//ͼ��
	int size = 0;//���ص����
	int weight;//�ߺͿ�
	Point point[10000];//���ص�����
public:
	zhangyanxi(Mat img)//���캯������ʼ��ͼ��͸ߡ���
	{
		image = img(Rect(36, 390, 330, 10));//ͼ��ü�
		weight = 0;
	}
	void worker();//���⹤���ӿ�
	void Print()//����ӿ�
	{
		cout << "���ƿ�ȣ�"<< weight * Pixellen << "cm" << endl;
	}
};
#endif // !����ϣ_H_
