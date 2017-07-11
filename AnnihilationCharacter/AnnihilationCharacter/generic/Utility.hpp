#pragma once
namespace generic{
	//初めて変数テンプレート作った！！！いえーい
	template <class T>
	constexpr T pi = static_cast<T>(3.14159265358979323846);

	//ラジアン値に変換
	template<class T>
	constexpr T ToRad(T deg) {
		return (deg*pi<T>)/ 180;
	}

	//度数値に変換
	template<class T>
	constexpr T ToDeg(T rad) {
		return (rad*180)/pi<T>;
	}
}