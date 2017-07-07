#pragma once
namespace generic{
	//double型の二次元ベクトル
	class Vect {
	public:
		double x, y;
		Vect() :x(0), y(0) {}
		Vect(double x, double y) :x(0), y(0) {}
		const Vect operator+(const Vect& v)const {
			return Vect(x + v.x, y + v.y);
		}
		const Vect operator-(const Vect& v)const {
			return Vect(x - v.x, y - v.y);
		}
		template<class T>
		const Vect operator*(const T&& value)const {
			return Vect(x*value, y*value);
		}
		template<class T>
		const Vect operator/(const T&& value)const {
			return Vect(x / value, y / value);
		}
	};
}