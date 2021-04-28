#include "TRint.h"

#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

#ifdef WITHRINT
        TRint *myapp = new TRint("RootSession",&argc,argv,NULL,0);
#else
        TApplication *myapp = new TApplication("myapp",0,0);
#endif



	
	myapp -> Run();
        return 0;

}

