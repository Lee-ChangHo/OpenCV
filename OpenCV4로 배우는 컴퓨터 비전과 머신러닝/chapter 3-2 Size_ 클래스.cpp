#include "opencv2/opencv.hpp"  // OpenCV에서 사용하는 다양한 클래스와 함수가 선언되어 있는 opencv.hpp 헤더 파일 포함
#include <iostream>  // C++ 표준 출력을위해 iostream 헤더 파일 포함

template<typename _Tp> class Size_
{
public:
	Size_();
	Size_(_Tp _width, _Tp _height);
	Size_(const Size_& sz);

	Size_& operator = (const Size_& sz);

	_Tp area() const;
	bool empty() const;

	_Tp width, height;
};

typedef Size_<int>		Size2i;
typedef Size_<int64>	Size2l;
typedef Size_<float>	Size2f;
typedef Size_<double>	Size2d;
typedef Size2i			Size;