template<typename _Tp> class Point_
{
public:
	Point_(); //기본 생성자
	Point_(_Tp _x, _Tp _y); //_Tp타입 생성자
	Point_(const Point_& pt); //복사 생성자

	Point_& operator = (const Point_& pt); //대입 연산자 재정의

	//각 메서드 정의
	_Tp dot(const Point_& pt) const;  //내적 계산
	double ddot(const Point_& pt) const; //내적 결과값 double로 반환
	double cross(const Point_& pt) const; //외적 계산
	bool inside(const Rect_<_Tp>& r) const; //점의 좌표가 Rect 영역 안에 있으면 True 반환
	
	...

	_Tp x, y;
};

//클래스 이름 재정의
typedef Point_<int> Point2i;
typedef Point_<int64> Point2l;
typedef Point_<float> Point2f;
typedef Point_<double> Point2d;
typedef Point2i Point; //기본 Point 타입은 Point2i를 정의