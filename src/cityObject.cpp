#include "cityObject.h"

cityObject::cityObject(int ID) : mapObject(ID)
{
    mapObject::updateTypeName("cityObject");
    setTypeID(EXPANSION::MAP_OBJECT_TYPE_CITY);
    //ctor
}

cityObject::~cityObject()
{
    //dtor
}


