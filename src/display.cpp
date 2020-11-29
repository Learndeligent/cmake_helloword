#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat A = imread("/Users/feihong/Desktop/2018-03-11 160702.jpg");

	imshow("hello", A);
	waitKey(0);

	return 0;
}