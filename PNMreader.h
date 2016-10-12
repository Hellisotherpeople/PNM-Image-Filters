#include <stdio.h>
#include "source.h"

#ifndef PNMREADER_H
#define PNMREADER_H

class PNMreader: public source
{
    protected:

    
    public:
            char *filename;
            virtual void Update(); 
	    virtual void Execute();
	    PNMreader(const char *filename);
            virtual ~PNMreader(); // destructor
};

#endif