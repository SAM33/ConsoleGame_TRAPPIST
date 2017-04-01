#ifndef MVC_H
#define MVC_H


#include <iostream>
#include <string>
#include <sstream>


namespace MVC
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

#endif // MVC_H
