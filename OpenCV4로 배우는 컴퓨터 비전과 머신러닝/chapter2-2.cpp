#include "opencv2/opencv.hpp"  // OpenCV���� ����ϴ� �پ��� Ŭ������ �Լ��� ����Ǿ� �ִ� opencv.hpp ��� ���� ����
#include <iostream>  // C++ ǥ�� ��������� iostream ��� ���� ����

int main()
{
	std::cout<<"Hello OpenCV"<<CV_VERSION<<std::endl; // C++ ǥ�� ������� OpenCV ���̺귯���� ���� ����ϴ� �ڵ�

	cv::Mat img;  // Mat Ŭ���� Ÿ���� ���� img ����
	img = cv::imread("lenna.bmp");  // imread() �Լ��� �������� �ҷ�����

	if (img.empty()) { 
		std::cerr << "Image load failed!" << std::endl;  // ����ó�� �ڵ�
		return -1;
	}

	cv::namedWindow("image"); // nameWindow() �Լ��� ������ ȭ�鿡 ��Ÿ���� ���� ���ο� â ���� [â �̸� : image]
	cv::imshow("image", img); // imshow() �Լ��� �̿��� image��� â�� img ��ü�� ������ �ִ� lenna.bmp ���� ���

	cv::waitKey();  // ������� �� ����ڰ� �ƹ�Ű�� ������ ����
	return 0;
}