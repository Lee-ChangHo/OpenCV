#include "opencv2/opencv.hpp"  // OpenCV���� ����ϴ� �پ��� Ŭ������ �Լ��� ����Ǿ� �ִ� opencv.hpp ��� ���� ����
#include <iostream>  // C++ ǥ�� ��������� iostream ��� ���� ����

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