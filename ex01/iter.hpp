#ifndef ITER_HPP
#define ITER_HPP

template  <typename MyType>

void iter(MyType* arrAddress, int arrLength, void (*a)(MyType const &))
{
	for(int i = 0; i < arrLength; i++)
	{
		a(arrAddress[i]);
	}
}


template< typename MyType >

void foo(MyType const num)
{
	std::cout<<num<<std::endl;
}





class Awesome
{
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }


template< typename MyType >

void print( MyType const & x ) 
{
	std::cout << x << std::endl;
	return; 
}

#endif