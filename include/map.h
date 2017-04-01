#ifndef MAP_H
#define MAP_H

#include "mapObject.h"
#include "gameExpansion.h"

#define mapObject_max_amount 1024

class map
{
    public:



        map();
        virtual ~map();

        void addObject(int type);

    protected:
        void addObject(mapObject *obj);
        int countObjectByTypeID(int TYPE_ID);

        int getNextID();
        int mapObject_IDs[mapObject_max_amount];
        mapObject *objects[mapObject_max_amount];
        int mapObject_count;
        int mapObject_max_ID;

    private:
};

#endif // MAP_H
