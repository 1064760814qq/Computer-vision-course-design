#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef ����Ԫ_H_
class suhuyuan
{
	Mat image;//ͼ��
	int size=0;//���ص����
	int hight, weight;//�ߺͿ�
	Point point[10000];//���ص�����
public:
	suhuyuan(Mat img)//���캯������ʼ��ͼ��͸ߡ���
	{
		image = img(Rect(195,60,85,265));//ͼ��ü�
		hight = 0;
		weight = 0;
	}
	void work();//���⹤���ӿ�
	void showresult()//����ӿ�
	{
		cout << "��ָ���ȣ�" << hight * Pixellen<<"cm\t���:"<< weight *Pixellen<<"cm" << endl;
	}
};
#endif // !����Ԫ_H_

