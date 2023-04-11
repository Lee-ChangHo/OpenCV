// 2-2�� �޸� namespace�� ����� cv:: �� ��� ����� ��������

#include "opencv2/opencv.hpp"  // OpenCV���� ����ϴ� �پ��� Ŭ������ �Լ��� ����Ǿ� �ִ� opencv.hpp ��� ���� ����
#include <iostream>  // C++ ǥ�� ��������� iostream ��� ���� ����

using namespace cv;
using namespace std;

int main()
{
    cout << "Hello OpenCV" << CV_VERSION << endl; // C++ ǥ�� ������� OpenCV ���̺귯���� ���� ����ϴ� �ڵ�

	Mat img;  // Mat Ŭ���� Ÿ���� ���� img ����
	img = imread("lenna.bmp");  // imread() �Լ��� �������� �ҷ�����

	if (img.empty()) {
		cerr << "Image load failed!" << endl;  // ����ó�� �ڵ�
		return -1;
	}

	namedWindow("image"); // nameWindow() �Լ��� ������ ȭ�鿡 ��Ÿ���� ���� ���ο� â ���� [â �̸� : image]
	imshow("image", img); // imshow() �Լ��� �̿��� image��� â�� img ��ü�� ������ �ִ� lenna.bmp ���� ���

	waitKey();  // ������� �� ����ڰ� �ƹ�Ű�� ������ ����
	return 0;
}