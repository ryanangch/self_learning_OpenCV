// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "opencv2\highgui\highgui.hpp"
#include "iostream"

using namespace std;
using namespace cv;


int main()
{
	Mat img(650, 600, CV_16UC3, Scalar(0, 50000, 50000)); 
	//create an image ( 3 channels, 16 bit image depth, 650 high, 600 wide, (0, 50000, 50000) assigned for Blue, Green and Red plane respectively. )

	vector<int> compression_params;
	compression_params.push_back(CV_IMWRITE_JPEG_QUALITY);
	compression_params.push_back(98);

	namedWindow("MyWindow", CV_WINDOW_AUTOSIZE);
	imshow("MyWindow", img);
	waitKey(0);
	destroyWindow("MyWindow");

    return 0;
}

