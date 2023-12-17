#pragma once

namespace linucxx::structures
{
    template <typename T>
    struct Fraction
    {
	T numerator;
	T denominator;

	Fraction(T numerator, T denominator);
	Fraction(const Fraction& rhs);
	T quotient();
    }

    template <typename T>
    Fraction<T>::Fraction(T numerator, T denominator)
    {
	this->numerator = numerator;
	this->denominator = denominator;
    }

    template <typename T>
    Fraction<T>::Fraction(const Fraction& rhs);
    {
	this->numerator = rhs.numerator;
	this->denominator = rhs.denominator;
    }

    template <typename T>
    Fraction<T>::quotient()
    {
	return numerator / denominator; 
    }
};
