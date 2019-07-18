//#include <iostream>
//
//class Complex
//{
//	double real, img;
//public:
//	Complex(double real, double img) : real(real), img(img) {}
//	Complex(const Complex& c) { real = c.real, img = c.img; }
//
//	Complex operator+(const Complex& c);
//	Complex operator-(const Complex& c);
//	Complex operator*(const Complex& c);
//	Complex operator/(const Complex& c);
//	Complex& operator=(const Complex& c);
//	Complex operator+=(const Complex& c);
//	Complex operator-=(const Complex& c);
//	Complex operator*=(const Complex& c);
//	Complex operator/=(const Complex& c);
//
//	void println() { std::cout << "( " << real << " , " << img << " ) " << std::endl; }
//};
////Complex 객체를 매개변수와 반환 타입으로 갖는 전역 함수
////Complex operator+(const Complex& a, const Complex& b)
////{
////	Complex temp(a);
////	return temp + b;
////}
//Complex Complex::operator+(const Complex& c)
//{
//	Complex temp(real + c.real, img + c.img);
//	return temp;
//}
//Complex Complex::operator-(const Complex& c)
//{
//	Complex temp(real - c.real, img - c.img);
//	return temp;
//}
//Complex Complex::operator*(const Complex& c)
//{
//	Complex temp(real * c.real - img * c.img, real * c.img + img * c.real);
//	return temp;
//}
//Complex Complex::operator/(const Complex& c)
//{
//	Complex temp((real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
//		(img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));
//	return temp;
//}
//Complex& Complex::operator=(const Complex& c)
//{
//	real = c.real;
//	img = c.img;
//	return *this;
//}
//Complex Complex::operator+=(const Complex& c)
//{
//	(*this) = (*this) + c;
//	return *this;
//}
//Complex Complex::operator-=(const Complex& c)
//{
//	(*this) = (*this) - c;
//	return *this;
//}
//Complex Complex::operator*=(const Complex& c)
//{
//	(*this) = (*this) * c;
//	return *this;
//}
//Complex Complex::operator/=(const Complex& c)
//{
//	(*this) = (*this) / c;
//	return *this;
//}
//
//int main()
//{
//	Complex a(1.0, 2.0);
//	Complex b(3.0, -2.0);
//	Complex c(0.0, 0.0);
//	Complex d(1.0, -1.0);
//	c = a * b + a / b + a + b;
//	d += c;
//
//	c.println();
//	d.println();
//
//	Complex x(0, 0);
//
//
//	return 0;
//}