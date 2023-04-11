template<typename _Tp> class Point_
{
public:
	Point_(); //�⺻ ������
	Point_(_Tp _x, _Tp _y); //_TpŸ�� ������
	Point_(const Point_& pt); //���� ������

	Point_& operator = (const Point_& pt); //���� ������ ������

	//�� �޼��� ����
	_Tp dot(const Point_& pt) const;  //���� ���
	double ddot(const Point_& pt) const; //���� ����� double�� ��ȯ
	double cross(const Point_& pt) const; //���� ���
	bool inside(const Rect_<_Tp>& r) const; //���� ��ǥ�� Rect ���� �ȿ� ������ True ��ȯ
	
	...

	_Tp x, y;
};

//Ŭ���� �̸� ������
typedef Point_<int> Point2i;
typedef Point_<int64> Point2l;
typedef Point_<float> Point2f;
typedef Point_<double> Point2d;
typedef Point2i Point; //�⺻ Point Ÿ���� Point2i�� ����