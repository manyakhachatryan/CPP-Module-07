#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP
#include <iostream>

template  <typename MyType>

void swap(MyType& a, MyType& b)
{
	MyType tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template  <typename MyType>

MyType min(MyType& a, MyType& b)
{
	if(a > b)
		return (b);
	else 
		return (a);
}

template  <typename MyType>

MyType max(MyType& a, MyType& b)
{
	if(a > b)
		return (a);
	else 
		return (b);
}

// class Awesome
// {
// 	public:
// 	Awesome(void) : _n(0) {}
// 	Awesome( int n ) : _n( n ) {}
// 	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
// 	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// 	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// 	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// 	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// 	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 	int get_n() const { return _n; }
// 	private:
// 	int _n;
// 	};
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

#endif