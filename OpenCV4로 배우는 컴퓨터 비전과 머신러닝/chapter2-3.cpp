// 2-2와 달리 namespace를 사용해 cv:: 가 모두 사라져 간결해짐

#include "opencv2/opencv.hpp"  // OpenCV에서 사용하는 다양한 클래스와 함수가 선언되어 있는 opencv.hpp 헤더 파일 포함
#include <iostream>  // C++ 표준 출력을위해 iostream 헤더 파일 포함

using namespace cv;
using namespace std;

int main()
{
    cout << "Hello OpenCV" << CV_VERSION << endl; // C++ 표준 출력으로 OpenCV 라이브러리의 버전 출력하는 코드

	Mat img;  // Mat 클래스 타입의 변수 img 선언
	img = imread("lenna.bmp");  // imread() 함수로 영상파일 불러오기

	if (img.empty()) {
		cerr << "Image load failed!" << endl;  // 예외처리 코드
		return -1;
	}

	namedWindow("image"); // nameWindow() 함수로 영상을 화면에 나타내기 위한 새로운 창 생성 [창 이름 : image]
	imshow("image", img); // imshow() 함수를 이용해 image라는 창에 img 객체가 가지고 있는 lenna.bmp 영상 출력

	waitKey();  // 영상출력 후 사용자가 아무키나 누르면 종료
	return 0;
}