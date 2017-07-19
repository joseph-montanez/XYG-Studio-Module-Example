#include "library.h"

#include <iostream>
HSQAPI sq;

SQInteger modhello(HSQUIRRELVM v) {
    sq->pushstring(v, _SC("Hello Squirrel Module!"), -1);
    return 1;
}

// Module registration
SQRESULT sqmodule_load(HSQUIRRELVM v, HSQAPI api) {
    sq = api;

    sq->pushstring(v, _SC("hello"), -1);
    sq->newclosure(v, &modhello, 0);
    sq->newslot(v, -3, 0);

    return SQ_OK;
}