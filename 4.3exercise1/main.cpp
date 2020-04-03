#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
		cv::Mat frame = imread("E:\\PIC\\lena.jpg");
		cv::Mat frame1 = imread("E:\\PIC\\lena.jpg",0);
		cv::Mat SobelMat1;
		cv::Mat SobelMat2;
		cv::Mat outputMat1;
		cv::Mat outputMat2;

		Sobel(frame, SobelMat1, CV_16SC1, 1, 0, 3);
		Sobel(frame, SobelMat2, CV_16SC1, 0, 1, 3);
		Canny(SobelMat1, SobelMat2, outputMat2,20,60);
		Canny(frame1,outputMat1,20,60);

		imshow("src1",outputMat1 );
		imshow("src2", outputMat2);
		imshow("frame", frame);
		waitKey();
}