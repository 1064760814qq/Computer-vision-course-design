#pragma once

#ifndef �Ʋʶ�_H_
#define �Ʋʶ�_H_
#include"Head.h"
using namespace std;
using namespace cv;

class yancaidong{
public:
	yancaidong(Mat img){
		image = img(Rect(286, 123, 120, 257));
		hight = 0;
		weight = 0;
	}
	void work();
	void showresult() {
		cout << "ʳָ���ȣ�" << hight * Pixellen << "cm\t���:" << weight * Pixellen << "cm" << endl;
	}
private:
	Mat image;
	int size = 0;
	int hight, weight;
	Point point[10000];
};


#endif // �Ʋʶ�_H_

