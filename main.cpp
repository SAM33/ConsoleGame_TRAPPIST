#include <iostream>
#include "map.h"
#include "mapObject.h"
#include "cityObject.h"
int main(int argc, char**args){


    map m;
    m.addObject(EXPANSION::MAP_OBJECT_TYPE_CITY);
    m.addObject(EXPANSION::MAP_OBJECT_TYPE_CITY);
    m.addObject(EXPANSION::MAP_OBJECT_TYPE_CITY);
    std::cout<<"Hello World"<<std::endl;

}
