#ifndef _CREPELIBMANAGER_HPP
#define _CREPELIBMANAGER_HPP
#include <CrepeCore.hpp>
#include <Example.hpp>

class Core
{
    public:
        CrepeScript* ClassArr[1]={ 
			(CrepeScript*)new Example 
		};
};
#endif