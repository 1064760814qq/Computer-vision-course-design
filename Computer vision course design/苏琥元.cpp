#include "����Ԫ.h"
//��������
static bool Compare(int a, int b)
{
	return a > b;
}
//Ѱ��x���ϵ����ص��x���겢�������
//[param in]Point *p�����ص�����
//[param in]size �����ص����
static int findX(Point* p,int size)
{
	int x[3000];
	int min;
	for (int i = 0; i < size; i++)
	{
		x[i] = p[i].x;
	}
	min = x[0];
	for (int i = 1; i < size; i++)
	{
		if (x[i] < min&&x[i]!=0)min = x[i];
	}
	sort(x, x + size, Compare);
	return x[0] - min;
}
//Ѱ��y���ϵ����ص��y���겢�������
//[param in]Point *p�����ص�����
//[param in]size �����ص����
static int findY(Point* p, int size)
{
	int x[3000];
	int min;
	for (int i = 0; i < size; i++)
	{
		x[i] = p[i].y;
	}
	min = x[0];
	for (int i = 1; i < size; i++)
	{
		if (x[i] < min && x[i] != 0)min = x[i];
	}
	sort(x, x + size, Compare);
	return x[0] - min;
}

void suhuyuan::work()
{
	Mat dst, final;
	cvtColor(image, dst, COLOR_BGR2GRAY);//��ͼ��ת��Ϊ��ɫ
	blur(dst, dst, Size(3, 3));//�˲�
	Canny(dst, final, 80, 160, 3);//Canny��Ե���

	//findContours����
	vector<vector<Point>> Contours;//��Ե���꼯��
	vector<Vec4i> Hierarchy;
	findContours(final, Contours, Hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
	//Mat drawing = Mat::zeros(final.size(), CV_8UC3);
	//for (int i = 0; i < Contours.size(); i++)
	//{
	//	Scalar color = Scalar(255,255,255);//����ֵ
	//	drawContours(drawing, Contours, 2, color, 3, 8, Hierarchy, 0, Point());//������Ե
	//}

	int flag=0;
	for (int i = 0; i < Contours.size(); i++)
	{
		if (Contours[i].size() > size) { size = Contours[i].size(); flag = i; }//��ȡ����Ҫ�ı�Ե����
	}
	for (int i = 0; i < size; i++) 
	{ 
		point[i] = Contours[flag][i];//����Ե���ص�洢
	}
	//���ص㴦��
	 weight= findX(point,size);
	 hight= findY(point, size);
}

